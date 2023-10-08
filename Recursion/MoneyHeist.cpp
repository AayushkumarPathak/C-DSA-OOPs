/*
MONEY HEIST!



You are the Professor of a professional robbery group. And now you are planning to rob houses along a street. Each house has a 
certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security 
systems connected, and they will automatically contact the police if two adjacent houses are broken into on the same night.



Given an integer array representing the amount of money in each house. 
As the professor, plan smart to get the maximum amount of money you can rob 
tonight without alerting the police. Write a recursive function, maximumLoot(), 
that returns the maximum amount that can be robbed.



Example 1
Input:

5
2 7 9 3 1

Output:
12

Explanation:
Rob house 1 (money = 2), rob house 3 (money = 9), and rob house 5 (money = 1).
Total amount you can rob = 2 + 9 + 1 = 12.

Example 2
Input:
6
5 1 2 6 3 4

Output:

15


Explanation:

Rob house 1 (money = 5), rob house 4 (money = 6), and rob house 6 (money = 4). Total amount you can rob = 5 + 6 + 4 = 15.

Note: This kind of question helps in clearing Amazon recruitment.

Input format :
The first line of input consists of an integer denoting the number of houses (n).

The second line of input consists of the amount in each house, separated by a space.

Output format :
The output prints the maximum loot that is possible without alerting the police.

Code constraints :
1 <= n <= 20

amount in each house > 0

Sample test cases :
Input 1 :
5
2 7 9 3 1
Output 1 :
12
Input 2 :
6
5 1 2 6 3 4
Output 2 :
15
*/

#include <iostream>
using namespace std;

const int MAX_N = 20; // Define a maximum size for the array

int maximumLoot(int hval[], int n) {
    if (n < 0) {
        return 0;
    }
    
    // Calculate the maximum loot if we rob the current house and skip the next house,
    // or if we skip the current house and move to the next house.
    int robCurrentHouse = hval[n] + maximumLoot(hval, n - 2);
    int skipCurrentHouse = maximumLoot(hval, n - 1);
    
    // Return the maximum loot between these two choices.
    return max(robCurrentHouse, skipCurrentHouse);
}

int main() {
    int n;
    cin >> n;

    int hval[MAX_N];
    for (int i = 0; i < n; i++) {
        cin >> hval[i];
    }

    cout << maximumLoot(hval, n - 1);

    return 0;
}
