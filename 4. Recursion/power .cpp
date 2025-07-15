#include <iostream>
using namespace std;
int pow(int num, int n)
{
    //base case
    if(n==0)
    {
        return 1;
    }
    return num * pow(num, n-1); // 5^4 = 5 * 5^(4-1)= 5* 5^3
}

int main() {
    // Write C++ code here
    int n;
    cin >>n;
    cout<< fact(n);

    return 0;
}
