#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    cin >> a;

     vector<int> v;

    int i;
    for (i=0;i<a;i++){
    int j;
    cin >> j;
    v.push_back(j);


    }
    int b;
    cin >> b;
    v.erase(v.begin()+b);
    int c,d;
    cin >> c >> d;
    v.erase(v.begin() +c,v.begin()+d);
    int size = v.size();
    cout << size << endl;

     for (i=0;i<size;i++){
        cout << v[i] << " ";
    }

    return 0;
}
