int searchInSorted(int arr[], int N, int K) {

    // Your code here
    int check = -1;
    for(int i=0; i<N; i++){
        if(arr[i]==K){
            return 1; // 1 indicates success/true
        }
    }
    return check;
}