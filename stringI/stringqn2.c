#include<stdio.h> 
// ASKING USER TO ENTER SENTENCE AND PRINTING WITH FIRST LETTER OF THE SENTENCE CAPITAL AND REST SAME.
void main()
{
    char sentence[20];
    int i;
    printf("enter the sentence");
    fgets(sentence,20,stdin);
    if(sentence[0]>='a' && sentence[0]<='z')
    {
        sentence[0]=sentence[0]-32;
    }

    for(i=0;sentence[i]!='\0';i++)
    {
      printf("%c",sentence[i]);
    }
   
}