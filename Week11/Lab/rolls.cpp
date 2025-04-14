#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDie() {
    return rand() % 6 + 1;
}

double calculateAverage(int rolls) {
    int total = 0;
    for (int i = 0; i < rolls; i++) {
        total += rollDie();
    }
    return static_cast<double>(total) / rolls;
}

double absoluteValue(double value) {
    return (value < 0) ? -value : value;
}

double percentError(double theoretical, double calculated) {
    return 2 * (absoluteValue(theoretical - calculated) / (theoretical + calculated)) * 100;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    const double THEORETICAL_AVERAGE = 3.5;
    int numberOfRolls = 10;

    double avg = calculateAverage(numberOfRolls);
    double error = percentError(THEORETICAL_AVERAGE, avg);

    cout << fixed << setprecision(2);
    cout << "Average of " << numberOfRolls << " rolls: " << avg << endl;
    cout << "Percent error: " << error << "%" << endl;

    return 0;
}