#include <stdio.h>
void main()
{
   int num1,num2,result;
   printf("enter the operators");
   scanf("%d %d",&num1,&num2);
   int operation;
   printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n5.remainder");
   scanf("%d",&operation);
   switch(operation)
   {
    case 1:
    result=num1+num2;
    break;
    case 2:
    result=num1-num2;
    break;
    case 3:
    result=num1*num2;
    break;
    case 4:
    result=num1/num2;
    break;
    case 5:
    result=num1%num2;
    break;
    default:
    printf("invalid entry");
   }
   printf("result of the operation performed is %d",result);
}