#include <iostream>
#include <stdio.h>
#include<stdlib.h>

using namespace std;

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main(){

    int num1=10 ,num2=14;

    swap(&num1,&num2);

    cout<<"Frist Number "<<num1<<endl;
    cout<<"Second Number "<<num2<<endl;
    return 0;
}