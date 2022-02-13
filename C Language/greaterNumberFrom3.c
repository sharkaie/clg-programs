#include <stdio.h>

int main(){
    int num[3];

    for(int i = 0; i < 3; i++){
        // Ask the user to enter all 3 numbers
        printf("Enter the number (%d) : ", i+1);
        scanf("%d", &num[i]);
    }

    if(num[0]>=num[1] && num[0]>=num[2]){
        printf("Num 1 : (%d) is greater number", num[0]);
    }else if(num[1]>=num[2] && num[1]>=num[3]){
        printf("Num 2 : (%d) is greater number", num[1]);
    }else{
        printf("Num 3 : (%d) is greater number", num[2]);
    }
}