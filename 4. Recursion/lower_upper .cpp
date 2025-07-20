#include <iostream>
using namespace std ;
void lowerupper(string &str, int index)
{    
    
    if(index == -1)
    return ;
    
    str[index]= 'A' + str[index] -'a';
    lowerupper(str, index-1);// from last to start
}
int main() {
    string str = "shovik";
    lowerupper(str, 5);
    cout<<str<<endl;

    return 0;
}
