#include <stdio.h>

void main()
{
	int n, i, j, avwt = 0, avtat = 0;
	printf("\nEnter total number of processes: ");
	scanf("%d", &n);
	int bt[n], wt[n], tat[n];
	printf("\nEnter Process Burst Time:\n\n");
	for (i = 0; i < n; i++)
	{
		printf("P[%d]: ", i + 1);
		scanf("%d", &bt[i]);
	}
	wt[0] = 0;
	for (i = 1; i < n; i++)
	{
		wt[i] = 0;
		for (j = 0; j < i; j++)
			wt[i] += bt[j];
	}
	printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnAround Time");
	for (i = 0; i < n; i++)
	{
		tat[i] = bt[i] + wt[i];
		avwt += wt[i];
		avtat += tat[i];
		printf("\nP[%d]\t\t%d\t\t%d\t\t%d", i + 1, bt[i], wt[i], tat[i]);
	}
	avwt /= i;
	avtat /= i;
	printf("\n\nAverage Waiting Time: %d", avwt);
	printf("\n\nAverage TurnAround Time: %d\n\n", avtat);
}
