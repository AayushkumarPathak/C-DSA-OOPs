#include <iostream>
#include <iomanip>

using namespace std;

int getDayOfWeek(int year, int month, int day) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int dayOfWeek = (day + 13 * (month + 1) / 5 + k + k / 4 + j / 4 - 2 * j) % 7;
    return (dayOfWeek + 5) % 7;  // Adjust to start from Monday (0 = Monday, 6 = Sunday)
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int year, int month) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

int main() {
    int month, year;
    cin >> month >> year;

    if (month < 1 || month > 12 || year < 0) {
        cout << "Invalid input." << endl;
        return 1;
    }

    cout << "=========================" << endl;
    cout << "    " << month << '/' << year << " Calendar" << endl;
    cout << "=========================" << endl;
    cout << "Mon Tue Wed Thu Fri Sat Sun" << endl;

    int dayOfWeek = getDayOfWeek(year, month, 1);
    int totalDays = getDaysInMonth(year, month);

    int** calendarLayout = new int*[6]; // Maximum of 6 rows
    for (int i = 0; i < 6; i++) {
        calendarLayout[i] = new int[7];
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            calendarLayout[i][j] = -1; // Initialize with -1
        }
    }

    int currentRow = 0;
    int currentCol = dayOfWeek;

    for (int day = 1; day <= totalDays; day++) {
        calendarLayout[currentRow][currentCol] = day;
        if (currentCol == 6) {
            currentRow++;
            currentCol = 0;
        } else {
            currentCol++;
        }
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            if (calendarLayout[i][j] != -1) {
                cout << setw(4) << calendarLayout[i][j];
            } else {
                cout << "    ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < 6; i++) {
        delete[] calendarLayout[i];
    }
    delete[] calendarLayout;

    return 0;
}
