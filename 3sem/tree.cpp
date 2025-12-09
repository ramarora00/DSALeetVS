# include<iostream>
# include<iomanip>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};
Node* insert(Node*root,int x){
    if(root==NULL){
        return new Node(x);
    }
    if(x<root->data){
        root->left=insert(root->left,x);
    }
    else{
        root->right=insert(root->right,x);
    }
}
void inorder(Node*root){
    if(root==NULL){
        return ;
    }
    // cout<<root->data<<" ";
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int minval(Node*root){
    if(root==NULL){
        cout<<"no";
    }
    Node*curr=root;
    while(curr->left!=NULL){
        curr=curr->left;
    }
    cout<<curr->left;
}
Node* deleteatleft(Node*root){
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL){
        Node*ri=root->right;
        delete(root->left);
        return ri;
    }
    root->left=deleteatleft(root->left);
    return root;
}
int main(){
    // Node*root=new Node(1);
    // root->left=new Node(2);
    // root->right=new Node(3);
    // root->left->left=new Node(4);
    // root->left->right=new Node(5);
    // root->right->left=new Node(6);
    Node*root=NULL;
    root=insert(root,10);
    insert(root,5);
    insert(root,15);
    insert(root,2);
    inorder(root);
}
Node*greater(Node*root,int av){
    if(root==NULL){
        return NULL;
    }
    root->left=greater(root->left,av);
    root->right=greater(root->right,av);
    if(root->data>av){
        Node*li=root->left;
        Node*ri=root->right;

        
        delete(root);
        if(li){
            return li;
        }
        else{
            return ri;
        }
    }
    return root;
}