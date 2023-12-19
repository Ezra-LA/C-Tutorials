#include <iostream>
#include <SDL2/SDL.h> // include the SDL library

// screen dimensions
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

// ball position and velocity
float ballPosX = SCREEN_WIDTH / 2.0f;
float ballPosY = SCREEN_HEIGHT / 2.0f;
float ballVelX = 2.0f;
float ballVelY = 2.0f;

// function to initialize the SDL settings
void initSDL(SDL_Window** window, SDL_Renderer** renderer) {
  // initialize SDL
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    std::cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
    exit(1);
  }

  // create window
  *window = SDL_CreateWindow("Bounce Ball Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
  if (*window == nullptr) {
    std::cout << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
    exit(1);
  }

  // create renderer
  *renderer = SDL_CreateRenderer(*window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  if (*renderer == nullptr) {
    std::cout << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
    exit(1);
  }

  // set renderer color
  SDL_SetRenderDrawColor(*renderer, 0, 0, 0, 255);
}

// function to handle the ball movement
void updateBall() {
  // update ball position
  ballPosX += ballVelX;
  ballPosY += ballVelY;

  // check for collision with screen edges
  if (ballPosX < 0 || ballPosX > SCREEN_WIDTH) {
    ballVelX = -ballVelX;
  }
  if (ballPosY < 0 || ballPosY > SCREEN_HEIGHT) {
    ballVelY = -ballVelY;
  }
}

// function to handle the ball drawing
void drawBall(SDL_Renderer* renderer) {
  // set color to red
  SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

  // draw ball
  SDL_Rect ballRect = { (int)ballPosX - 10, (int)ballPosY - 10, 20, 20 };
  SDL_RenderFillRect(renderer, &ballRect);
}

// function to handle the game loop
void gameLoop(SDL_Window* window, SDL_Renderer* renderer) {
  SDL_Event event;
  bool quit = false;

  while (!quit) {
    // handle events
    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_QUIT) {
        quit = true;
      }
    }

    // update ball position
    updateBall();

    // clear screen
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    // draw ball
    drawBall(renderer);

    // update screen
    SDL_RenderPresent(renderer);
  }
}

// function to clean up the SDL resources
void cleanUpSDL(SDL_Window* window, SDL_Renderer* renderer) {
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
}

int main(int argc, char** argv) {
  // initialize SDL
  SDL_Window* window = nullptr;
  SDL

