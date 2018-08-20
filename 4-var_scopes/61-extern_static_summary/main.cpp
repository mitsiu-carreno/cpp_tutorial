// Uninitialized definition
int g_x; 				// defines uninitialized global variable (external linkage)
static int g_x; // defines uninitialized static variable (internal linkage)
const int g_x;	// NOT ALLOWED const variables MUST be initialized

// Forward declaration via the extern keyword
extern int g_z;				// forward declaration for global variable defined elsewhere
extern const int g_z; // forward declaration for const global variable defined elsewhere

// Initialized declaration
int g_y(1);					// defines initialized global variable (external linkage)
static int g_y(1);	// defines initialized static variable (internal linkage)
const intg_y(1);		// defines initialized static variable (internal linkage)

// Initialized definition w/extern keyword
extern int g_w(1);	// defines initialized global variable (external linkage, extern keyword is redundant in this case)
extern const int g_w(1);	// defines initialized const global variable (external linkage)
