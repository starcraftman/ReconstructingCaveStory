/********************* Header Files ***********************/
/* C++ Headers */
#include <iostream> /* Input/output objects. */
//#include <fstream> /* File operations. */
//#include <sstream> /* String stream. */
#include <string> /* C++ String class. */
//#include <new> /* Defines bad_malloc exception, new functions. */
//#include <typeinfo> /* Casting header. */
//#include <exception> /* Top level exception header. */
//#include <stdexcept> /* Derived exception classes. */

/* STL Headers */
//#include <vector>
//#include <list>
//#include <deque>
//#include <stack>
//#include <queue>
//#include <priority_queue>
//#include <bitset>
//#include <set> // multiset for multiple keys allowed.
//#include <map> // multimap for multiple keys allowed.
//#include <utility> // Has pair for map.
//#include <algorithm>
//#include <numeric>
//#include <functional> // Functional objects.
//#include <iterator> // Contains back_inserter function and like.

/* C Headers */
//#include <cstdlib>
//#include <cstddef>
//#include <cctype>
//#include <cstring>
//#include <cstdio>
//#include <climits>
//#include <cassert>

/* Project Headers */
#include "game.hpp"
#include "SDL/SDL.h"

/******************* Constants/Macros *********************/
namespace {
    const int kScreenWidth = 640;
    const int kScreenHeight = 480;
    const int kBitsPerPixel = 32;
    const int kFlags = 0;
    const double kFPS = 60;
}

/**************** Namespace Declarations ******************/
using std::cin;
using std::cout;
using std::endl;
using std::string;

/******************* Type Definitions *********************/
/* For enums: Try to namesapce the common elements.
 * typedef enum {
 *	VAL_,
 * } name_e;
 */

/* For structs:
 * typedef struct name_s {
 *	int index;
 * } name_t;
 */

/****************** Class Definitions *********************/
Game::Game() {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_ShowCursor(SDL_DISABLE);
    screen_ = SDL_SetVideoMode(kScreenWidth, kScreenHeight, kBitsPerPixel, kFlags);
    eventLoop();
}

Game::~Game() {
    SDL_FreeSurface(screen_);
    SDL_Quit();
}

void Game::eventLoop() {
    SDL_Event event;
    bool running = true;

    while (running) { // Runs at 1/60th of a second on this outer loop.
        const int start_time_ms = SDL_GetTicks();

        while (SDL_PollEvent(&event)) {
            switch(event.type) {
                case SDL_KEYDOWN:
                    if (event.key.keysym.sym == SDLK_ESCAPE) {
                        running = false;
                    }
                    break;

                default:
                    break;
            }
        }

        update();
        draw();

        const int elapsed_time_ms = SDL_GetTicks() - start_time_ms;
        SDL_Delay(1000/kFPS - elapsed_time_ms);
    }
}

void Game::draw() {

}

void Game::update() {

}


/****************** Global Functions **********************/
