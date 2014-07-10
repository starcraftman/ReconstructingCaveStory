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
#include <vector>
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
#include "gtest/gtest.h"

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


/****************** Global Functions **********************/
int fib(int n) {
	if (n < 0)
		return 0;
	if (n < 2)
		return n;

	int f_n2 = 0, f_n1 = 1, f_n = 0, t = 1;
	while(t++ != n) {
		f_n = f_n2 + f_n1;
		f_n2 = f_n1;
		f_n1 = f_n;
	}

	return f_n;
}

int factorial(int n) {
	if (n < 0)
		return 1;

	return factorial(n-1) * n;
}

void testAssert() {
	std::vector<int> v, v2;
	v.push_back(1);
	v2.push_back(1);

	ASSERT_EQ(v.size(), v2.size());

	for (std::vector<int>::size_type i = 0; i < v.size(); ++i) {
		EXPECT_EQ(v[i], v2[i]) << "Vectors v & v2 differ at index " << i;
	}
}

TEST(FibTest, HandlesZeroInput) {
	EXPECT_EQ(0, fib(0));
}

TEST(FibTest, HandlesPositiveInput) {
	EXPECT_EQ(1, fib(1));
	EXPECT_EQ(1, fib(2));
	EXPECT_EQ(2, fib(3));
	EXPECT_EQ(21, fib(8));
}

/**
 * Main loop of the function.
 */
int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	testAssert();
	return RUN_ALL_TESTS();
}


/* Notes:
 * Force call to use another version of virtual function: baseP->Item_base::net_price(42);
 *
 */
