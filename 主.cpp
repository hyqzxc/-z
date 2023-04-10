#include<stdio.h>
#include<stdlib.h>
int main()
{
	int j=0,a[1000] = { 0 },n,i=0;
	scanf_s("%d", &n);
	for (i = 0; i < n-1; i++)
	{
		scanf_s("%d ", &a[i]);
	}
    scanf_s("%d", &a[n - 1]);
        int  t;
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    t = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = t;
                }
            }
        }
        for (i = 0; i <n; i++)
        {

            printf("%d ", a[i]);
        }

	system("pause");
    return 0;
}
