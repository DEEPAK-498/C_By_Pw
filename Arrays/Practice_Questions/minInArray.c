#include <stdio.h>
#include <limits.h> //For Usig Min,Max Function

int main(){
    int arr[] = {1,4,5,3,6};
    int n = sizeof(arr)/4;

    // int mn = arr[0]; /*We Can Start With The First Element Also*/
    int mn = INT_MAX; /*This Also Works Fine. Basically INT_MIN Defines The Smallest Number.*/
    
    //Value Of INT_MAX
    printf("%d\n", mn);

    for(int i=0; i<n; i++){
        if(mn>arr[i]) mn = arr[i];
    }
    printf("%d\n", mn);
    return 0;
}
