void swap(int a[],int x,int y)
{
	int temp=a[x];
	a[x]=a[y];
	a[y]=temp;
}
void quicksort(int *a, int left, int right)
{
	if(left >= right)
	{
		return ;
	}
	int i = left;
	int j = right;
	int key = a[left];
	while(i < j)
	{
		while(i < j && key <= a[j])
		{
			j--;
		}
		swap(a,i,j);
		while(i < j && key >= a[i])
		{
			i++;
		}
		swap(a,i,j);
	}
	quicksort(a, left, i - 1);
	quicksort(a, i + 1, right);
}
