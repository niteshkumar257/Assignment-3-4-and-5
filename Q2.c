#include<stdio.h>

int main(){
    int n, rem ,rev=0; 
    printf("Enter a number:");
    scanf("%d",&n);
   int m=n;
    while(n!=0)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n/=10; 
    }
    if(rev==m)
    printf("The number is a palindrome");
    else
    printf("The number is not a palindorme");
    return 0;
}