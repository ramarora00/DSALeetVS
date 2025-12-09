// # include<iostream>
// using namespace std;
// int main(){
    // cout<<"Hello World";
// return 0;
// }
# include<iostream>
# include<string>
using namespace std;
class student{
    string name;
    int age,number;
    public:
    void getdata(string s){
        name=s;
        cout<<name;
    }
};
int main(){
    student s1;
    string x;
    cin>>x;
    s1.getdata(x);
}

# include<iostream.
3=# include<cmath>
using namwspace std;
int main(){
    int n;
    cin>>
}
Palindrome;
# include<iostream>
# include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    int x=1;
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-1-i]){
            x=0;
        }
    }
    if(x==1){
        cout<<"Palindrome";
    }
    else{
        cout<<"No";
    }
}
Larget word in a senetence
# include<iostream>
# include<string>
# include<iomanip>
#include <string.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n+1];
    cin.getline(a,n);
    int maxl=0;
    int curl=0;
    int lari=0;
    int stari=0;
    int z=sizeof(a);
    for(int i=0;i<z;i++){
        if(a[i]==' '||a[i]=='\0'){
            curl++;
        }
        else{
            if(curl>maxl){
                maxl=curl;
            }
        }
    }
    cout<<maxl;
}
# include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        bool check=false;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                check=true;
            }
        }
        if(check){
            continue;
        }
        int count=0;
        for(int k=0;k<n;k++){
            if(a[i]==a[k]){
                count++;
            }
        }
        cout<<a[i]<<count<<endl;
    }
}
//////////////////////////rotating a matrix 90 degree

# include<iostream>
# include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int k=0;k<n;k++){
        int start=0;
        int end=n-1;
        while(start<end){
            int temp=a[k][start];
            a[k][start]=a[k][end];
            a[k][end]=temp;
            start++;
            end--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
////////////////////////////////////////multiplication of a mtrix
# include<iostream>
# include<iomanip>
using namespace std;
int main(){
    int n1,m1,n2,m2;
    cin>>n1>>m1;
    cin>>n2>>m2;
    int a[n1][m1];
    int b[n2][m2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++){
            cin>>b[i][j];
        }
    }
    int mul[n1][m2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            for(int k=0;k<m1;k++){
                mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
            }
        }
    }
}
# include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"HEllo"<<n<<" ";
}
#include<iomanip>
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        int temp=
    }
}