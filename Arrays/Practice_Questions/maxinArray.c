#include <stdio.h>
#include <limits.h> //For Usig Min,Max Function

int main(){
    int arr[] = {1,4,5,3,6};
    int n = sizeof(arr)/4;

    // int mx = arr[0]; /* We Can Use The First Element Also For This We Have to Start The Loop From The 1St index.*/

    //METHODE 1
    int mx_1 = INT_MIN; /*This Also Works Fine. Basically INT_MIN Defines The Smallest Number.*/
    
    //Value Of INT_MIN
    printf("%d\n", mx_1);

    for(int i=0; i<n; i++){    //Here "i" Initialise with 0
        if(mx_1<arr[i]) mx_1 = arr[i];
    }
    printf("Methode 1 Output : %d\n", mx_1);

    //METHODE 2
    int mx_2 = arr[0];
    
    for(int i=1; i<n; i++){     //Here "i" Initialise with 1
        if(mx_2<arr[i]) mx_2 = arr[i];
    }
    printf("Methode 2 Output : %d\n", mx_2);
    return 0;
}
