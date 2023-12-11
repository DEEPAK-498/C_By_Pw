#include <stdio.h>

int main(){
    int arr[5];

    // scanf("%d", &arr[0]);
    // printf("%d\n", arr[0]); /*This is how we can take individual input from user.*/

    //Taking Input Using For Loop
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %dth Index : ", i);
        scanf("%d", &arr[i]);
    }
    
    //Printing Output
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }

    return 0;               
}
