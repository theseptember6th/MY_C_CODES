#include<stdio.h>
void main()
{
    // char string[]="kristal"
    // char string[]={'k','r','i','s','t','a','l','\0'};
    char string[10];
    printf("enter the string");
    //scanf("%s",string);  // this will not print the complete line only prints words before a first space  
   // gets(string);  // this will take the whole sentence but it is unsafe as it doesnt care about the array size
   fgets(string,10,stdin); //this is better because now u can
    printf("%s\n",string);  
    //fputs(string,stdout);
    
    
}