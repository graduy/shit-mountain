#include <iostream>
#include<string> // to_string(): 将数字常量转换为字符串
#include<algorithm> // reverse 头文件
using namespace std;
int main()
{
    int nums;
    cin >> nums;
    string str = to_string(nums);
    reverse(str.begin(),str.end());
    cout << str;
    return 0;
}