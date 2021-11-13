#include <iostream>
using namespace std;
int main() {

    int n=0;
    cin>>n;

    if (n>=2){
        int a=0, b=1, c=a+b;
        cout<<b<<endl;

        for(int i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
            cout << c << endl;

        }

        
    }else {
        cout<<"errore"<<endl;
    }

    
    return 0;
}
