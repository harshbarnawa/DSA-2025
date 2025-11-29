#include <iostream>
using namespace std;

void guessNum(int num, int ans)
{

    if (num < ans)
    {
        cout << "You entered too small" << endl;
    }
    else if (num > ans)
    {
        cout << "You entered too large" << endl;
    }
    else
    {
        cout << "Whoo!!hoo..You are correct" << endl;
    }
    cout << endl;
}
int main()
{
    int ans = 87;
    int num;
    while (num != ans)
    {
        cout << "Guess the correct number: ";
        cin >> num;
        guessNum(num, ans);
    }
    return 0;
}