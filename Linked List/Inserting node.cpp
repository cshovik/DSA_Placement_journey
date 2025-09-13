// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node
{
  public:
  int data;
  Node *next;
  
  Node(int value)
  {
      data= value;
      next = NULL;
  }
};

int main() {
    // Write C++ code here
    Node *Head;
    Head = NULL;
    if(Head == NULL)
    {
        Head = new Node(24);
    }else{
        Node *temp;
        temp= new Node(24);
        temp ->next = Head;
        Head= temp;
    }
    
    cout<< Head->data<< endl;
    cout<<Head->next<< endl;

    return 0;
}
