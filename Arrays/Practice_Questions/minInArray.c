#include <stdio.h>
#include <limits.h> //For Usig Min,Max Function

int main(){
    int arr[] = {1,4,5,3,6};
    int n = sizeof(arr)/4;

    // int mn = arr[0]; /*We Can Start With The First Element Also*/

    //METHODE 1
    int mn_1 = INT_MAX; /*This Also Works Fine. Basically INT_MIN Defines The Smallest Number.*/
    
    //Value Of INT_MAX
    printf("%d\n", mn_1);

    for(int i=0; i<n; i++){     //Here "i" Initialise with 0
        if(mn_1>arr[i]) mn_1 = arr[i];
    }
    printf("Methode 1 Output : %d\n", mn_1);

    //METHODE 2
    int mn_2 = arr[0];
    
    for(int i=1; i<n; i++){     //Here "i" Initialise with 1
        if(mn_2>arr[i]) mn_2 = arr[i];
    }
    printf("Methode 2 Output : %d\n", mn_2);
    return 0;
}
