/*****************************************************************************
 * Filename      : pointers.c
 * Created       : Sat Feb 18 2023
 * Author        : zolodev
 * Github        : https://github.com/zolodev
 * Description   : This is a small file just to learn about C Pointers
 *                 For more information, Watch YouTube video: 
 *                 https://www.youtube.com/watch?v=egRIkkBEttg
*****************************************************************************/
#include <stdio.h>

int main(void)
{
    int x = 4;
    int *my_ptr = &x;
    int **my_d_ptr = &my_ptr;

    printf("x address=%p, x (value)=%d\n", &x, x);
    printf("my_ptr address=%p, my_ptr=%p, *my_ptr(dref value)=%d\n", &my_ptr, my_ptr, *my_ptr);
    printf("my_d_ptr address=%p, my_d_ptr=%p, **my_d_ptr(dref value)=%d\n", &my_d_ptr, my_d_ptr, **my_d_ptr);
    
    return 0;
}