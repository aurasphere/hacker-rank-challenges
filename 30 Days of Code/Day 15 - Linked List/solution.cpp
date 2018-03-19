#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:
      Node* insert(Node *head,int data) 
      {
          //Complete this method
          Node* new_node = new Node(data);
          
          // If the head is null, this node is the new head.
          if (head == NULL) {
              head = new_node;
              return head;
          }
          
          // If the head is the only node, this node is after the head.
          if (head->next == NULL) {
              head->next = new_node;
              return head;
          }
          
          // Finds the last node.
          Node* last_node = head->next;
          while (last_node->next != NULL) {
              last_node = last_node->next;
          }
          
          // Puts the new node after the last element.
          last_node->next = new_node;
          return head;
      }
      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}
