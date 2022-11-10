int linearsearch(int a[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		return i;
		if(a[i]>key)
		break;
	}
	return -1;
}