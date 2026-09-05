#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate the value of the array
long long calculateValue(vector<int> &arr)
{
    int maximum = 0;
    long long sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        maximum = max(maximum, arr[i]); // Prefix maximum
        sum += maximum;
    }

    return sum;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        // Case when we don't perform any swap
        long long answer = calculateValue(arr);

        // Try every possible swap
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(arr[i], arr[j]);

                answer = max(answer, calculateValue(arr));

                // Restore the original array
                swap(arr[i], arr[j]);
            }
        }

        cout << answer << endl;
    }

    return 0;
}