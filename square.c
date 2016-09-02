#include<stdio.h>
#include<math.h>
void main()
{
    int a1,a2,b1,b2,c1,c2,d1,d2,x,y,res,res1,res2,res3;
    scanf("%d%d%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2,&d1,&d2);
    x=(a1-b1)*(a1-b1);
    y=(a2-b2)*(a2-b2);
    res=sqrt(x+y);
    x=(b1-c1)*(b1-c1);
    y=(b2-c2)*(b2-c2);
    res1=sqrt(x+y);
    x=(c1-d1)*(c1-d1);
    y=(c2-d2)*(c2-d2);
    res2=sqrt(x+y);
    x=(d1-a1)*(d1-a1);
    y=(d2-a2)*(d2-a2);
    res3=sqrt(x+y);
    if(res==res1 && res1==res2 && res2==res3)
    {

        printf("Square can be formed with the given points");
    }
    else{
        printf("Square cannot be formed with the given points");
    }
}

