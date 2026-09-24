#include <stdio.h>

int main() {
    // write your code here
//  get the array from user and save it
int n;
scanf("%d ",&n);
//declare the array size
int array[n];
 
 for (int i = 0; i < n; i++)
 {
scanf("%d ",&array[i]) ;//get the input and put it on array a[]

}
 // get sum of the array
 int sum=0;
 for (int i = 0; i < n; i++)
 {
sum+=array[i];
 }
 printf("%d",sum);
    return 0;
}