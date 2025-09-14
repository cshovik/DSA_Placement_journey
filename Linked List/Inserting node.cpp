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


//to insert an array

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
    int arr[] = {2,3,4,5,6};
    
    for(int i =0; i<5; i++)
    {
         if(Head == NULL)
        {
           Head = new Node(arr[i]);
        }else{
           Node *temp;
           temp= new Node(arr[i]);
           temp ->next = Head;
           Head= temp;
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

/output:
/*6
5
4
3*/
2
