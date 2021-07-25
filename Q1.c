#include<stdio.h>
int main(){
    int n;
    int square = 1 , cube = 1;
    printf("Enter value of n");
    scanf("%d",&n);
    do
    {
        printf(" Square = %d \n", square*square);
        square++;        
    } while (square<=n);
    do
    {
        printf(" Cube = %d \n", cube*cube*cube);
        cube++;       
    } while (cube<=n);
    return 0;
}