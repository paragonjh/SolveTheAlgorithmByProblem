#include <iostream>
using namespace std;
///
///두개의 정수를 인자로 받아
/// 큰값을 반환하는 max(), 작은 값을 반환하는 min() 작성해라
///

int min(int x, int y)
{
  return x > y ? y : x; 
}

int max(int x, int y)
{
  return x > y ? x : y; 
}

int main(int argc, char* argv[])
{
  cout<<"Min(3,4) Val:"<<min(3,4)<<endl;
  cout<<"Max(3,4) Val:"<<max(3,4)<<endl;  

  return 0;
}
