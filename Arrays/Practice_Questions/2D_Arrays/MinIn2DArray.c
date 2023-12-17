#include <stdio.h>
#include <limits.h>

int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    int max = INT_MAX; 
    for(int r=0; r<3; r++){
        for(int c=0; c<3; c++){
            if(max>arr[r][c]) max = arr[r][c];
        }
    }
    printf("\n");
    //Row Wise Printing
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    printf("maximum is: %d", max);
    printf("\n");
    return 0;
}
