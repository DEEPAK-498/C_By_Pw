#include <stdio.h>

int main(){
    //Declaration And Initialisation
    int arr[4] = {1,2,3,4};

    // int Dk[] = {1,2,3,4};   //This will Also Work For Only If The Declaration And Initialisation Is in The Smae Line Like This.It Will Automatically Take The Size Of The Array.

    // int Ns[3];  //We Can Initialise Like This Also But Here We Can't Use Blank  
                   //Space In Array Size This Will Through Error.*/
    // Ns[0] = 4;
    // Ns[1] = 5; 
    // Ns[2] = 7;

    //Accessing & Printing
    printf("%d ", arr[0]);
    printf("%d ", arr[1]);
    printf("%d ", arr[2]);
    printf("%d\n", arr[3]);

    //Updation
    // Ns[2] = 33;
    // printf("%d\n", Ns[2]);

    return 0;
}
