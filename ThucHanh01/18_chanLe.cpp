#include <iostream>
using namespace std;
bool chanLe(int a){
    bool kq;
    if(a%2==0){
        kq = true;
    }else kq = false;
    return kq;
}
int main(){
    int n;
    cout<<"nhap n: ";cin>>n;
    if(chanLe(n)){
        cout<<n<<" la so chan";
    }else cout<<n<<" la so le";
    return 0;
    
}