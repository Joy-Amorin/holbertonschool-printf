#include <stdio.h>
#include <unistd.h>

int function (int a)
{	
	int q = 0;

	int i = a;

	int t = a % 10;

	int r;
	
	int h = 10;

	
	if (a < 10)
	{	
		if (a < 0)
		{	
			i = i * -1;
			putchar('-');
			while (i > 10)
        		{
                		i = i / 10; 
				q++;
			}
        		putchar (i + '0');
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
	
	while (i > 10)
	{	
		i = i / 10;
		q++;
		h = h * 10;
	}
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
	return (0);




}	

