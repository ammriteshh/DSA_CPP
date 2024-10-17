int findFloor(vector<long long> &v, long long n, long long x) {

    // Your code here
    int low = 0;
    int high = n-1;
    long long ans = -1;

    while(low<=high){
        long long mid = (low+high)/2;

        if(v[mid] <= x){
            ans = mid; //maybe the answer
            low = mid+1; //go for right for the answer
        }
        else{
            high = mid-1; // else go for left
        }
    }
    return ans;
}