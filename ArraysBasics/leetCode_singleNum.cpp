#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int val : nums)
    {
        ans = ans ^ val;
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 1, 2, 3, 2, 4, 4};

    int result = singleNumber(nums);
    cout << result;
    return 0;
}