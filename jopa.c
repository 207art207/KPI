#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main int() {
    int x11 = 1;
    int x12 = 2;
    int x13 = 3;
    int x21 = 5;
    int x22 = 6;
    int x23 = 7;
    int x31 = 9;
    int x32 = 4;
    int x33 = 3;
int matrix_1[3][3] = {
    {x11, x12, x13},
    {x21, x22, x23},
    {x31, x32, x33}
    };
    
    int y11 = 3;
    int y12 = 4;
    int y13 = 5;
    int y21 = 6;
    int y22 = 7;
    int y23 = 3;
    int y31 = 9;
    int y32 = 5;
    int y33 = 2;
int matrix_2[3][3] = {
        {y11, y12, y13},
        {y21, y22, y23},
        {y31, y32, y33}
        };
        
    int z11 = x11*y11+x12*y21+x13*y31
    int z12 = x11*y12+x12*y22+x13*y32
    int z13 = x11*y13+x12*y23+x13*y33
    int z21 = x21*y11+x22*y21+x23*y31
    int z22 = x21*y12+x22*y22+x23*y32
    int z23 = x21*y13+x22*y23+x23*y33
    int z31 = x31*y11+x32*y21+x33*y31
    int z32 = x31*y12+x32*y22+x33*y32
    int z33 = x31*y13+x32*y23+x33*y33
int matrix_3[3][3] = {
    {z11, z12, z13},
    {z21, z22, z23},
    {z31, z32, z33}
    };
    
printf ("matrix_3 = %d", matrix_3[3][3])
}