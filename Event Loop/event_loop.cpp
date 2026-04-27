#include <SDL3/SDL.h>
#include <iostream>
using namespace std;

int main(){

    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* myWindow = SDL_CreateWindow("Event Loop", 320, 240, SDL_WINDOW_MAXIMIZED | SDL_WINDOW_RESIZABLE);

    SDL_Event event;

    bool gameRunning = true;
    // Application's main loop 
    while(gameRunning){
        // Event handling loop
        while(SDL_PollEvent(&event)){
            switch (event.type){
                case SDL_EVENT_MOUSE_MOTION:
                    SDL_Log("We got a motion event.");
                    SDL_Log("Current mouse position is: (%f, %f)", event.motion.x, event.motion.y);
                    break;         
                case SDL_EVENT_QUIT:
                    gameRunning = false;
                    break;
                case SDL_EVENT_KEY_DOWN:
                    SDL_Log("pressed %d", event.key.key);
                default:
                    SDL_Log("Unhandled Event!");
                break;          
            }
        }
        
        // Main Logic for the game
    }


    SDL_Quit();
    return 0;
}