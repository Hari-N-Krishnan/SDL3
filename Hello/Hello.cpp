#include <SDL3/SDL.h>
#include <iostream>
using namespace std;

int main(){

    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* myWindow = SDL_CreateWindow("Hello", 1200, 720, SDL_WINDOW_MAXIMIZED | SDL_WINDOW_RESIZABLE);

    SDL_Delay(500);
    SDL_Quit();
    return 0;
}