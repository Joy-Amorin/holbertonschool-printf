#include <stdio.h>
#include <unistd.h>
/**
 * function - function that prints numbers 
 * @a: number
 * @cont: counter of digits
 * Return: 0

int function (int a, int *cont)
{	
	int q = 0;

	long int i = a;

	long int t = a % 10;

	long int r;
	
	int h = 10;

	
	if (a < 10)
	{	
		if (a < 0)
		{	
			i = i * -1;
			putchar('-');
			while (i > 0)
        		{
                		i = i / 10; 
				q++;
			}
        		putchar(i + '0');
			a = a * -1;
        		while (q - 1 > 0)
        		{
				a = a / 10;
                		r = a % 10;
               			putchar(r + '0');
                		q--;
        		}
			t = t * -1;
        		putchar(t + '0');
		}
		else
		putchar(a + '0');
		return (0);
	}
	
	while (i >= 10)
	{	
		i = i / 10;
		q++;
		h = h * 10;
	}
/*	putchar(i + '0');*/
	*cont = *cont + q + 1;
	i = a;
	while (q > 0)
	{	
		h = h / 10;
		if (a >= h)
		{
			a = a / h;
			r = a % 10;
			putchar(r + '0'); 
		}
		a = i;
		q--;
	}
	putchar(t + '0');
	printf("%d",*cont + 1);
	return (*cont + 1);




}	

