#include <stdio.h>

int main(){
    //User Input
    int n;
    printf("Enter The n Term : ");
    scanf("%d", &n);

    //Declaration
    int arr[n];
    int sq;

    //Calculating Square And Initialising Array
    for(int i=1; i<=n; i++){
        sq = i*i;
        arr[i-1] = sq;
    }

    //Printing Output
    for(int j=0; j<n; j++){
        printf("%d ", arr[j]);
    }

    return 0;
}
