// Program to Get elements from an array
#include<stdio.h>

int main() {
    int a[20],n;
    int i;

    printf("Enter size of array : ");

    scanf("%d", &n);

    printf("Enter %d element\n", n);
    // Get elements
    for(i=0;a[i]<n;i++){
        printf("(%d) : " ,i);
        scanf("%d", &a[i]);
    }

    // Print all elements of array
    printf("Elements in array are : ");
    for(i=0;a[i]<n;i++){
        printf("%d" ,a[i]);
    }

    return 0;
}