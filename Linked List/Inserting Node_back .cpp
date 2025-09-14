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
    Node *Tail;
    Head = Tail= NULL;
    int arr[] = {2,3,4,5,6};
    
    for(int i =0; i<5; i++)
    {
         if(Head == NULL)
        {
           Head = new Node(arr[i]);
           Tail = Head;
        }else{
           Tail-> next = new Node(arr[i]);
           Tail = Tail->next;
        }
    }
    
    //print
    Node *temp = Head; //as rotation pointer node
    while(temp != NULL)
    {
        cout<< temp -> data<< endl;
        temp = temp-> next;
    }

    return 0;
}
/*
2
3
4
5
6
*/
