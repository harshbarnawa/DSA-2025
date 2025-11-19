#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {2, 3, 5, 7, 9};

    for (int val : vec)
    {
        cout << val << endl;
    }

    return 0;
}