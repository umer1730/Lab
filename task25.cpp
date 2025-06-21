#include<iostream>
using namespace std;
bool shouldFlagStudent(int activityLogs[], int n, int k, int T) 
{
    int sum = 0;

    // Sum of first 'k' elements
    for (int i = 0; i < k; ++i) {
        sum += activityLogs[i];
    }
    if (sum > T) return true;

    // Sliding window: from k to end
    for (int i = k; i < n; ++i) {
        sum += activityLogs[i] - activityLogs[i - k];
        if (sum > T) return true;
    }

    return false;
}

int main() {
    int n, k, T;

    // Get number of minutes (size of activity log)
    cout << "Enter number of minutes (size of activityLogs): ";
    cin >> n;

    int activityLogs[n];
 cout << "Enter the suspicious activity log values:\n";
    for (int i = 0; i < n; ++i) {
        cin >> activityLogs[i];
    }

    cout << "Enter the window size k: ";
    cin >> k;

    cout << "Enter the threshold T: ";
    cin >> T;

    bool flagged = shouldFlagStudent(activityLogs, n, k, T);
    if (flagged)
        cout << "Output: True (Student should be flagged)" << endl;
    else
        cout << "Output: False (Student is safe)" << endl;

    return 0;
}