// linear search
// a=10 20 30 40 50
//  //key=40
//  # include<iostream>
//  # include<iomanip>
//  using namespace std;
//  int linearsearch(int a[],int n,int key){
//      for(int i=0;i<n;i++){
//          if(a[i]==key){
//              return i;
//          }
//      }
//      return -1;
//  }
//  // int main(){
//  //     int n;
//  //     cin>>n;
//  //     int a[n];
//  //     for(int i=0;i<n;i++){
//  //         cin>>a[i];
//  //     }
//  //     int key;
//  //     cin>>key;
//  //     cout<<linearsearch(a,n,key);
//  // }
//  //binary search searching through mid
//  # include<iostream>
//  # include<iomanip>
//  using namespace std;
//  int binary(int a[],int n,int key){
//      int f=0;
//      int l=n;

//     for(int i=0;i<n;i++){
//         int mid=(f+l)/2;
//         if(a[mid]==key){
//             return mid;
//         }
//         else if(a[mid]>key){
//             l=mid-1;
//         }
//         else{
//             f=mid+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int key;
//     cin>>key;
//     cout<<binary(a,n,key);
// }
// Selection sort
// firrst by comparing elemnt at 0 and element at 1 and swapping itv at bas ees of minimum  the lopping and compare
// # include<iostream>
// # include<iomanip>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++){
// cin>>a[i];
//
// }
// int temp;
// for(int i=0;i<n-1;i++){
// for(int j=i+1;j<n;j++){
// if(a[j]<a[i]){
// temp=a[j];
// a[j]=a[i];
// a[i]=temp;
// }
// }
// }
// for(int i=0;i<n;i++){
// cout<<a[i];
// }
// }
// bubble sort
// # include<iostream>
// # include<iomanip>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int temp;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(a[j]>a[j+1]){
//                 temp=a[j+1];
//                 a[j+1]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i];
// }
// }
// insertion sort
// we start from index 1 second number and compare with previous index elements and shift it forward if it is smaller
// # include<iostream>
// # include<iomanip>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++){
// cin>>a[i];
// }
// int current;
// int temp;
// for(int i=1;i<n;i++){
// int current =a[i];
// int j=i-1;
// while(a[j]>current&&j>=0){
// temp=a[j+1]6;
// a[j+1]=a[j];
// a[j]=temp;
// j--;
// }
// a[j+1]=current;
// }
// for(int i=0;i<n;i++){
// cout<<a[i];
// }
// }
// # include<iostream>
// # include<iomanip>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;

//     Node(int data){
//         val=data;
//         next=NULL;

//     }
// };
// int main(){
//     Node* n=new Node(1);
//     cout<<n->val<<" "<<n->next<<endl;
//     return 0;
// }
// Linked List;
// creation
// # include<iostream>
// # include<iomanip>
// using namespace std;
// class Node{
// public:
// int data;
// Node* next;
// Node(int val){
// data=val;
// next=NULL;
// }
// };
// int main(){
// Node* n=new Node(12);
// cout<<n->data<<" "<<n->next<<endl;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// insert a thing at starting of a linke dlist ;
// Single File Programming Question
// Problem Statement

// Lisa wants to create a linked list sorted in ascending order. She wants to insert nodes in such a way that the linked list remains sorted after insertion.

// Write a program that takes the number of nodes to be inserted, followed by their values in non-decreasing order. The program should then ask for a new value and insert a node with that value at the appropriate position to maintain the sorted order.

// Finally, the program should print the updated linked list.

// Example

// Input:

// 5

// 1 3 5 7 9

// 4

// Output:

// 1 3 4 5 7 9

// Explanation:

// The program first creates a sorted linked list using the given input values: 1, 3, 5, 7, and 9. After creating the initial sorted linked list, the program asks for a new value, which is 4. It then inserts a node with value 4 at the appropriate position to maintain the sorted order. Finally, the program prints the updated linked list, which is 1, 3, 4, 5, 7, and 9 in ascending order.

