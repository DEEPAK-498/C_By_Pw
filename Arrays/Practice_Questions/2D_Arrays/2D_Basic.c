#include <stdio.h>

int main(){
    //int arr[4][2] = {{1,30},{2,49},{3,45},{4,58}};
    //int arr[4][2] = {1,30,2,49,3,45,4,58};    //this will also work by using comma.
    int arr[][2] = {1,30,2,49,3,45,4,58};   //We Can Use Without Defining The Row But This Is not same with column we have to give that value.

    //printing Output
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
