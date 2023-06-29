#include<stdio.h>
#include<SDL.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

SDL_Window* mainwindow = NULL;  //main window declare

SDL_Surface* mainsurface;  //main surface declare

bool initalise_all();

bool load_all_media();

void close();







bool initalise_all()
{

    bool sucess = true;

    if(SDL_Init(SDL_INT_|VIDEO)<0)
    {
        printf("SDL couldnot be initalised! SDL Error: %s\n",SDL_GetError());
        sucess=false;
    }
    else{
        mainwindow = SDL_CreateWindow("Game",SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH , SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if(mainwindow = NULL)
        {
            printf("SDL window could not be created! SDL Error : %s\n",SDL_GetError());
            sucess=flase;
        }
        else{
            mainsurface = SDL_GetWindowSurface(mainwindow);
            if(mainsurface=NULL)
            {
                printf("SDL surface could not be created! SDL error : %s",SDL_GetError());
                sucess=flase;
            }
        }
    }
    return sucess;
}


bool load_all_media()
{



}


void close()
{



}






int main(int argc, char argv[])
{


}
