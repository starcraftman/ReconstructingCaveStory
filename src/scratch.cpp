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

/******************* Constants/Macros *********************/
// Example to combine two enums in a prepending method.
#define MAKE_FIRST(enum_type) FIRST_##enum_type
#define FIRST_TEST 11
#define TEST 5

#define ENUM_FOREACH(var, enum_type) \
    for (int var = FIRST_##enum_type; var < LAST_##enum_type; ++var)

/**************** Namespace Declarations ******************/
using std::cin;
using std::cout;
using std::endl;
using std::string;

/******************* Type Definitions *********************/
enum EnumType {
    FIRST_ENUM_TYPE,
    A = FIRST_ENUM_TYPE,
    B,
    C,
    D,
    E,
    LAST_ENUM_TYPE
};

/****************** Class Definitions *********************/


/****************** Global Functions **********************/
/**
 * Main loop of the function.
 */
int main(void) {
    cout << "Hello this is a scratch file for testing code." << endl;

    cout << MAKE_FIRST(TEST) << endl;

    ENUM_FOREACH(evar, ENUM_TYPE) {
        cout << evar << endl;
    }

    return 0;
}
