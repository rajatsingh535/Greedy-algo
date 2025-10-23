#include<bits/stdc++.h>
using namespace std;

long long minsum(vector<int> &a , vector<int> &b){
    int n = a.size();
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());
    long long result = 0;
    for(int i = 0; i < n; i++){
        result += 1ll * a[i] * b[i];
    }

    return result;
}

int main()
{
    int n; cin >> n;
    vector<int> a(n) , b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int j = 0; j < n; j++) cin >> b[j];
    cout << minsum(a,b) << endl;

    return 0;
}
