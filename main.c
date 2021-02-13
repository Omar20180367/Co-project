#include<stdio.h>
#include <stdlib.h>
#include<math.h>
int Max_of_list(int list[],int n){
int max,i;
 max = list[0];
 for (i = 0; i < n; i++){
  if (list[i] > max) {
   max = list[i];
  }
 }
return max;

}





int Power(int base,int exp){
int res=1;
    while (exp != 0) {
        res *= base;
        --exp;
    }


   return res;


}


void factorization(int a){

    printf("Factors of %d are: ", a);
    for (int i = 1; i <= a; ++i) {
        if (a % i == 0) {
            printf("%d ", i);
        }
    }


}










int main(void) {
int choice,flag=0,a,b,c,d,i,s,n,max,base,result,exp,list[100],res = 1,length, breadth, area,perimeter;
float x, y,z,a2,b2,c2,area2, result2 ,sine,cosine,tangent,opposite,adjacent,hypotenuse,perimeter2;
do {
printf("\nSelect your operation:\n\n");
printf("1. Subtraction\n2. Division\n3. Max of list\n4. Power\n5. factorization\n6. Square Detection\n7. Rectangle Detection\n8. triangle Detection\n");

printf("\nChoice: ");
scanf("%d", &choice);
if(choice == 0) exit(0);
switch(choice) {
case 1:
printf("Enter First Num: ");
scanf("%f", &x);
printf("\nEnter Second Num: ");
scanf("%f", &y);
result = x - y;
printf("\nResult: %d", result);
break;

case 2:
printf("Enter First Num: ");
scanf("%f", &x);
printf("\nEnter Second Num: ");
scanf("%f", &y);
result2 = x / y;
printf("\nResult: %f", result2);
break;

case 3:
printf("Enter size Of list: ");
scanf("%d",&n);
printf("\nEnter List Of Numbers\n");

for(i = 0; i < n; i++){
    printf("Enter Number  %d : ",i+1);
    scanf("%d",&list[i]);

}


 printf("\nMax Number Of LIst Is : %d",Max_of_list(list,n));
break;


case 4:
printf("Enter a base number: ");
scanf("%d", &base);
printf("Enter an exponent: ");
scanf("%d", &exp);
res= Power(base,exp);
printf("Result = %d",res);
break;


case 5:
    printf("Enter a positive Number: ");
    scanf("%d", &a);
    factorization(a);

break;


case 6:
   printf("\nEnter the First Side of Square : ");
   scanf("%d", &a);
   printf("\nEnter the Second Side of Square : ");
   scanf("%d", &b);
   printf("\nEnter the Third Side of Square : ");
   scanf("%d", &c);
   printf("\nEnter the Fourth Side of Square : ");
   scanf("%d", &d);

        if(a == b && a == c && a == d)
        {
            printf("\nThis Is Valid Square\n");
            area = a*a;
            perimeter = a*4;
            printf("\nArea Of Square = %d\n", area);
            printf("\nPerimeter Of Square = %d\n", perimeter);
        }

        else
          {

          printf("\nThis Number Is Invalid  Square !!!\n");

          }


break;


case 7:
   printf("\nEnter the First Side of Rectangle : ");
   scanf("%d", &a);
   printf("\nEnter the Second Side of Rectangle : ");
   scanf("%d", &b);
   printf("\nEnter the Third Side of Rectangle : ");
   scanf("%d", &c);
   printf("\nEnter the Fourth Side of Rectangle : ");
   scanf("%d", &d);


    if (a == c && d == b && a != b && b != c)
        {
        printf("\nSides of Rectangle Is Valid");
        }
    else
        {
        printf("\nSides of Rectangle Is INvalid !!! ");
        flag=1;
        }

 if(flag == 0){

   if(a != b){
   area = a * b;
   perimeter=2*(a+b);
   }
   else if(a != c)
   {

   area = a * c;
   perimeter=2*(a+c);

   }
   else if(a != d)
   {

   area = a * d;
   perimeter=2*(a+d);

   }
   printf("\n\nArea of Rectangle : %d", area);
   printf("\n\nPerimeter of Rectangle : %d\n", perimeter);

 }
break;


case 8:

   printf("\nEnter Length of opposite side(AB): ");
   scanf("%f", &a2);
   printf("\nEnter Length of adjacent side(BC): ");
   scanf("%f", &b2);
   printf("\nEnter Length of hypotenuse (AC): ");
   scanf("%f", &c2);

    if (a2 + b2 <= c2 || a2 + c2 <= b2 || b2 + c2 <= a2)
    {
        printf("\nSides of Triangle Is Invalid");
    }

    else
        {
             printf("\nSides of Triangle Is Valid\n");
             x=a2;
             y=b2;
             z=c2;
             opposite=a2;
             adjacent=b2;
             hypotenuse=c2;
             perimeter2=a2+b2+c2;
             s = (a2+b2+c2)/2;
             area2 = sqrt(s*(s-a2)*(s-b2)*(s-c2));
             sine = opposite/hypotenuse;
             cosine = adjacent/hypotenuse;
             tangent = opposite/adjacent;
             printf("\nArea of Triangle : %f\n", area2);
             printf("\nPerimeter of Triangle : %f\n", perimeter2);
             printf("\nSine of Triangle : %f\n", sine);
             printf("\ncosine of Triangle : %f\n", cosine);
             printf("\ntangent of Triangle : %f\n", tangent);
        }





break;




}
} while(choice);

return 0;
}
