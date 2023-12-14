#include <stdio.h>

int main(){
    int arr[] = {1,4,3,4,5,6};
    int n = sizeof(arr)/4;

    //reverse
    int i = 0;
    int j = n-1;

    while(i<j){
        //swap arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
