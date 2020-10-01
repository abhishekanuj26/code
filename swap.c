#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,i,j,n1,n2,x[4],temp,sum;
    scanf("%d %d",&a,&b);
    x[0]=a%10;
    x[1]=(a/10)%10;
     x[2]=b%10;
    x[3]=(b/10)%10;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < (4 - i - 1); j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    n1= x[3]*10+x[0];
    n2=x[1]*10+x[2];
    sum=n1+n2;
    printf("%d",sum);

}
