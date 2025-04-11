#ifndef GETPIXELSFROMIMAGEFILE
#define GETPIXELSFROMIMAGEFILE

#include <SDL.h>
#include <SDL_image.h>
#include <include/state.h>


class GetPixelsFromImageFile {
private:
    SDL_Surface* surface;
    int img_heigth;
    int img_width; 

    SDL_Color GetPixelColor(const SDL_Surface* surf, const int X, const int Y)
    {
        const Uint8 Bpp = surf->format->BytesPerPixel;

        Uint8* pPixel = (Uint8*)surf->pixels + Y * surf->pitch + X * Bpp;

        Uint32 PixelData = *(Uint32*)pPixel;

        SDL_Color Color = {0x00, 0x00, 0x00, SDL_ALPHA_OPAQUE};

        SDL_GetRGB(PixelData, surf->format, &Color.r, &Color.g, &Color.b);

        return Color;
    }
public:
    GetPixelsFromImageFile(const char*& path) {
        surface = IMG_Load(path);

        img_heigth = surface->h;
        img_width = surface->w; 
    }

    int getHeight() {
        return img_heigth;
    }

    int getWidth() {
        return img_width;
    }

    State getPixels()
    {
        std::cout << img_heigth << " " << img_width << std::endl;
        
        State goal_state {img_width, img_heigth};

        for (int i = 0; i < img_width; i++) {
            for (int j = 0; j < img_heigth; j++) {
                const SDL_Color colorval = GetPixelColor(surface, i, j);
                std::cout << i << j << std::endl;
                goal_state.setPixel(i, j, TDT4102::Color{colorval.r, colorval.g, colorval.b, colorval.a});
            }
        }
        std::cout << "finished" << std::endl;
        return goal_state;

    }

};


#endif