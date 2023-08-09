#include <bits/stdc++.h>
using namespace std; 

class Node {
    public:
    int val;
    Node* left;
    Node* right;

    Node(int data){
        this->val=data;
        this->left=NULL;
        this->right=NULL;
    }
};
 
    Node* buildtree(Node* root)  {
       int data;
        cout<<"Enter data :";
        cin>>data;
        root=new Node(data);

        if(data==-1){
          return  NULL;
        }

        cout<<"Enter data for left of :"<<root->val<<endl;
        root->left=buildtree(root->left);

        cout<<"Enter data for right of :"<<root->val<<endl;
        root->right=buildtree(root->right);


return root ;
    }
 
 void preorder(Node* root){
    if(root==NULL)
   return ;

      cout<<root->val<<" ";
      preorder(root->left);
      preorder(root->right);

 }

    int height (Node* root){
        if(root==NULL){
            return 0;
        }

        int leftheight=height (root->left);
        int rightheight=height (root->right);

        return (max(leftheight,rightheight)+1);
    }

    

int main()
{
    Node * root ;
    root=buildtree(root);

    preorder(root);
    int tree_height=height (root);
  
    cout<<endl;
    cout<<"height :"<<tree_height<<endl;
    
 
return 0;
}