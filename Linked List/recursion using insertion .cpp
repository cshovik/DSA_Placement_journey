#include <iostream> //time complexity o(n)
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

Node* createLinkedList(int arr[], int index, int size)
{
    if(index == size)
    return NULL;
    
    Node *temp ;
    temp = new Node(arr[index]);
    temp->next =  createLinkedList(arr,index+1, size);
    
    return temp;
}
int main() {
    // Write C++ code here
    Node *Head;
    Head =NULL;
    int arr[] = {2,3,4,5,6};
    
    Head =  createLinkedList(arr,0, 5);
    
    
    Node *temp = Head; //as rotation pointer node
    while(temp != NULL)
    {
        cout<< temp -> data<< endl;
        temp = temp-> next;
    }
  

    return 0;
}
