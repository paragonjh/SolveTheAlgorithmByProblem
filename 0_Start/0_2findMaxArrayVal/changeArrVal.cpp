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

void changeVal(array<int,5> &arr, int first, int second)
{
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    array<int,5> myArray = {1,2,3,4,5};
    changeVal(myArray, 0,1);
    
    for(auto it = myArray.begin(); it != myArray.end(); ++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}

