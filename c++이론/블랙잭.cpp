#include<stdio.h>

int card[100];
int n, m;
int answer;
void blackjack(int sum, int curr, int count);
int main()
{
	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &card[i]);
	}
	for (int i = 0; i < n; i++)
	{
		blackjack(0, i, 1);
		if (answer == m)
			break;
	}
	printf("%d", answer);
	return;
}

void blackjack(int sum,int curr, int count)
{
	sum += card[curr];

	if (sum > m)
		return;
	if (count == 3)
	{
		if (answer < sum)
		{
			answer = sum;
		}
		return;
	}
	for (int i = curr + 1; i < n; i++)
	{
		blackjack(sum, i, count + 1);
	}
}
