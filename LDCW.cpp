#include <iostream>
using namespace std;

int main() {
    string device;
    double power, hours;

    cout << "Enter your device name: ";
    cin >> device;
    cout << "Enter power usage in watts (W): ";
    cin >> power;
    cout << "Enter usage duration per day (hours): ";
    cin >> hours;

    double kWh = (power * hours) / 1000.0;
    double co2 = kWh * 0.5; 

    cout << "\nDevice: " << device << endl;
    cout << "Daily consumption: " << kWh << " kWh" << endl;
    cout << "Estimated CO2 emitted: " << co2 << " kg\n";
    return 0;
}
