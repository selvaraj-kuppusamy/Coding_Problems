/*
 * https://www.hackerrank.com/challenges/30-loops/problem
 */

#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main()
{
    int n,i;
    cin >> n;
    for(i=1;i<=10;i++)
    {
        cout <<n<<" x "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}
