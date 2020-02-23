#include <iostream>
#include <cmath>
using namespace std;
bool prime(long long int p){
    if(p==2)
        return true;
    if(p%2==0)
        return false;
    long long int i=3;
    while(pow(i,2)<=p){
        if(p%i==0)
            return false;
        i+=2;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long int n;
        cin >> n;
        for(long long int i=1;i<=n;i++){
            long long int x=n/i;
            if(n%x==0){
                if(prime(x)){
                    cout<<x<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}

