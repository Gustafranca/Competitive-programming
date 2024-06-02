#include <iostream>
#include <cmath>
#include <iomanip>
#include <chrono>
using namespace std;

int main() {
    int distance = 0, speed = 0;
    float travel_time = 0.0;
    int start_hour = 19;

    cin >> distance >> speed;

    travel_time = static_cast<float>(distance) / speed;

    // Separate the travel time into integer hours and fractional minutes
    float fractional_hours, integral_hours;
    fractional_hours = modf(travel_time, &integral_hours);

    // Calculate total hours and minutes
    int total_hours = start_hour + static_cast<int>(integral_hours);
    int minutes = static_cast<int>(fractional_hours * 60);

    // Adjust total hours to 24-hour format
    while (total_hours >= 24) {
        total_hours -= 24;
    }

    // Print the result in HH:MM format
    cout << setw(2) << setfill('0') << total_hours << ":"
         << setw(2) << setfill('0') << minutes << endl;


    


    return 0;
}
