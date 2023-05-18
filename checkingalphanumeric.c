#include<stdio.h>
void main()
{
    char character;
    printf("enter the charaacter");
    scanf("%c",&character);
    (character>='0'&&character<='9') || (character>='A'&&character<='Z') || (character>='a'&&character<='z')  ? printf("it is alphanumeric") : printf("it is not alphanumeric");
}