#ifndef GETPIXELSFROMIMAGEFILE
#define GETPIXELSFROMIMAGEFILE

#include <SDL.h>
#include <SDL_image.h>
#include <include/state.h>

template<int Rows, int Columns>
class GetPixelsFromImageFile {
private:
    State<Rows, Columns> goal_image;
     
public:
    GetPixelsFromImageFile() {}

    State<Rows, Columns> getGoalImage() {}

    SDL_Color GetPixelColor(const SDL_Surface* pSurface, const int X, const int Y)
    {
        // Bytes per pixel
        const Uint8 Bpp = pSurface->format->BytesPerPixel;

        /*
        Retrieve the address to a specific pixel
        pSurface->pixels	= an array containing the SDL_Surface' pixels
        pSurface->pitch		= the length of a row of pixels (in bytes)
        X and Y				= the offset on where on the image to retrieve the pixel, (0, 0) is in the upper left corner of the image
        */
        Uint8* pPixel = (Uint8*)pSurface->pixels + Y * pSurface->pitch + X * Bpp;

        Uint32 PixelData = *(Uint32*)pPixel;

        SDL_Color Color = {0x00, 0x00, 0x00, SDL_ALPHA_OPAQUE};

        // Retrieve the RGB values of the specific pixel
        SDL_GetRGB(PixelData, pSurface->format, &Color.r, &Color.g, &Color.b);

        return Color;
    }

    void getPixels()
    {
        SDL_Surface* pSurface = IMG_Load("assets/Bart-iver.png");
        int img_heigth = 400;
        int img_width = 400; 

        for (int i = 0; i < img_heigth; i++) {
            for (int j = 0; j < img_width; j++) {
                const SDL_Color colorval = GetPixelColor(pSurface, j, i);

                goal_image.setPixel(j, i, TDT4102::Color{colorval.r, colorval.b, colorval.g, colorval.a});
            }
        }
        

        std::cout << std::endl;
    }

};


#endif