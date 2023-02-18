/*****************************************************************************
 * Filename      : main.c
 * Created       : Sat Feb 18 2023
 * Author        : zolodev
 * Github        : https://github.com/zolodev
 * Description   : This is a small file just to learn about C Pointers
 *                 For more information, Watch YouTube video: 
 *                 https://www.youtube.com/watch?v=2ybLD6_2gKM
 *                 and
 *                 https://www.youtube.com/watch?v=egRIkkBEttg
*****************************************************************************/

#include <stdio.h>


//       Memory
//-------------------------------------------------------
// Address  |   Value (hex) | example implementation    |
//-------------------------------------------------------
// 0x1000   |   0x4         | int x = 4;                |
// 0x1004   |   0x1000      | int *pX = &x;             |
//-------------------------------------------------------


int main(int argc, char *argv[])
{
    
    int x = 4;      // "integer named x is set to value 4"
    int *pX = &x;   // "integer pointer named pX (p = pointer) is set to to the address of x"

    printf("value of x: %d\n", x);
    printf("value of pX (memory address): %d\n", pX);

    // We can copy the value by reference instead by value.
    // This is important when passing around big/large objects.
    // It is much smarter to do that by using references (and pointers)
    // instead of copying the whole objects multiple times.

    // To copy the value from a pointer
    int y = *pX;    // Copy the value at the address of &x, in this case the value 4.
    // when '*' is used on the right hand side like above the * i refered to a dereference.
    // That means go to the address pointet to by the pointer and grab that value.
    // so, int y = *pX; translates to:
    // integer named y is set to the thing pointed to by pX" 

    printf("value of y: %d\n", y);
    printf("value of &y (y points to address): %d\n", &y);
    
}