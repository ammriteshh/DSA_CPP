int insert(int arr[], int n, int x, int cap, int pos){  // capacity means there should be vacant place for inserting element
	if(n==cap)
		return n;
	int idx = pos-1; // idx=index(the position where we have to insert the new element), moving each element one position ahead to insert the new element
	for(int i=n-1; i>=idx; i--)
		arr[i+1] = arr[i];
	arr[idx]=x; // put this element at the position
	return (n+1);
}

//Time Complexity = O(n)
	