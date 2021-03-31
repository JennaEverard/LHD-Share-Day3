#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size = 0;
	printf("How many elements are in your list? ");
	scanf("%d", &size);
	
	int *list = malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++)
	{
		int entry = 0;
		printf("Please enter element #%d: ",i);
		scanf("%d", &entry);
		
		list[i] = entry;
	}

	printf("\nYour Original List is: \n");
	
	for (int j = 0; j < size; j++)
	{
		printf("%d   ", list[j]);
	}

	for (int k = 0; k < size-1; k++)
	{
		int min = list[k];
		int min_index = k;
		
		for (int t = k+1; t < size; t++)
		{
			if (list[t] < list[min_index])
			{
				min = list[t];
				min_index = t;
			}
		}

		list[min_index] = list[k];
		list[k] = min;
	}

	printf("\nYour Sorted List is: \n");
	
	for (int j = 0; j < size; j++)
	{
		printf("%d   ", list[j]);
	}

	printf("\n");
	free(list);
	exit(0);
}
