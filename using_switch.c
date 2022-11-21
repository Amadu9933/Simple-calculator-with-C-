#include<stdio.h>

/*A simple calculator using witch
 */
//declaration of each fuction of the operators
float sum(float a, float b){ return a+b; }
float sub(float a, float b){return a-b; }
float mult(float a, float b){return a*b; }
float divi(float a, float b){return a/b; }

int main(){

  int choice;
  float a, b, results;
    
   printf("please enter your choice of operation, 0 to add, 1 to subtract, 2 to multiply, 3 to divide : "); 
   scanf("%d", &choice);
   printf("Enter the two numbers to compute seperated by space : ");
   scanf("%f %f",&a,&b);


switch(choice){

   case 0: results = sum(a,b); break;
   case 1: results = sub(a,b); break;
   case 3: results = mult(a,b); break;
   case 3: results = divi(a,b) break;


 }

return 0;
}
