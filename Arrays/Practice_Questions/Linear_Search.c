#include <stdio.h>
#include <stdbool.h> //For Using Bool 

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/4;

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    int x = 5;
    bool flag = false;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
            break;
        }
    }
    if(flag==true){
        printf("%d Number Exists", x);
    }else{
        printf("%d Number Doesnot Exists", x);
    }
    printf("\n");
    return 0;
}
