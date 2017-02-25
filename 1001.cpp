#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a,b;
        if(n > 10){
            a = 10;
            b = n - 10;
        }
        else{
            a = n;
            b = 0;
        }
        cout << a << " " << b << endl;
    }
    return 0;
}
