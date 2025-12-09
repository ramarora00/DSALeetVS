# include<iostream>
# include<iomanip>
using namespace std;
void merge(int a[],int l,int mid,int r,int g){
    int n1=mid-l+1;
    int n2=r-mid;
    int x[n1];
    int y[n2];
    for(int i=0;i<n1;i++){
        x[i]=a[l+i];
    }
    for(int i=0;i<n2;i++){
        y[i]=a[mid+i+1];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2){
        if(x[i]<y[j]){
            a[k]=x[i];
            k++;
            i++;
        }
        else{
            a[k]=y[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        a[k]=x[i];
        k++;
        i++;
    }
    while(j<n2){
        a[k]=y[j];
        j++;
        k++;
    }
    cout<<"interation"<<g++;
    for(int i=0;i<l+1;i++){
        cout<<a[i]<<" "
    }
}
void mergesort(int a[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        int g=1;
        merge(a,l,mid,r,g);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(a,0,n-1);
}
