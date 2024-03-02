// Άσκηση 5.19 'Ask_05_15.c' (Σελ. 207)

#include <stdio.h> 

void side(int edge){
   int i,j;
   for(i=0;i<=edge;i++){
      for(j=0;j<=edge;j++){
         printf("*");
      }
      printf("\n");
   }
}

int main(void)
{
side(4);
}// end main