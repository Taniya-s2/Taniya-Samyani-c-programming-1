#include <stdio.h>
int main() {
int arr[10], i, j, temp, choice;
printf("Enter 5 integers: \n");
for(i = 0; i < 5; i++);
scanf("%d", &arr[i]);

printf("Enter 1 for ascending, 2 for descending order: ");
scanf("%d", &choice);
for (i = 0; i < 4; i++) {
for (j = i + 1; j < 5; j++) {
if ((choice == 1 && arr[i] > arr[j])|| (choice == 2 && arr[i] < arr[j])) {
temp = arr[i];
arr[i]= arr[j];
arr[j]= temp;


}
}
}
printf("Sorted array: \n");
for(i = 0; i < 5; i++);
printf("%d", arr[i]);
return 0;


}
