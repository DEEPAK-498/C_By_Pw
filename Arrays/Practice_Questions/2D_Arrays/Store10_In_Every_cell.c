#include <stdio.h>

int main(){
    int arr[5][5];
    int n;

    // //User Input
    // printf("Enter the number: ");
    // scanf("%d", &n);

    //storing 
    for(int r=0; r<5; r++){
        for(int c=0; c<5; c++){
            arr[r][c] = 10;
        }
    }

    printf("\n");
    //Row Wise Printing
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
