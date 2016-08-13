#include <stdio.h> 

#include<string.h>


int main()

{
  
  char *a=(char*)malloc(sizeof(char));

    scanf("%s",a);

    int l,i,j;

    l=strlen(a);

    if(l%2==0)

    {
 
       for(i=0;i<l;i++)

        {
  
          for(j=0;j<l;j++)
 
           {
  
              if(i==j || j==l-i-1)

                printf("%c",a[j]);
 
               else
 
               printf(" ");
  
          }
     
       printf("\n");
  
      }
   
 }
   
 return 0;

}