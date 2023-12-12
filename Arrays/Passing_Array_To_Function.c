#include <stdio.h>

void change(int x[], int n){
    printf("%d ", n);
    x[2] = 85;
}

int main(){
    int arr[] = {2,3,4,5,6};
    int n = sizeof(arr)/4;
    printf("%d ", arr[2]);

    change(arr, n);    //It Behaves Like A Pass By Reference
                      //Passing Both Array And Its Size(Necessary)
  
    printf("%d \n", arr[2]);
    return 0;
}
