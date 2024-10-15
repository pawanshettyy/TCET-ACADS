/*Algorithm
1. Start
2. Declare variables: i, n, x 
3. Input the values of x and n from the user.
4. loop for i from 2 to n
5. result = pow(x,i)
6. Print result
7. End
*/



#include<stdio.h>
#include<math.h>

int main(){
    int i,n;
    float x;

    printf("Enter the value of x and the value of n: ");
    scanf("%f %d", &x , &n);

    for (i=2; i<=n; i++){
        printf("%f raised to %d is %f\n", x, i, pow(x,i));
    }
}