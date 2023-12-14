#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/4;

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    int x = 5;
    int count = 0;
    
    //Counting
    for(int i=0; i<size; i++){
        if(arr[i] < x){
            count++; //Count how many numbers are <x
            printf("%d ", arr[i]); //Print the numbers That are <x
        }
    }
    printf("\n");
    printf("%d", count); //Print how many numbers <x
    printf("\n");
    return 0;
}
