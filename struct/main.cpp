#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};


int main (){

    struct Rectangle r1={10,5};
    printf("%d", sizeof(r1));
    return 0;
}