// Company tags: Wipro

// Input format :
// The first line of input consists of an integer n, representing the number of elements in the initial sorted linked list.

// The second line of input consists of n space-separated integers, representing the elements of the sorted linked list.

// The third line of input consists of integer data, which represents the element to be inserted into the linked list.

// Output format :
// The output displays the updated linked list after inserting the new element, separated by space.

// The linked list should remain sorted in ascending order.

// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 10

// -100 ≤ elements, data ≤ 100

// Sample test cases :
// Input 1 :
// 5
// 1 3 5 7 9
// 4
// Output 1 :
// 1 3 4 5 7 9
// Input 2 :
// 6
// -15 -10 0 5 9 10
// 7
// Output 2 :
// -15 -10 0 5 7 9 10
// # include<iostream>
// # include<iomanip>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// void insert_at_end(Node* &head,int val){
//     Node* new_n=new Node(val);
//     // Node* temp=head;
//     if(head==NULL||head->data >= val){
//         new_n->next=head;
//         head=new_n;
//         return;
//     }
//     Node* curr=head;
//     while(curr->next!=NULL&&curr->next->data<val){
//         curr=curr->next;
//     }
//     new_n->next=curr->next;
//     curr->next=new_n;
// }
// void display(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node* head=NULL;
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         int a;
//         cin>>a;
//         insert_at_end(head,a);
//     }
//     int b;
//     cin>>b;
//     insert_at_end(head,b);
//     display(head);
//     // display(head);
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////// delete the alternate element in linekd list;

// # include<iostream>
// # include<iomanip>
// using namespace std;
// class Node{
// public:
// int data;
// Node* next;
// Node(int val){
// data=val;
// next=NULL;
// }
// };
// void insert_at_tail(Node* &head,int val){
// Node*temp=head;
// Node* new_n=new Node(val);
// if(head==NULL){
// head=new_n;
// return ;
// }
// while(temp->next!=NULL){
// temp=temp->next;
// }
// temp->next=new_n;
// }
// void display(Node* &head){
// Node* temp=head;
// while(temp!=NULL){
// cout<<temp->data<<" ";
// temp=temp->next;
// }
// cout<<endl;
// }
// void alternate(Node* &head){
// Node* new_nn=new Node(val);//
// Node*curr=head;
// Node* temp=curr->next;//
// while(curr!=NULL&&curr->next!=NULL){
// Node* temp=curr->next;
// curr->next=curr->next->next;
// free(temp);
// curr=curr->next;
// }
// }
// int main(){
// Node* head=NULL;
// insert_at_tail(head,1);
// insert_at_tail(head,2);
// insert_at_tail(head,3);
// insert_at_tail(head,4);
// insert_at_tail(head,5);
// insert_at_tail(head,6);

// display(head);
// alternate(head);
// display(head);
// }
/////////////  sorted linked list but having duplicate elements delete duplicte and return new linked list;
// # include<iostream>
// # include<iomanip>
// using namespace std;
// class Node{
// public:
// int data;
// Node* next;
// Node(int val){
// data=val;
// next=NULL;
// }
// };
// void insert_at_tail(Node* &head,int val){
// Node* temp=head;
// Node* new_n=new Node(val);
// Node*temp=head;
// if(head==NULL){
// head=new_n;
// return ;
// }
// while(temp->next!=NULL){
// temp=temp->next;
// }
// temp->next=new_n;
// }
// void display(Node* &head){
// Node*temp=head;
// while(temp!=NULL){
// cout<<temp->data<<"->";
// temp=temp->next;
// }
// cout<<"NULL";
// cout<<endl;
// }
// void duplicate(Node* &head){
//     Node*curr=head;
//     while(curr!=NULL&&curr->next!=NULL){
//         Node*temp=curr->next;
//         if(curr->data==curr->next->data){
//             curr->next=curr->next->next;
//             delete(temp);
//         }
//         else{
//             curr=curr->next;       //move curr to next only if no deleltion has ocuured
//         }
//     }
// }
//////////////////printing the lsit in reverse manner

