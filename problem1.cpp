//-> Given an array of size “N” ; b[i] -> represents the happiness you will get by selecting the ith element 
//-> The task is to select K elements and maximize your happiness. 
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

    int n , k;
    cin >> n >> k;
    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> b[i];
    // step 1
    sort(b.begin(),b.end(), greater<int>());

    //step2 

    long long total = 0;

    for(int i = 0; i < k; i++){
        total += b[i];
    }

    cout << total << endl;
    
    return 0;
}

//time complexity -- O(nlogn)
//space - O(1)

