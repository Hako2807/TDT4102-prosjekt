#ifndef GETPIXELSFROMIMAGE
#define GETPIXELSFROMIMAGE

#include <SDL.h>
#include <state.h>

template<typename T, int Rows, int Columns>
class GetPixelsFromImage {
private:
    State<T, Rows, Columns> goal_image;
public:
    GetPixelsFromImage();

    State<T, Rows, Columns> getGoalImage();

    void getPixelsFromImage(TDT4102::Path path);
};


#endif;