// void reverse(Node* head){
//     if(head==NULL){
//         return;
//     }
//     reverse(head->next);
//     cout<<head->data<<" ";

// }
///////////////////////////////////reverse the whole linked list
// void reverse_list(Node* &head){
// Node* prev=NULL;
// Node* curr=head;
// while(curr!=NULL){
// Node* next=curr->next;
// curr->next=prev;
// curr->next=curr;
// prev=curr;
// curr=next;
//
// }
// head=prev;
// return ;
// }
// int main(){
// Node*head=NULL;
// insert_at_tail(head,1);
// insert_at_tail(head,2);
// //     insert_at_tail(head,2);
// //     insert_at_tail(head,2);
// insert_at_tail(head,3);
// //     insert_at_tail(head,3);
// //     insert_at_tail(head,3);
// insert_at_tail(head,4);
// //     insert_at_tail(head,4);
// insert_at_tail(head,5);
// //     insert_at_tail(head,5);
// display(head);
// reverse_list(head);
//     reverse(head);
// //     duplicate(head);
// display(head);
// }
// # include<iostream>
// # include<iomanip>
// using namespace std;
// class Node{
// public:
// int data;
// Node* next;
// Node(int val){
// data=val;
// next=NULL;
// }
// };
// void insert_at_end(Node* &head,int val){
// Node*new_n=new Node(val);
//
// if(head==NULL){
// head=new_n;
// return ;
// }
// Node*temp=head;
// while(temp->next!=NULL){
// temp=temp->next;
// }
// temp->next=new_n;
// }
// Node*recursive_reverse_till_k(Node* head,int k){
// Node* curr=head;
// int x=0;
// Node*prev=NULL;
// while(curr!=NULL&&x<k){
// Node*next=curr->next;
// curr->next=prev;
// prev=curr;
// curr=next;
// x++;
// }
// if(curr!=NULL){
// head->next=recursive_reverse_till_k(curr,k);
// head->next=new_head;
// }
// return prev;
// }
// void display(Node*head){
// Node*temp=head;
// while(temp!=NULL){
// cout<<temp->data<<"->";
// temp=temp->next;
// }
// cout<<"NULL"<<endl;
// }
// int main(){
// Node*head=NULL;
// insert_at_end(head,1);
// insert_at_end(head,2);
// insert_at_end(head,3);
// insert_at_end(head,4);
// insert_at_end(head,5);
// insert_at_end(head,6);
// display(head);
// head=recursive_reverse_till_k(head,2);
// display(head);
// }
//
/////////////////////////////////////////
// l1=1->2->3->4->5->null;
// l2=6->7->intersection with 4->5;
// #include <iostream>
// #include <iomanip>
// using namespace std;
// class Node
// {
// public:
    // int data;
    // Node *next;
    // Node(int val)
    // {
        // data = val;
        // next = NULL;
    // }
// };
// void insertion_at_end(Node *&head, int val)
// {
    // Node *new_n = new Node(val);
    // if (head == NULL)
    // {
        // head = new_n;
        // return;
    // }
    // Node *temp = head;
    // while (temp->next != NULL)
    // {
        // temp = temp->next;
    // }
    // temp->next = new_n;
// }
// void display(Node *head)
// {
    // Node *temp = head;
    // while (temp != NULL)
    // {
        // cout << temp->data << "->";
        // temp = temp->next;
    // }
    // cout << "NULL" << endl;
// }
// int getlen(Node *head)
// {
    // Node *temp = head;
    // int x = 0;
    // while (temp != NULL)
    // {
        // x++;
        // temp = temp->next;
    // }
    // return x;
// }
// Node *move_head(Node *head1, int k)
// {
    // Node *temp = head1;
    // while (k > 0 && temp != NULL)
    // {
        // temp = temp->next;
        // k--;
    // }
    // return temp;
