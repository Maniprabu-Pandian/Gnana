#include<stdio.h>
int main()
{
    int i,j,k,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        j=i;
        for(k=1;k<=i;k++)
        {
            printf("%d",j++);
        }
        j-=2;
        for(k=j;k>=i;k--)
        {
            printf("%d",j--);
        }        
        printf("\n");
    }
    return 0;
}
