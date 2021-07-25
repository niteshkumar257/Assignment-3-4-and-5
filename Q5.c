#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int s = 0;      
    printf("The Fibonacci Series  \n ");
    for(int i=1;i<=n;)
    {
        printf("%d \n" , i);
        i = i + s;
        s = i - s;   
    }
    return 0;