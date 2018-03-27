#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }
        
      void levelOrder(Node * root){
          //Write your code here
          if (!root) {
              return;
          }
          // Prints the current node.
          cout << root->data << " ";
          
          // Adds the next nodes to the queue.
          nodes.push(root->left);
          nodes.push(root->right);
      
          // Goes to the next queue node.
          while (!nodes.empty()) {
              Node* next = nodes.front();
              nodes.pop();
              levelOrder(next);    
          }
	    }

    // Ordered queue to traverse.
    private:
        queue<Node*> nodes;
        
};//End of Solution

int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
