#include <stdio.h>
#include <limits.h> //For Usig Min,Max Function

int main(){
    int arr[] = {1,4,5,3,6};
    int n = sizeof(arr)/4;

    // int mx = arr[0];
    int mx = INT_MIN; /*This Also Works Fine. Basically INT_MIN Defines The Smallest Number.*/

    //Value Of INT_MIN
    printf("%d\n", mx);
    
    for(int i=0; i<n; i++){
        if(mx<arr[i]) mx = arr[i];
    }
    printf("%d\n", mx);
    return 0;
}
