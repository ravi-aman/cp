#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int coordinates[3] = {x1, x2, x3};
    sort(coordinates, coordinates + 3);

    int meeting_point = coordinates[1]; // The median of the three points
    int total_distance = abs(coordinates[0] - meeting_point) + abs(coordinates[1] - meeting_point) + abs(coordinates[2] - meeting_point);

    cout << total_distance << endl;
    return 0;
}
