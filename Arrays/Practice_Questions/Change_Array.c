#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/4;

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    //Changes
    for(int i=0; i<size; i++){
        if(i % 2 == 0){     //if(i % 2 != 0) arr[i] *= 2
            arr[i] += 10;
        }else
        {
            arr[i] *= 2;    //arr[i] += 10
        }
    }

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
