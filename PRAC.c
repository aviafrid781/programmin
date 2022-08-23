 #include <iostream>
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
    	int  g, h, o;
    	scanf("%d", &o);

    	for (int j = 0; j < o; j++) {
    		scanf("%d", &g);
    		scanf("%d", &h);

    		long long *l = new long long [h];


    		l[1] = 1;
    		int i = sqrt(h);
    		for (int k = 2; k <= i; k++) {
    			for (int j = 2; (k*j) < h; j++) {
    				l[k*j] = k * j;

    			}

    		}

    		for (int p = g; p < h; p++)
    		{
    			if (*(l + p) == 0)
    				printf("%d \n", p);
    		}
           delete[]l;

    	}

    }
 Edit & Run
