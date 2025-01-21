#include <bits/stdc++.h>
using namespace std;

long long calculateTrips(const vector<int>& time, long long totalTime) {
    long long trips = 0;
    for (int t : time) {
        trips += totalTime / t;
    }
    return trips;
}

long long minimumTimeToCompleteTrips(vector<int>& time, int totalTrips) {
    long long left = 1;
    long long right = 1LL * *min_element(time.begin(), time.end()) * totalTrips;
    long long res = right;

    while (left <= right) {
        long long mid = left + (right - left) / 2; 
        if (calculateTrips(time, mid) >= totalTrips) {
            res = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return res;
}

int main() {
    int n, totalTrips;
    cout << "Enter the number of vans: ";
    cin >> n;

    vector<int> time(n);
    cout << "Enter the time taken by each van for a round trip: ";
    for (int i = 0; i < n; ++i) {
        cin >> time[i];
    }
    cout << "Enter the total number of trips required: ";
    cin >> totalTrips;
    cout << "Minimum time required: " << minimumTimeToCompleteTrips(time, totalTrips) << endl;

    return 0;
}
