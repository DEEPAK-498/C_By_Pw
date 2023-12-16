#include <stdio.h>

int Palindrome(int arr[], int n){
    int i, j, flag=0;
    for(i=0, j=n-1; i<n/2, j>=n/2; i++, j--){
        if(arr[i]!=arr[j]){
            flag = 1;
            break;
        }
    }
    if (flag==1)
    return 0;
    else
    return 1;
}

int main(){
    int arr[4];
    int n = sizeof(arr)/4;

    //user input
    for(int i=0; i<4; i++){
        printf("Enter %dth Index: ", i);
        scanf("%d", &arr[i]);
    }

    if(Palindrome(arr, n))  //Function Calling
    {
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    printf("\n");
    return 0;
}
