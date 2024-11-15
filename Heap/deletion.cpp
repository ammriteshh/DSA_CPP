#include <iostream>
#include <vector>

using namespace std;

void heapify(vector<int> &arr, int n, int i)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] < arr[smallest])
        smallest = left;
    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        heapify(arr, n, smallest);
    }
}

int delete_root(vector<int> &arr)
{
    if (arr.empty())
        return -1;

    int root = arr[0];
    arr[0] = arr.back();
    arr.pop_back();
    heapify(arr, arr.size(), 0);
    return root;
}

int main()
{
    vector<int> heap = {10, 5, 3, 2, 4};
    int deleted = delete_root(heap);
    cout << "Deleted element: " << deleted << endl;
    cout << "Heap after deletion: ";
    for (int num : heap)
        cout << num << " ";
    cout << endl;
    return 0;
}