// Program for Matrix Adding & Subtraction
#include <stdio.h>

int main () {
    int a [3][3],b[3][3],c[3][3],i,j,x;

    printf ("Matrix\n\t1)sum\n\t2)difference\n\t3)transpose\n");
    scanf ("%d",&x);



    switch (x) {
        case 1:
        {
            for (i=0;i<3;i++) {
                for (j=0;j<3;j++) {
                    b [i] [j] =0;
                    a [i] [j] =0;
                    c [i] [j] =0;
                }
            }

            printf ("enter 1st matrix\n");

            for (i=0;i<3;i++) {
                for (j=0;j<3;j++) {
                    scanf ("%d", &a[i] [j]);
                }
            }

            printf ("enter 2nd matrix\n");
            
            for (i=0;i<3;i++) {
                for (j=0;j<3;j++) {
                    scanf ("%d",&b[i] [j]);
                }
            }

            // Sum of matrix
            for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)
                {
                    c [i] [j]=a[i][j] +b[i] [j];
                }
            }
            
            printf ("\n The sum of two matrix\n");
            // Print the Sum
            for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)
                {
                    printf ("%d\t",c[i] [j]);
                }
                printf ("\n");
            }
            
            break;
        }

        case 2:
        {
            
            for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)
                {
                    b [i] [j] =0;
                    a [i] [j] =0;
                    c [i] [j] =0;
                }
            }

            printf ("enter 1st matrix\n");
            for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)
                {
                    scanf ("%d", &a[i] [j]);
                }
            }

            printf ("enter 2nd matrix\n");
            for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)
                {
                    scanf ("%d",&b[i] [j]);
                }
            }


            for (i=0;i<3;i++)
                {
                for (j=0;j<3;j++)
                {
                    c [i] [j]=a[i][j] -b[i] [j];
                }
            }
            
            printf ("\n The difference of two matrix\n");
            for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)
                {
                    printf ("%d\t",c[i] [j]);
                }
                printf ("\n");
            }

            
            break;
        }

        case 3:
        {
            for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)
                {
                    b [i] [j] =0;
                    a [i] [j] =0;
                }
            }

            printf ("Enter the elements of matrix you want to transpose\n");
            for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)
                {
                    scanf ("%d", &a[i] [j]);
                }
            }

            for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)
                {
                    b[j] [i]= a[i][j];
                }
            }

            printf ("The transpose\n");
            for (i=0;i<3;i++)
            {
                for (j=0;j<3;j++)
                {
                    printf ("%d\t",b[i] [j]);
                }
                printf ("\n");
            }

            break;
        }

        default:
        printf("Wrong choice");
    }
}