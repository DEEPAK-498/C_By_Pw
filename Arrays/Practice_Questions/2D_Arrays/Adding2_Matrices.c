#include <stdio.h>

int main(){
    int arr[2][2] = {1,2,3,4};
    int brr[2][2] = {4,3,5,7};
    int sum[2][2];

    //Adding 
    for(int r=0; r<2; r++){
        for(int c=0; c<2; c++){
        sum[r][c] = arr[r][c] + brr[r][c];
        }
    }
    printf("\n");
    //Row Wise Printing
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
