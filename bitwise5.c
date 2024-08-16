
#include <stdio.h>

int main()
{
  int num , n , newnum ;
  printf ("please enter a num: ");
  scanf ("%d" , &num );
  
   printf("Enter nth bit to clear : ");
    scanf("%d", &n);
  
  // the operation 
  newnum = num &(~(1<<n));
  
  printf ( " num before clearing %d bit = %d \n", n , num  );
  printf ( " num after clearing %d bit = %d  \n", n , newnum  );
  
    return 0;
}