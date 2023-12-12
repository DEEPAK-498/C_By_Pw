#include <stdio.h>

int main(){
    int arr[] = {1,4,5,3,6};
    int n = sizeof(arr)/4;
    int pro = arr[0]; 

    for(int i=1; i<n; i++){
        pro *= arr[i];
    }
    printf("%d\n", pro);
    return 0;
}
