/*Write a program to find the maximum number out of two integer numbers by using ternary operator.

Input Format

10 15

Constraints

Both numbers are integers

Output Format

15

Sample Input 0

10 15
Sample Output 0

15
Explanation 0

Out of integrs 10 and 15 maximum number is 15*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    a>b?printf("%d",a):printf("%d",b);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

