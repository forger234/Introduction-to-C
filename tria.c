#include<stdio.h>
int main() 
{ 
    int an1,an2,an3,sum;
    printf("Enter the three angles of a traingle: \n");
    scanf("%d %d %d ",&an1,&an2,&an3);
    sum=an1+an2+an3;
    if(sum==180) 
    { 
        printf("Valid Traingle.\n");
    } 
    else  
    {
    printf("Invalid Traingle\n."); 
    }
}
