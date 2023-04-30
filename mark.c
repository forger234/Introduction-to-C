#include<stdio.h>
int main() 
{ 
    int phy,chem,bio,math,comp;
    float tot,per;
    printf("Enter the mark of five subjects: \n");
    scanf("%d %d %d %d %d",&phy,&chem,&bio,&math,&comp);
    tot=phy+chem+bio+math+comp;
    per=(tot/500)*100;
    printf("Total marks=%f \n",tot);
    scanf("Mark percentage =%f",per);
    if(per>=90)
    { 
        printf("Grade A \n"); 
    }
    else if(per>=80) 
    {  
        printf("Grade B \n") ;
    }
     if(per>=70)
     { 
        printf("Grade C \n");   
    } 
    else if(per>=60) 
    { 
        printf("Grade D \n");
    } 
    else if(per>=40) 
    { 
        printf("Grade E \n");
    }
    else 
    { 
        printf("Grade F \n");
    }
}