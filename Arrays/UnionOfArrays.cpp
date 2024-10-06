class Solution{
        public:
        vector<int> findUnion(int arr1[], int arr2[], int n, int m)
        {
            unordered_set<int>s;
            for(int i=0;i<n;i++){
                s.insert(arr1[i]);

            }
            for(int i=0;i<m;i++){
                s.insert(arr2[i]);
            }
            vector<int>v(s.begin(),s.end()); // transferring the elements from set to vector
            sort(v.begin(),v.end());
            return v;
        }
};

//Insert into a set and then transfer it to a vector and sort it.

//The reason for first inserting the elements into a set and then transferring them to a vector is to ensure that A set automatically removes duplicate elements. When you insert elements into an unordered_set, it guarantees that only unique elements will be stored.