#include <stdio.h>

void sum(int* a, int* b);

int main(){
    int a = 10;
    int b = 12;

    sum(&a, &b);

    printf("%d\n", a);

}

void sum(int* a, int* b){
    *a += *b;
}