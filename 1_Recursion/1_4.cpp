//
//  main.cpp
//  문제로풀어보는알고리즘
//
//  Created by 김지훈 on 04/03/2019.
//  Copyright © 2019 juneKim. All rights reserved.
//

#include <iostream>
#include <array>
using namespace std;
#define maxVal 200

long long nCr(int n, int r)
{
    //nCr = n-1Cr-1 + n-1Cr (r == 0 || r == 1 -> 1)
    static long long memo[maxVal][maxVal];
    
    if(memo[n][r] > 1)
        return memo[n][r];
    
    if(r == 0 || r == n)
        return memo[n][r] = 1;
    
    return memo[n][r] = nCr(n-1,r-1) + nCr(n-1,r);
}

long long fibo(int n)
{
    //fibo(0),fibo(1) = 1
    static long long fiboMap[maxVal];
    if(n == 1 || n == 2)
        return fiboMap[n] = 1;
    
    if(fiboMap[n] > 1)
        return fiboMap[n];
    
    return fiboMap[n]= fibo(n-1) + fibo(n-2);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    
    cout<<nCr(30,10)<<endl;
    
    cout<<fibo(50)<<endl;
    return 0;
}

