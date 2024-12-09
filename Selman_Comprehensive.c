#include <stdio.h>

int i;
int size;
int nums[100];
float temp;
float avg;

float average (int *nums, int num1);
void reverse (int *nums, int num1);

int main (void)
{
	printf("Please enter the array size: ");
	scanf("%d", &size);
	
	while(size != -1)
	{
		printf("Please enter your numbers: ");
		for(i = 0; i < size; i++)
		{
			scanf("%d", &nums[i]);
		}
		
		reverse(nums, size);
		
		printf("Array reverse order: ");
		for(i = 0; i < size; i++)
		{
			printf("%d ", nums[i]);
		}
		
		printf("\n");
		avg = average(nums, size);
		
		for(i = 0; i < size; i++)
		{
			temp = nums[i] - avg;
			printf("%d is %.2f away from %.2f.\n", nums[i], temp, avg);
		}
		
		printf("Please enter the next array size (-1 to end): ");
		scanf("%d", &size);
	}
}

float average (int *nums, int num1)
{
	int sum = 0;

	for(i = 0; i < num1; i++)
	{
		sum += nums[i];
	}
	return (sum / num1);
}

void reverse (int *nums, int num1)
{
	int temp[num1];
	
	for(i = 0; i < num1; i++)
	{
		temp[i] = nums[num1 - i - 1];
	}
	
	for(i = 0; i < num1; i++)
	{
		nums[i] = temp[i];
	}
}