#include <stdio.h>
#include <math.h>
int main()
{
    int num, rem, sum=0;
    int count=0;
    printf("Enter number of any digit:");
    scanf("%d", &num);
    
    int ornum=num;
    
    while(num!=0){
        num/=10;
        count++;
    }
//     printf("digit=%d\n", count);
     
   int gnum=ornum;
   
    while(ornum!=0){
        rem=ornum%10;
        sum+=pow(rem,count);
        ornum/=10;
    }
    if(sum==gnum){
        printf("%d is an armstrong number.", gnum);
    }
    else{
        printf("%d is not an armstrong number.", gnum);
    }
    return 0;
}