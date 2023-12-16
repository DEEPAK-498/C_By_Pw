#include <stdio.h>

int main(){
    int arr[4][3]={1,2,3,4,5,6,7,8,0,34,65,75};

    //Row Wise Printing
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Column Wise Printing
    for(int j=0; j<3; j++){
        for(int i=0; i<4; i++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