// }
// Node *intersect(Node *head1, Node *head2)
// {
    // Node *ptr1=head1;
    // Node *ptr2=head2;
    // int l1 = getlen(head1);
    // int l2 = getlen(head2);
    // Node *ptr1;
    // Node *ptr2;
    // if (l1 > l2)
    // {
        // int k = l1 - l2;
        // ptr1 = move_head(head1, k);
        // ptr2 = head2;
    // }
    // else
    // {
        // int k = l2 - l1;
        // ptr1 = head1;
        // ptr2 = move_head(head2, k);
    // }
    // while (ptr1 != NULL)
    // {
        // if (ptr1 == ptr2)
        // {
            // return ptr1;
        // }
        // ptr1 = ptr1->next;
        // ptr2 = ptr2->next;
    // }
    // return NULL;
// }
// int main()
// {
    // Node *head1 = NULL;
    // Node *head2 = NULL;
    // insertion_at_end(head1, 1);
    // insertion_at_end(head1, 2);
    // insertion_at_end(head1, 3);
    // insertion_at_end(head1, 4);
    // insertion_at_end(head1, 5);
    // insertion_at_end(head2, 6);
    // insertion_at_end(head2, 7);
    // head1->next->next->next= head2->next;
    // Node *inter = intersect(head1, head2);
    // if (inter != NULL)
    // {
        // cout << inter->data << endl;
    // }
    // else
    // {
        // cout << "NO";
    // }
    // display()
// }
/////////////////if two linked list are same or not on basis of same length and same element
// # include<iostream>
// # include<iomanip>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// void insert_at_tail(Node* &head,int val){
//     Node*new_n=new Node(val);
//     if(head==NULL){
//         head=new_n;
//         return ;
//     }
//     Node*temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=new_n;
// }
// int check_len(Node*head){
//     Node*curr=head;
//     int count=0;
//     while(curr!=NULL){
//         count++;
//         curr=curr->next;
//     }
//     return count;
// }
// bool check_similiar(Node* head1,Node* head2){
//     Node *temp_1=head1;
//     Node *temp_2=head2;
//     bool value=true;
//     int l1=check_len(temp_1);
//     int l2=check_len(temp_2);
//     if(l1!=l2){
//         return false;
//     }
//     else{
//         while(temp_1!=NULL&&temp_2!=NULL){
//             if(temp_1->data!=temp_2->data){
//                 return false;;
//             }
//             temp_1=temp_1->next;
//             temp_2=temp_2->next;
//         }
//     }
//     return true;
// }
// void remove_at_kth(Node*&head,int k){
//     Node*temp=head;
//     Node*ptr2=head;
//     int c=0;
//     while(k--){
//         ptr2=ptr2->next;
//         // c++;
//     }
//     while(ptr2->next!=NULL){
//         temp=temp->next;
//         ptr2=ptr2->next;
//     }
//     Node*f=temp->next;
//     temp->next=temp->next->next;
//     delete(f);
// }
// void display(Node*head){
//     // Node* head=NULL;
//     Node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     Node*head_1=NULL;
//     // Node*head_2=NULL;
//     insert_at_tail(head_1,1);    
//     insert_at_tail(head_1,2);
//     insert_at_tail(head_1,3);
//     insert_at_tail(head_1,4);
//     insert_at_tail(head_1,5);
//     insert_at_tail(head_1,6);
//     insert_at_tail(head_1,7);
//     display(head_1);
//     // insert_at_tail(head_2,8);
//     // if(check_similiar(head_1,head_2)){
//         // cout<<"done";
//     // }
//     // else{
//         // cout<<"F";
//     // }
//     remove_at_kth(head_1,3);
    
// }
/////////////////////////////////////rotate the linked list by k nodes
// # include<iostream>
// # include<iomanip>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// void insert_at_end(Node*&head,int val){
//     Node*new_n=new Node(val);
//     if(head==NULL){
//         head=new_n;
//         return ;
//     }
//     Node*temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=new_n;
// }
// void display(Node*head){
//     Node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// Node*rotate_by_k(Node* &head,int k,int n){
//     // Node*tail=head;/
//     if(k==0||head==NULL||head->next==NULL){
//         return head;
//     }
//     k=k%n;
//     if(k==0){
//         return head;

