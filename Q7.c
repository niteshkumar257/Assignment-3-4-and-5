#include<stdio.h>
#include<math.h>
void main(){
    int x,n;
    printf("Enter x and n");
    scanf("%d %d", &x , &n);
    int sum = 0;
    for(int i=0;i<=n;i++)
    {
        sum = sum + pow(x ,i);
        
    }
    printf("\nSum = %d",sum);
}