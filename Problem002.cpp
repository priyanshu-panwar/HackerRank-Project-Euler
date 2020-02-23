#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long long int a = 1,b = 2,c = 0, sum = 0;
        while(b < n)
        {
            if(b%2==0)
            sum+=b;
            c=a+b;
            a=b;
            b=c;
        }
        cout << sum << endl;
    }   return 0;
}
