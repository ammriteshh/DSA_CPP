#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if (n == 0) //base case
        return;

    cout << n << endl;
    fun(n - 1); //Yeh line function fun ko dubara call kar rahi hai, lekin n ki value ko 1 se kam karke
    cout << n << endl;
}
int main()
{
    fun(3); //n ki value 3 pass kar raha hai. Iske baad recursion start hoti hai.
    return 0;
}