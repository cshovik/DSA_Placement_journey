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

Node* createLinkedList(int arr[], int index, int size, Node* prev)
{
    if(index == size)
    return prev;
    
    Node *temp ;
    temp = new Node(arr[index]);
    temp->next =  prev;
    
    return createLinkedList( arr, index+1, size, temp);
    
}
int main() {
    // Write C++ code here
    Node *Head;
    Head =NULL;
    int arr[] = {2,3,4,5,6};
    
    Head =  createLinkedList(arr,0, 5, Head);
    
    //print
    Node *temp ;
    temp=Head; //as rotation pointer node
    while(temp != NULL)
    {
        cout<< temp -> data<< endl;
        temp = temp-> next;
    }
  

    return 0;
}
