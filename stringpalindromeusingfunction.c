#include<stdio.h>
int length( const char str[]);
int is_palindrome(const char str[],int n);
void main()
{
    char str[100];
    printf("enter the string\n");
    gets(str);
    int len=length(str);
    printf("%d\n",len);
    if(is_palindrome(str,len)){
        printf("%s is the palindrome\n",str);
    }
     else{
        printf("%s is not the palindrome\n",str);
     }


}


int length(const char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {

    }
    return i;
}



int is_palindrome (const char str[],int n)
{
   char str1[100];
   int i;
   for(i=0;i<=n-1;i++)
   {
    str1[i]=str[n-1-i];
   }

   for(i=0;str[i]!='\0' || str[i]!='\0';i++)
   {
        if(str[i]!=str1[i])
        {
            return 0;                 // unsucessful
        }

   }
   return 1;   // sucessful 


}