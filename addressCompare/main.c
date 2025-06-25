#include <stdio.h>

int* cmp(int* a, int* b);

int main(){
    int a = 10;
    int b = 20;
    printf("%p\n", (void*)cmp(&a, &b));
}


int* cmp(int* a, int* b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}