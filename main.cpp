// Include
#include "src/headers/main.h"
#include "src/headers/typedef.h"
#include <SDL.h>


// Typedef
using string_t = std::string;

void window_management()
{
    SDL_Window *window; // Declare pointer to window
    
    SDL_Init(SDL_INIT_EVERYTHING); // Initialize SDL2
    // Create window with following settings
    window = SDL_CreateWindow(
        "SDL2 window",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        1600,
        900,
        SDL_WINDOW_OPENGL
    );

    // Check if the window was created
    if (window == NULL)
    {
        printf("Could not create window: %s \n", SDL_GetError());
    }

    SDL_Event event;

    while (true)
    {
        SDL_PollEvent(&event);
        if (event.type == SDL_QUIT)
        {
            break;
        }
    }
}

void keyboard_checker()
{
    SDL_Event event;

    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
        case SDL_KEYDOWN:
            printf("Key press detected \n");
            break;

        case SDL_KEYUP:
            printf("Key release detected \n");
            break;

        default:
            break;
        }
    }
}

int main(int argc, char* argv[])
{
    window_management();
    keyboard_checker();

    SDL_Quit();
    return 0;
}
