#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
    int A[10]={2,3,5,7,2,9,9,4,8,5};
    
    for(int x:A)
    {
        cout<<x<<endl;
    }

    return 0;
}