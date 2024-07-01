#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// in a village Bsdk
// n = no of friends
// k = no of bottels
// l = milliliters of the drink
// c = no of lime
// d = no of slice of a lime
// p = grams of salt

// To make a toast(chakna), they need
// 1. each friend needs nl milliliters of the drink
// 2. a slice of lime
// 3. np grams of salt.

// 1= n*l
// x=x*n*l;
//  //Note
//  A comment to the first sample:



// bs ye padh aur dimag mat laga
// Overall the friends have 4 * 5 = 20 milliliters of the drink, it is enough to make 20 / 3 = 6 toasts. The limes are enough for 10 * 8 = 80 toasts and the salt is enough for 100 / 1 = 100 toasts. However, there are 3 friends in the group, so the answer is min(6, 80, 100) / 3 = 2.

int main()
{
   int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    // Total milliliters of drink
    int total_drink = k * l;
    
    // Total number of toasts each friend can make from the drink
    int toasts_from_drink = total_drink / nl;
    
    // Total number of lime slices available
    int total_slices = c * d;
    
    // Total number of toasts each friend can make from the salt
    int toasts_from_salt = p / np;
    
    // Calculate the minimum number of toasts possible from all resources
    int max_toasts_per_person = min({toasts_from_drink, total_slices, toasts_from_salt}) / n;
    
    cout << max_toasts_per_person << endl;
    return 0;
}