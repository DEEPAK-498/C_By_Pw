#include <stdio.h>

int main(){
    int arr[4][2] = {{1,30},{2,49},{3,45},{4,58}};

    //Row Wise Printing
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
