#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int tandemBicycle(vector<int> redShirtSpeeds, vector<int> blueShirtSpeeds,
    bool fastest);

int main()
{
    auto redShirtSpeeds = { 5, 5, 3, 9, 2 };
    auto blueShirtSpeeds = { 3, 6, 7, 2, 1 };
    auto fastest = true;
    int result = tandemBicycle(redShirtSpeeds, blueShirtSpeeds, fastest);
    cout << result << " ";
    return 0;
}

int tandemBicycle(vector<int> redShirtSpeeds, vector<int> blueShirtSpeeds,
    bool fastest) {
    int sum = 0;
    // Write your code here.
    sort(redShirtSpeeds.begin(), redShirtSpeeds.end());
    sort(blueShirtSpeeds.begin(), blueShirtSpeeds.end());
    if (fastest)
    {
        for (int idx = 0; idx < redShirtSpeeds.size(); idx++)
        {
            int reindex = blueShirtSpeeds.size() - idx - 1;
            sum += redShirtSpeeds[idx] > blueShirtSpeeds[reindex] ? redShirtSpeeds[idx] : blueShirtSpeeds[reindex];
        }
        return sum;
    }
    else
    {
        for (int idx = 0; idx < redShirtSpeeds.size(); idx++)
        {
            sum += redShirtSpeeds[idx] > blueShirtSpeeds[idx] ? redShirtSpeeds[idx] : blueShirtSpeeds[idx];
        }
    }
    return sum;
}