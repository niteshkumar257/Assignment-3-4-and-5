#include<stdio.h>

int main(){
    int n,count;
    printf("enter Number n");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count=1;
        }
    }
    if(count==1)
    printf(" Not a prime number");
    else
    printf(" Prime Number");
    return 0;
}