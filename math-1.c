#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x;
    printf("please tell me the result of the integer: ");
    scanf("%d", &x);
    printf("you had imput %d\n", x);
	while (x>0)
 	{
		 if ((x-1)%5==0)
         {
			x= (x-1)/5;
			printf("x=%d\n", x);
         }
		 
    }
        
	system("pause");
	return 0;
}
