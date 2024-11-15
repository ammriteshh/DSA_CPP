#include <iostream>
#include <vector>

using namespace std;

class MaxHeap
{
private:
    vector<int> heap;

    // Function to restore the heap property after insertion
    void heapifyUp(int index)
    {
        int parent = (index - 1) / 2;
        // If current node is greater than its parent, swap them
        while (index > 0 && heap[index] > heap[parent])
        {
            swap(heap[index], heap[parent]);
            index = parent;
            parent = (index - 1) / 2;
        }
    }

public:
    // Function to insert an element into the heap
    void insert(int value)
    {
        heap.push_back(value);      // Add the value at the end
        heapifyUp(heap.size() - 1); // Restore heap property
    }

    // Function to display the heap
    void printHeap()
    {
        for (int val : heap)
        {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main()
{
    MaxHeap maxHeap;

    maxHeap.insert(10);
    maxHeap.insert(20);
    maxHeap.insert(5);
    maxHeap.insert(6);
    maxHeap.insert(30);

    cout << "Heap after insertions: ";
    maxHeap.printHeap();

    return 0;
}
