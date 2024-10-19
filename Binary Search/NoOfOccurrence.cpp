class Solution{
public:
    int count(int arr[], int n, int x) {
        return upper_bound(arr, arr + n, x) - lower_bound(arr, arr + n, x);
    }
};

//Que: Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.

//What is Lower Bound doing? LB is searching for the element is greater than or equal to x
//What is UP doing? UP is searching for the the element is strictly greater than x