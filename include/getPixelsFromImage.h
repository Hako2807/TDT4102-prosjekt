#ifndef GETPIXELSFROMIMAGE
#define GETPIXELSFROMIMAGE

#include <SDL.h>
#include <include/state.h>

template<int Rows, int Columns>
class GetPixelsFromImage {
private:
    State<Rows, Columns> goal_image;
     
public:
    GetPixelsFromImage();

    State<Rows, Columns> getGoalImage();

    void getPixelsFromImage(){
    }
};


#endif