static double g_global_gravity = 9.82;

// Do not allow direct access to variable
// Better to encapulate it
double getGlobalGravity(){
	return g_global_gravity;
}
