//
//  main.cpp
//  문제로풀어보는알고리즘
//
//  Created by 김지훈 on 26/02/2019.
//  Copyright © 2019 juneKim. All rights reserved.
//

#include <iostream>
#include <array>
using namespace std;

void rightRotate(array<int,8> &arr, int begin, int end)
{
    int endVal = arr[end];

    for(int i = end; i > begin; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[begin] = endVal;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    array<int,8> myArray = {1,2,3,4,5,6,7,8};
    rightRotate(myArray,2,6);
    
    for(auto it = myArray.begin(); it != myArray.end(); ++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
    return 0;
}
