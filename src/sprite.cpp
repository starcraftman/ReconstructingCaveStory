/**
 * Template C++ file.
 * Function with references to pointers: func(int *&ptr);
 */
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
#include "SDL/SDL.h"
#include "sprite.hpp"
#include "graphics.hpp"

/******************* Constants/Macros *********************/


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
Sprite::Sprite(const std::string& file_path,
       int source_x, int source_y,
       int width, int height) {
    sprite_sheet_ = SDL_LoadBMP(file_path.c_str());
    s_rect.x = source_x;
    s_rect.y = source_y;
    s_rect.w = width;
    s_rect.h = height;

}

Sprite::~Sprite() {
    SDL_FreeSurface(sprite_sheet_);
}

void Sprite::draw(Graphics& graphics, int x, int y) {
    SDL_Rect d_rect;
    d_rect.x = x;
    d_rect.y = y;
    graphics.blitSurface(sprite_sheet_, &s_rect, &d_rect);
}

/****************** Global Functions **********************/

