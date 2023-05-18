 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 void main()
 {
    float principal,rate,SI,CI;
    int time;
    float difference;
    int intdifference;
    printf("enter the principal,rate and  amount of time in years ");
    scanf("%f\n%f\n%d\n",&principal,&rate,&time);
    SI=(principal*rate*time)/100;
    CI=principal*(pow(1+rate/100,time)-1);
    difference=CI-SI;
    intdifference=(int)difference;
    printf("difference between CI and SI is %d",intdifference);

 }