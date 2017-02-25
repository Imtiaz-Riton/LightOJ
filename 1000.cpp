#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int x, y;
        cin >> x >> y;
        int ans;
        if(x > 10) x = 10;
        if(y > 10) y = 10;
        ans = x + y;
        printf("Case %d: %d\n",i + 1, ans);
    }
    return  0;
}
