#include <stdio.h>

int main(){
    //Declaration & Initialisation
    int arr[]={1,2,5,6};

    //SizeOf Array
    int n = sizeof(arr)/sizeof(arr[0]); //This Formulla Derives The Size Of The Array.
    // int n = sizeof(arr)/4; /*This Work Same because Size of an Integer is 4 bytes.*/
    // int n = sizeof(arr)/sizeof(int); /*This Work Same because Size of an integer is 4 bytes.*/

    //Printing
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("%d", sizeof(arr));  //This gives an output of 16 Because 1 intiger takes 4 bytes and there are 4 integers in the array So in total it takes 16 Bytes.
    printf("%lu", sizeof(arr)); //This work same as '%d'. Here 'lu' Means "Long Unsigned". Also These Two show a warning.
}
