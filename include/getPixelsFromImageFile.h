#ifndef GETPIXELSFROMIMAGEFILE
#define GETPIXELSFROMIMAGEFILE

#include <SDL.h>
#include <SDL_image.h>
#include <include/state.h>

template<int Rows, int Cols>
class GetPixelsFromImageFile {
private:
    State goal_image;

    SDL_Color GetPixelColor(const SDL_Surface* pSurface, const int X, const int Y)
    {
        // Hippity hoppity this code is now my property https://discourse.libsdl.org/t/how-do-i-get-the-rgb-values-of-a-pixel-from-a-given-surface-and-x-and-y-coordinates-in-sdl2/26915/2  
        const Uint8 Bpp = pSurface->format->BytesPerPixel;

        Uint8* pPixel = (Uint8*)pSurface->pixels + Y * pSurface->pitch + X * Bpp;

        Uint32 PixelData = *(Uint32*)pPixel;

        SDL_Color Color = {0x00, 0x00, 0x00, SDL_ALPHA_OPAQUE};

        SDL_GetRGB(PixelData, pSurface->format, &Color.r, &Color.g, &Color.b);

        return Color;
    }
public:
    GetPixelsFromImageFile() : goal_image {Rows, Cols} {}

    State returnState() {
        return goal_image;
    }

    void getPixels(const char*& path)
    {
        SDL_Surface* pSurface = IMG_Load(path);
        int img_heigth = 400;
        int img_width = 400; 

        for (int i = 0; i < img_heigth; i++) {
            for (int j = 0; j < img_width; j++) {
                const SDL_Color colorval = GetPixelColor(pSurface, j, i);

                goal_image.setPixel(j, i, TDT4102::Color{colorval.r, colorval.g, colorval.b, colorval.a});
            }
        }
        

        std::cout << std::endl;
    }

};


#endif