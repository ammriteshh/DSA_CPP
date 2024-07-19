int del(int arr[], int n, int x)
{
	int i;
		for(i=0;i<n;i++)
			if(arr[i]==x) //it will stop when we find the element whom we have to delete
				break;
		if(i==n) //did not find it the element whom we have to delete
			return n;
		for(int j=i; j<n-1;j++)
			arr[j] = arr[i+1];
		return (n-1);
}

//Time Complexity = O(n)