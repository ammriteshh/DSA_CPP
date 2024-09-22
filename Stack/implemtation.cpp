#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    string name;
    queue<string> myQueue;
    stack<string> myStack;

    myQueue.push("Tom");
    myQueue.push("James");
    myQueue.push("Dick");
    myQueue.push("John");
    myQueue.push("Harry");

    cout << "Queue size: " << myQueue.size() <<'\n';
    cout << "FIFO queue order:\n";
    while (myQueue.size() > 0)
    {
        name = myQueue.front();
        cout << name << "\n";
        if(name[0] == 'J')
        {
            myStack.push(name);
        }
        myQueue.pop();
    }//while

    cout << "\nStack size: " << myStack.size() <<'\n';
    cout << "LIFO stack order:\n";
    while (myStack.size() > 0)
    {
        cout << myStack.top() << "\n";
        myStack.pop();
    }//while
}