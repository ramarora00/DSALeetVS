# include<iostream>
# include<iomanip>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;

    }
};
void insert_at_position(Node* &head,int val,int pos){
    Node* new_new=new Node(val);
    Node*temp=head;
    int curr=0;
    while(curr!=pos-1){
        temp=temp->next;
        curr++;
    }
    new_new->next=temp->next;
    temp->next=new_new;
}
void update_at_position(Node* &head,int val,int pos){
    Node* n_n_n=new Node(val);
    Node* temp=head;
    int curr=0;
    while(curr!=pos){
        temp=temp->next;
        curr++;
    }
    temp->data=val;
}
void deletion_at_head(Node* &head){
    Node*temp=head;
    head=head->next;
    free(temp);
}
void insert_at_head(Node* &head,int val){
    Node* n=new Node(val);
    n->next=head;
    head=n;
}
void insert_at_tail(Node* &head,int val){
    Node* new_n=new Node(val);
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_n;
}
void deletion_at_tail(Node* &head){
    Node*secondnode=head;
    while(secondnode->next->next!=NULL){
        secondnode=secondnode->next;
    }
    Node* temp=secondnode->next;
    secondnode->next=NULL;
    free(temp);
}
void deletion_at_position(Node *&head,int pos){
    if(pos==0){
        deletion_at_head(head);
        return ;
    }
    Node*h=head;
    int curr=1;
    while(curr!=pos-1){
        h=h->next;
        curr++;
    }
    Node* temp=h->next;
    h->next=NULL;
    free(temp);
}
void transversal(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}
int main(){
    Node* head=NULL;
    insert_at_head(head,2);
    // transversal(head);
    insert_at_head(head,1);
    // transversal(head);
    insert_at_tail(head,3);
    // transversal(head);
    insert_at_head(head,0);
    // transversal(head);
    insert_at_tail(head,4);
    // transversal(head);
    insert_at_position(head,5,3);
    // transversal(head);
    update_at_position(head,6,3);
    transversal(head);
    deletion_at_head(head);
    transversal(head);
    deletion_at_tail(head);
    transversal(head);
    deletion_at_position(head,1);
    transversal(head);
}
