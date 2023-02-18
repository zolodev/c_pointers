/*****************************************************************************
 * Filename      : person.c
 * Created       : Sat Feb 18 2023
 * Author        : zolodev
 * Github        : https://github.com/zolodev
 * Description   : small descriptive program example of C Pointers
 *                 Watch this youtube video for more information:
 *                 https://www.youtube.com/watch?v=q24-QTbKQS8
*****************************************************************************/

#include <stdio.h>

struct Person
{
    char name[64];
    int age;
};

// Get a person object by reference
void updatePersonStruct(struct Person *p, int new_age)
{
    // Update the referenced object property 
    p->age = new_age;
}

int main(int argc, char **argv)
{
    struct Person person_object;
    updatePersonStruct(&person_object, 100);    // pass object as a reference

    printf("Person age: %d\n", person_object.age);
    
}

