#include <iostream>
using namespace std ;
void  reverse( string &str, int start, int end){
    if(start>= end)
    return;
    
    char c = str[start];
    str[start]= str[end];
    str[end]= c;
    
    reverse(str, start+1, end-1);
}
int main() {
    string str = "Shovik";
    reverse(str, 0 , 5);
    cout<<str<<endl;

    return 0;
}