//     }
//     Node*tail=head;
//     while(tail->next!=NULL){
//         tail=tail->next;
//     }
//     tail->next=head;
//     Node*temp=head;
//     for(int i=1;i<n-k;i++){
//         temp=temp->next;
//     }
//     Node*new_head=temp->next;
//     temp->next=NULL;
//     // temp->next=head;
//     return new_head;
// }
// int main(){
//     Node*head=NULL;
//     insert_at_end(head,1);
//     insert_at_end(head,2);
//     insert_at_end(head,3);
//     insert_at_end(head,4);
//     insert_at_end(head,5);
//     insert_at_end(head,6);
//     // insert_at_end(head,7);
//     display(head);
//     head=rotate_by_k(head,3,6);
//     display(head);
// }
// Nandha wants to delete a range of nodes between two given positions in a singly linked list. Write a program that takes input for the size of the linked list, the elements of the linked list, the start position, and the end position. The program should delete the nodes between the specified positions and display the updated linked list.



// Company Tags: TCS

// Input format :
// The first line contains an integer 'n' representing the size of the linked list.

// The second line contains 'n' space-separated integers representing the elements of the linked list.

// The third line contains an integer 'S' representing the start position.

// The fourth line contains an integer 'E' representing the end position.

// Output format :
// The first line of output displays "Linked List before deletion: " followed by the linked list before deletion.

// The second line of output displays "Linked List after deletion: " followed by the linked list after deletion.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ n ≤ 100

// -50000 ≤ elements ≤ 50000

// 1 ≤ S ≤ 100

// 1 ≤ E ≤ 100

// Sample test cases :
// Input 1 :
// 5
// 1 2 3 4 5
// 1
// 3
// Output 1 :
// Linked List before deletion: 1 2 3 4 5 
// Linked List after deletion: 4 5 
// Input 2 :
// 5
// -50000 50000 4000 3676 7263
// 1
// 5
// Output 2 :
// Linked List before deletion: -50000 50000 4000 3676 7263 
// Linked List after deletion: 
// Elsa is organizing a sequence of data stored in a singly linked list and aims to streamline the list by removing nodes positioned at even indices. The linked list nodes are inserted at the end by getting the input from the user.



// Your task is to implement a program that reads the list data, removes the nodes at even positions, and outputs the modified list.



// Company Tags: TCS

// Input format :
// The first line of input consists of an integer n, representing the number of elements in the linked list.

// The second line contains n space-separated, each representing an element of the linked list.

// Output format :
// The first line of output displays "Original Linked List: " followed by the elements of the linked list before deletion.

// The second line displays "Final Linked List: " followed by the elements of the linked list after the deletion of the even-positioned nodes.



// Refer to the sample output for format specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1≤ n ≤ 100

// -10000 ≤ elements ≤ 10000

// Sample test cases :
// Input 1 :
// 5
// 100 200 300 10000 9999
// Output 1 :
// Original Linked List: 100 200 300 10000 9999 
// Final Linked List: 100 300 9999 
// Input 2 :
// 3
// -10000 -2000 -3000
// Output 2 :
// Original Linked List: -10000 -2000 -3000 
// Final Linked List: -10000 -3000 
// Note :
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// # stck implemntration.
// # include<iostream>
// # include<iomanip>
// # include<stack>
// using namespace std;
// void copyS(stack<int>&ori,stack<int>&res){
//     stack<int>temp;
//     while(!ori.empty()){
//         temp.push(ori.top());
//         ori.pop();
//     }
//     while(!temp.empty()){
//         res.push(temp.top());
//         temp.pop();
//     }
// }
// int main(){
//     stack<int>ori;
//     ori.push(4);
//     ori.push(3);
//     ori.push(2);
//     ori.push(1);
//     stack<int>des;
//     copyS(ori,des);
//     cout<<"element of des are:";
//     while(!des.empty()){
//         cout<<des.top()<<" ";
//         des.pop();
//     }
//     cout<<endl;
//     return 0;
// }

