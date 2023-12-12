#include <stdio.h>
#include <limits.h> //For Usig Min,Max Function

int main(){
    int arr[] = {1,4,5,3,6};
    int n = sizeof(arr)/4;

    // int mx = arr[0]; /*We Can Start With The First Element Also For That We HAve To Start The loop From The 1st Index*/
    int mx = INT_MAX; /*This Also Works Fine. Basically INT_MIN Defines The Smallest Number.*/
    
    //Value Of INT_MAX
    printf("%d\n", mx);

    for(int i=0; i<n; i++){
        if(mx>arr[i]) mx = arr[i];
    }
    printf("%d\n", mx);
    return 0;
}
