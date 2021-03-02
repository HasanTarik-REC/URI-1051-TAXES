#include <stdio.h>
#include <stdlib.h>
int main()
{
 float a,b,c;
 printf("Enter your salary:\n");
 scanf("%f",&a);
 if (a>=0.00 && a<=2000.00) {
     printf("Isento\n");
 } 
 else if (a>=2000.01 && a<=3000.00) {
     b=a-2000.00;
     c=0.08*b;
     printf("R$ %0.2f\n",c);
 }
 else if (a>=3000.01 && a<=4500.00) {
     float A,B;
     A=0.08*1000.00;
     b=a-3000.00;
     B=b*0.18;
     c=A+B;
     printf("R$ %0.2f\n",c);

 }
 else if (a>4500.01) {
    float A,B,C;
    A=0.08*1000.00;
    B=0.18*1500.00;
    b=a-4500.00;
    C=0.28*b;
    c=A+B+C;
    printf("R$ %0.2f\n",c);

 }
 return 0;  
}