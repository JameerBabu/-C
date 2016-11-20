#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,i;
    cin >> a ;
    vector<int>v;
    for (i=0;i<a;i++) {
        int b;
        cin >> b;

        v.push_back(b);

    }

    sort(v.begin(),v.end());
    int c,j,d,id1;
    cin >> c;
    for(j=0;j<c;j++){
        cin >> d ;

    vector<int>::iterator it1;
    it1 = lower_bound(v.begin(), v.end(), d);
    id1 = distance(v.begin(), it1);
        if (v[id1]==d) {
            cout << "Yes" << ""<<d <<endl;
        }
        else{
            cout << "No" << ""<<v[id1]<<endl;
        }
    }
    return 0;
}
