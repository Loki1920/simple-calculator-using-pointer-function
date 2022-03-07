/* simple calculator for arithmatic operation  using pointer function.*/

#include<stdio.h>
#define ops 4
float sum(float a,float b){return (a+b);}
float sub(float a,float b){return (a-b);}
float mul(float a,float b){return (a*b);}
float divi(float a,float b){return (a/b);}

int main()
{
  float(*ptr2func[ops])(float,float)={sum,sub,mul,divi};
  int choice;
  float a,b;
  printf("enter your choice: 0 for sum,1 for sub,2 for mul,3 for divi:\n");
  scanf("%d",&choice);
  printf("enter the two numbers:\n");
  scanf("%f %f",&a,&b);
  
  printf("%f",ptr2func[choice](a,b));
  return 0;
}