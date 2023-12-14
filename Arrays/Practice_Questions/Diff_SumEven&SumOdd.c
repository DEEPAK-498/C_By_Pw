#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/4;

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    //Changes
    int sum_even = 0;
    int sum_odd = 0;
    for(int i=0; i<size; i++){
        if(i % 2 == 0){     //even
            sum_even += arr[i];
        }else
        {
            sum_odd += arr[i];    //odd
        }
    }
    printf("Sum Of Even Indices: %d\nSum Of Odd Indices: %d", sum_even, sum_odd);
    printf("\n");
    return 0;
}
