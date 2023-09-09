#include <cs50.h>
#include <stdio.h>

//create a function that build a triangle, having 3 leghts with only positive numbers.
//if the sum of two sides must be greater than the third side.
//don´t prompt the user, just make the function

bool valid_triangle(float a, float b, float c);

int main(void){

}

bool valid_triangle (float a, float b, float c)
{
    if(a <= 0 || b <= 0 || c <= 0){
        return false;
        printf("Only positive numbers!");
    }

//if the sum of any two sides is not greater than the third, print false
    if((a+b <= c) || (a+c <= b) || (b+c <= a)){
        return false;
    }

// if the sum is greater, print true
    return true;
}