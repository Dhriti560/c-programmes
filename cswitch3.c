#include <stdio.h>
void main ()
{
int number= 0;

printf ("Enter a number: \n");  
scanf ("%d", &number);  
  
switch (number)  
{  
case 1:  
       printf ("Number is equals to 1");  
       break;  
case 2:  
       printf ("Number is equal to 2");  
       break;  
case 3:  
       printf ("Number is equal to 3");  
       break;  
default:  
       printf ("Number is not equal to 1, 2, or 3");  
       break;
}  
}
  
