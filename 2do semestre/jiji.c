#include <stdio.h>
int main()
{
    printf("\nLos tipos de datos son:\n ");
    printf("\nint:\nRango maximo:%lu\nTamano:%lu\n", __INT_MAX__, sizeof(int));
    printf("\nchar:\nRango maximo:%lu\nTamano:%lu\n", __SCHAR_MAX__, sizeof(char)); 
    printf("\nshort:\nRango maximo:%lu\nTamano:%lu\n", __SHRT_MAX__, sizeof(short));
    printf("\nlong:\nRango maximo:%lu\nTamano:%lu\n", __LONG_MAX__, sizeof(long));
    printf("\nfloat:\nRango maximo:%lu\nTamano:%lu\n", __FLT_MAX__, sizeof(float));
    printf("\ndouble:\nRango maximo:%lu\nTamano:%lu\n", __DBL_MAX__, sizeof(double));
    printf("\nunsigned int:\nRango maximo:%lu\nTamano:%lu\n", __UINT16_MAX__, sizeof(unsigned));
    
    return 0;
}