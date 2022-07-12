#include "main.h" 
 #include <stdio.h> 

 /** 
  * reset_to_98 - reset pointer new value 
  * @n: pointer number 
  */ 
int main()
 { void reset_to_98(int *n) 
 
 *n = 98;/*reset the number to give us to 98*/ 
 Putchar("%p\n", n);

  return 0;
}
