#include <iostream>
#include <vector>

using namespace std;
int KthBits(int n, int k)
{
    // logic
    int mask = 1 << k;
    int ans = n / mask;
    return ans;
}

int main()
{
    int n;
    int k;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "Enter the number of kthShifting bits: " << endl;
    cin >> k;
    int bit = KthBits(n, k);
    cout << "The " << k << "th bit of " << n << " is: " << bit << endl;

    return 0;
}