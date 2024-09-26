class MyQueue {
public:
    stack<int> s1, s2;
    MyQueue() {

    }

    void push(int x) {
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop() {
        int val = s1.top();
        s1.pop();
        return val;
    }

    int peek() {
        return s1.top();
    }

    bool empty() {
        return s1.empty();
    }
};
