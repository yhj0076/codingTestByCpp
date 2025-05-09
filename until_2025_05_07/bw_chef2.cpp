//
// Created by yhj00 on 25. 5. 7.
//
#include <iostream>
#include <numeric>

using namespace std;

int main(int argc, char *argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(0);
    long long n,a=1,b;
    cin>>n;
    while(n--) {
        cin>>b;
        a=a*b*2/gcd(a,b*2);
    }cout<<a;
}