//////////////////////////insert at bottom;;
// # include<iostream>
// # include<iomanip>
// # include<stack>
// using namespace std;
// void add_at_bottom(int x,stack<int>&ori){
//     stack<int>temp;
//     while(!ori.empty()){
//         temp.push(ori.top());
//         ori.pop();
//     }
//     ori.push(x);
//     while(!temp.empty()){
//         ori.push(temp.top());
//         temp.pop();
//     }
// }
// void insert_at_index(int index,int x,stack<int>&ori){
//     int count=0;
//     int ss=ori.size();
//     stack<int>temp;
//     while(count<=ss-index){
//         temp.push(ori.top());
//         ori.pop();
//         count++;
//     }
//     ori.push(x);
//     while(!temp.empty()){
//         ori.push(temp.top());
//         temp.pop();
//     }
// }
// void delete_at_bottom(stack<int>&ori){
//     stack<int>temp;
//     int ss=ori.size();
//     while(ss!=1){
//         temp.push(ori.top());
//         ori.pop();
//         ss--;
//     }
//     ori.pop();
//     while(!temp.empty()){
//         ori.push(temp.top());
//         temp.pop();
//     }
// }
// void delete_at_index(int index,stack<int>&ori){
//     int count=0;
//     stack<int>temp;
//     int ss=ori.size();
//     while(count<ss-index){
//         temp.push(ori.top());
//         ori.pop();
//         count++;
//     }
//     ori.pop();
//     while(!temp.empty()){
//         ori.push(temp.top());
//         temp.pop();
//     }
// }
// int main(){
//     stack<int>ori;
//     ori.push(4);
//     ori.push(3);
//     ori.push(2);
//     ori.push(1);
//     ori.push(10);
//     delete_at_index(2,ori);
//     while(!ori.empty()){
//         cout<<ori.top()<<" ";
//         ori.pop();
//     }
//     cout<<endl;
//     return 0;
// }
// # include<iostream>
// # include<stack>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     stack<int>ori;
//     while(x>0){
//         int rem=x%2;
//         ori.push(rem);
//         x=x/2;
//     }
//     while(!ori.empty()){
//         cout<<ori.top();
//         ori.pop();
//     }
// }
// next greater element (NGE)/
// # include<iostream>
// # include<iomanip>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     int x[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         x[i]=-1;
        
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[j]>a[i]){
//                 x[i]=a[j];
//                 break;
//             }
      
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" "<<x[i];
//         cout<<endl;
//     }
// }
// // sorting the stcak// You are using GCC
// # include<iostream>
// # include<iomanip>
// # include<stack>
// using namespace std;
// void sort(stack<int>&ori){
//     stack<int>temp;
//     while(!ori.empty()){
//         int cur=ori.top();
//         ori.pop();
//         while(!temp.empty()&&temp.top()>cur){
//             ori.push(temp.top());
//             temp.pop();
//         }
//         temp.push(cur);
//     }
//     while(!temp.empty()){
//         ori.push(temp.top());
//         temp.pop();
//     }
// }
// void print(stack<int>ori){
//     stack<int>temp;
//     while(!ori.empty()){
//         cout<<ori.top()<<" ";
//         temp.push(ori.top());
//         ori.pop();
//     }
//     while(!temp.empty()){
//         // cout<<temp.top()<<" ";
//         ori.push(temp.top());
//         temp.pop();
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     stack<int>ori;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int a;
//         cin>>a;
//         ori.push(a);
//     }
//     cout<<"Original Stack: ";
//     print(ori);
//     sort(ori);
//     cout<<"Sorted Stack: ";
//     print(ori);
// }