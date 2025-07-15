#include <iostream>
using namespace std;
int sqsum(int n)
{
    //base case
    if(n==0)
    {
        return 1;
    }
    return n * n + sqsum(n-1); // sqsun(3) = 3^2 + 2^2 + 1^2 +0
}

int main() {
    // Write C++ code here
    int n;
    cin >>n;
    cout<< sqsum(n); 
    return 0;
}
