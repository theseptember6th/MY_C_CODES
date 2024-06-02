#include<stdio.h>
void main()
// 7 => 0000 0000 0000 0000 0000 0000 0000 0111       for 32 bits
// 9 => 0000 0000 0000 0000 0000 0000 0000 1001       for 32 bits

{
    printf("7 & 9=%d\n",7 & 9);
    printf("7 | 9=%d\n",7 | 9); 
    printf("7 ^ 9=%d\n",7 ^ 9);
    //comparing each  binary bits if each same bit gives zero and each different bit gives 1
    printf("~7=%d",~7);  
    //bit complement bit lai opposite banaune ...0 lai 1 and 1 lai zero
    printf("7 << 1=%d\n",7 << 1);
    //
    printf("7 >> 1=%d\n",7 >> 1);
}