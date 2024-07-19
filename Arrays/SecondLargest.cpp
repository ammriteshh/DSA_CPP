int secondLargest(int arr[], int n){
    int res=-1, largest=0;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[largest]){ //agar current element largest se bada hai to
            res=largest; //current largest element ko res me daal denge 
            largest=i; // current element ko lagest maan lenge
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res]);
            res=i;
        }
    }
    return res;
}