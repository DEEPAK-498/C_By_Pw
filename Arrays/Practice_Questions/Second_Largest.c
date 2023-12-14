#include <stdio.h>
#include <limits.h> //For Usig Min,Max Function

int main(){
    int arr[] = {1,4,3,4,5,6,9,55,64,64,25,35};
    int n = sizeof(arr)/4;

    //Finding Max
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(max<arr[i]) max = arr[i];
    }
    //Finding Second Largest
    int smax = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]!=max && smax<arr[i]){
            smax = arr[i];
        }
    }
    printf("The Largest Number In The Array Is: %d", max);
    printf("\n");
    printf("The Second Largest Number In The Array Is: %d", smax);
    printf("\n");
    return 0;
}
