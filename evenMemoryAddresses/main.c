#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++){
        if(arr[i] % 2 == 0){
            printf("%p\n", &arr[i]);
        }
    }
    return 0;
}