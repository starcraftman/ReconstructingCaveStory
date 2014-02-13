#ifndef _GRAPHICS_HPP_
#define _GRAPHICS_HPP_

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

/****************** Class Declaration *********************/
class SDL_Surface;
class SDL_Rect;

class Graphics {
public:
    Graphics();
    ~Graphics();

    /* Function to put a surface on the screen. Specify source bitmap
     * then the source position and dest position on screen. */
    void blitSurface(SDL_Surface *source,
                     SDL_Rect *s_rect, SDL_Rect *d_rect);

    /* Flip when done writing to double buffer. */
    void flip();

private:
    SDL_Surface *screen_;
};

/********************* Prototypes *************************/


#endif /* _GRAPHICS_HPP_ */
