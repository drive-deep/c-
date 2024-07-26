#include <bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node *left;
  struct node *right;
    
};


void preorder(struct node *root){
    node *ptr=root;
    if(root==NULL){
        cout<<"tree is empty"<<endl;
        return;
    }

   stack<node* >s;
  
   s.push(ptr);
   
   while(!s.empty()){
       node *p=s.top();
       cout<<p->data<<" ";
       s.pop();
       if(p->right!=NULL){
           s.push(p->right);
           
           
       }
       if(p->left!=NULL){
           s.push(p->left);
       }
       
   }
   
    
    
}

int main()
{
    struct node *head=new node();
    head->data=1;
    
    node *t1=new node();
    t1->data=2;
    
    
    node *t2=new node();
    t2->data=3;
    
    node *t3=new node();
    t3->data=4;
    t3->left=NULL;
    t3->right=NULL;
    
    node *t4=new node();
    t4->data=5;
    t4->left=NULL;
    t4->right=NULL;
    
    node *t5=new node();
    t5->data=6;
    t5->left=NULL;
    t5->right=NULL;
    
    node *t6=new node();
    t6->data=7;
    t6->left=NULL;
    t6->right=NULL;
    
    
    
    
    head->left=t1;
    head->right=t2;
    t1->left=t3;
    t1->right=t4;
    t2->left=t5;
    t2->right=t6;
    
    preorder(head);
    
    return 0;
}
