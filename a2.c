#include<stdio.h>
int main (){
int a, b, c, d, e;
printf("enter value for a : ");
scanf("%d",&a);

printf("enter value for b : ");
scanf("%d",&b);
printf("the value of a = %d and the value of b = %d\n",a,b);
a = b+a;
b = a-b;
a = a-b;
printf("\n after swapping the value of a = %d and the value of b = %d\n",a,b);
// now using external variable 

printf("now using external variable ");
printf("enter value for c : ");
scanf("%d",&c);

printf("enter value for d : ");
scanf("%d",&d);
printf("the value of c = %d and the value of d = %d\n",c,d);

e=c;
c=d;
d=e;
printf("after swapping the value of c = %d and the value of d = %d",c,d);
}