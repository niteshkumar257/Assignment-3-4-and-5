#include<stdio.h>
#include<math.h>
int main(){
    int n , rem , size = 0,sum=0;
    printf("Enter a number ");
    scanf("%d",&n);
    int m = n;
    while(n!=0)
    {
        rem = n%10;
        size++;
        n = n/10;
    }
    
    n = m;
    while(n!=0)
    {
        rem = n%10;
        sum = sum + pow(rem ,size);
        n = n/10;
    }
    if(sum == m)
    {
        printf("%d is an Armstrong Number",m);
    }
    else
    {
        printf("%d is not an Armstrong Number", m);
    }
    return 0;
}