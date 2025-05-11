//
// Created by Abenezer on 5/10/2025.
//
/*
The program will take inputs of string and number
and put them in different vectors with the same index
and add the numbers in the other integer
*/

#include "std_lib_facilities.h"

int main() {
    // Valid full and short day names
    vector<string> vld_days = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    vector<string> vld_shrt_days = {"mon", "tue", "wed", "thur", "fri", "sat", "sun"};

    // Map short names to full names
    map<string, string> short_to_full = {
        {"mon", "monday"}, {"tue", "tuesday"}, {"wed", "wednesday"},
        {"thur", "thursday"}, {"fri", "friday"}, {"sat", "saturday"}, {"sun", "sunday"}
    };

    vector<string> days;
    vector<int> nums;

    string day;
    int num;
    int count = 0;

    while (true) {
        cin >> day >> num;

        if (day == "finish" && num == 0) break;

        // Convert to lowercase
        string lwr_day;
        for (char c : day) lwr_day += tolower(c);

        // Convert short to full if necessary
        if (short_to_full.count(lwr_day)) {
            lwr_day = short_to_full[lwr_day];
        }

        // Check if valid full day
        if (find(vld_days.begin(), vld_days.end(), lwr_day) != vld_days.end()) {
            auto it = find(days.begin(), days.end(), lwr_day);
            if (it != days.end()) {
                int index = distance(days.begin(), it);
                nums[index] += num;
            } else {
                days.push_back(lwr_day);
                nums.push_back(num);
            }
        } else {
            cout << "There is no day like this." << endl;
            count++;
        }
    }

    // Output results
    cout << "Valid inputs" << endl;
    for (int i = 0; i < days.size(); ++i) {
        cout << days[i] << ": " << nums[i] << endl;
    }

    cout << "Number of rejected values: " << count << endl;

    return 0;
}
