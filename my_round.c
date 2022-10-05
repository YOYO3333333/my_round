#include<stdio.h>
int my_round(float n)
{   int a=(int)(n/1);
    float f=n-a;
    if(f>=0.5)
    {
       return a+1;
    }
    return a;
}
int main(void)
{   float a=2.0;
    printf("my float %f my round %d end**\n",a,my_round(a));
    return 0;
}
