#include <stdio.h>
int main()
{
int a, b, c;
int largest, smallest;
 printf("Ënter three numbers: ");
 scanf("%d %d %d", &a, &b, &c);

 if (a > b && a > c) {
largest = a;
if (b < c) {
    smallest = b;
    else
        smallest = c;
    } else {
        if ( b > c) {
            largest = b;
            if ( a < c)
                smallest = a;
            else
                smallest = c;
        }
        else {
            largest = c;
            if (a < b)
                smallest = a;
            else
                smallest = b;
        }


    }
    printf("Largest = %d\n", largest);
    printf("smallest = %d\n", smallest);

 return 0;


}
