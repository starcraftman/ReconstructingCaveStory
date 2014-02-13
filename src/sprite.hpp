#ifndef _SPRITE_HPP_
#define _SPRITE_HPP_

/********************* Header Files ***********************/
/* C++ Headers */
//#include <iostream> /* Input/output objects. */
//#include <fstream> /* File operations. */
//#include <sstream> /* String stream. */
//#include <string> /* C++ String class. */
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

/* C Headers */
//#include <cstdlib>
//#include <cstddef>
//#include <cctype>
//#include <cstring>
//#include <cstdio>
//#include <climits>
//#include <cassert>

/* Project Headers */

/******************* Constants/Macros *********************/


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

/**************** Class/Func Declaration *******************/
class string;
class SDL_Surface;
class SDL_Rect;
class Graphics;

class Sprite {
public:
    Sprite(const std::string& file_path,
           int source_x, int source_y,
           int width, int height);
    ~Sprite();

    /* Draw sprite at x and y on screen, top left = 0,0 */
    void draw(Graphics& graphics, int x, int y);

private:
    SDL_Surface *sprite_sheet_;
    SDL_Rect s_rect;
};

#endif /* _SPRITE_HPP_ */
