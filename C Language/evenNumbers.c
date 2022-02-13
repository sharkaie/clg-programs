#include <stdio.h>

int main(){

    int i=1, n;

    printf("How many even numbers you want to print?\n");
    scanf("%d", &n);

    // While loop
    while(i < n){
        if((i % 2)== 0) printf("%d", i);
        i++;
    }

    //do while loop
    do {
        if((i % 2)== 0) printf("%d", i);
        i++;
    }while(i < n);

    return 0;
}