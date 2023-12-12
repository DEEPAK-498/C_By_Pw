#include <stdio.h>

int main(){
    int arr[] = {1,4,5,3,6};
    int n = sizeof(arr)/4;
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    printf("%d\n", sum);
    return 0;
}
