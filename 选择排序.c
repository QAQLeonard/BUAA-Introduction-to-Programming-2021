int max(int x[], int n)
{
	int i, j = 0;
	for (i = 1; i < n; i++)
		if (x[i] > x[j]) j = i;
	return j;
}

void selectSort(int x[], int n)
{
	int i, j, temp;
	for (i = n; i > 1; i--)
	{
		j = max(x, i);
		if (j != i - 1)
		{
			temp = x[j];
			x[j] = x[i - 1];
			x[i - 1] = temp;
		}
	}
}
