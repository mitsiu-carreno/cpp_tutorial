#ifdef INT_2_BYTES
typedef char my_int8_t;
typedef int my_int16_t;
typedef long my_int32_t;
#else
typedef char my_int8_t;
typedef short my_int16_t;
typedef int my_int32_t;
#endif 
