#include <iostream>
// define two global variables
// non-const globals have external linkage by default

int g_x;	// external linkage by default
extern int g_y(2);	// external linkage by default, so this extern is redundant and ignored

// in this file, g_x and g_y can be used anywhere beyond this point
