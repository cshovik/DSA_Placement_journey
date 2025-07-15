#include <iostream>
using namespace std;
int sum(int n)
{
    //base case
    if(n==1)
    {
        return 1;
    }
    return n + sum(n-1);
}

int main() {
    // Write C++ code here
    int n;
    cin >>n;
    cout<< sum(n);

    return 0;
}
