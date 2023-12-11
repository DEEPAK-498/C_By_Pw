#include <stdio.h>

int main(){
    //User Input
    int a,b,c,res;
    printf("Enter First Number: ");
    scanf("%d", &a);                    
    printf("Enter Second Number: ");
    scanf("%d", &b);

    //Operation Menu
    printf("MENU\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter Your Arithemetic Operation Number: ");
    scanf("%d", &c);

    //Switch Case
    switch(c){
        case 1: res = a+b;
        break;
        case 2: res = a-b;
        break;
        case 3: res = a*b;
        break;
        case 4: res = a/b;
        break;
        default: printf("Invalid Operation");
    }
    //Final Answer
    printf("Your Answer Is : %d\n", res);
    return 0;
}
