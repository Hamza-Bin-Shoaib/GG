#include<iostream>

int main(){
	int array[1000];
	int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0, sum7 = 0;
	
		for (int i = 0; i<1000;i++)
	{
		array[i] = i;
	}
	
	int cpid1 = fork();
	if (cpid1 ==  -1)
	{
		printf("failed");
		exit(0);
	}
	else if (cpid1 == 0)
		{
			for(int i=0;i<100;i++)
			{
				sum1 = sum1 + array[i];
			}
			
		}
	else 
		{
			int cpid2 = fork();
			if (cpid2 == -1)
			{
				printf("failed");
				exit(0);
			}
			else if (cpid2 == 0)
			{
				for(int j=100; j<200; j++)
				{
				sum2 = sum2 + array[j];
				}
			}
			else 
			{
				int cpid3 = fork();
				if (cpid3 == -1)
				{
					printf("failed");
					exit(0);
				}
				else if (cpid3 == 0)
				{
					for(int k=200; k<300; k++)
					{
					sum3 = sum3 + array[k];
					}
				}
			else 
			{
				int cpid4 = fork();
				if (cpid4 == -1)
				{
					printf("failed");
					exit(0);
				}
				else if (cpid4 == 0)
				{
					for(int l=300; l<400; l++)
					{
					sum4 = sum4 + array[l];
					}
				}
				
			else 
			{
				int cpid5 = fork();
				if (cpid5 == -1)
				{
					printf("failed");
					exit(0);
				}
				else if (cpid5 == 0)
				{
					for(int m=400; m<500; m++)
					{
					sum5 = sum5 + array[m];
					}
				}
			else 
			{
				int cpid6 = fork();
				if (cpid6 == -1)
				{
					printf("failed");
					exit(0);
				}
				else if (cpid6 == 0)
				{
					for(int n=500 ;n<600; n++)
					{
					sum6 = sum6 + array[n];
					}
				}
			else 
			{
				int cpid7 = fork();
				if (cpid7 == -1)
				{
					printf("failed");
					exit(0);
				}
				else if (cpid7 == 0)
				{
					for(int o=600; o<700; o++)
					{
					sum7 = sum7 + array[o];
					}
				}
