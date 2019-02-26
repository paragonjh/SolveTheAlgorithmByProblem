//
//  main.cpp
//  문제로보는 알고리즘 0_2
//
//  Created by 김지훈 on 26/02/2019.
//  Copyright © 2019 juneKim. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int findMaxVal(vector<int> arr)
{
    int max = 0;
    max = arr[0];
    
    for(auto it = arr.begin(); it != arr.end(); ++it)
    {
        if(max < *it)
            max = *it;
    }
    
    return max;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> myVector = {1,2,3,4,5};
    
    cout << "fincMaxVal{1,2,3,4,5}:"<<findMaxVal(myVector)<<endl;;
    return 0;
}

