# include<iostream>
# include<iomanip>
using namespace std;
# define n 100
class stack{
    int *arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"stack overflow";
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"underflow";4
            
            return ;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"no elemnet in stack";
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    cout<<st.Top()<<endl;
    st.push(40);
    st.push(50);
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty();
    return 0;
}
