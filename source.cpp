#include <iostream>
#include <string>
using namespace std;

int getTotalDays();
void getTimes(string &departureTime, string &arrivalTime);
double getAirfare();
double getCarRentals();
double getMilesDriven();
double getParkingFees(int totalDays);
double getTaxiFees(int totalDays);
double getConferenceFees();
double getHotelExpenses(int totalNights);
void getMealExpenses(string departureTime, string arrivalTime, int totalDays, double &breakfastExpense, double &lunchExpense, double &dinnerExpense);
void calculateAndDisplayTotals(int totalDays, string departureTime, string arrivalTime, double airfare, double carRentals, double milesDriven, double parkingFees, double taxiFees, double conferenceFees, double hotelExpenses, double breakfastExpense, double lunchExpense, double dinnerExpense);

int main() {
    int totalDays = getTotalDays();
    string departureTime, arrivalTime;
    getTimes(departureTime, arrivalTime);
    double airfare = getAirfare();
    double carRentals = getCarRentals();
    double milesDriven = getMilesDriven();
    double parkingFees = getParkingFees(totalDays);
    double taxiFees = getTaxiFees(totalDays);
    double conferenceFees = getConferenceFees();
    double hotelExpenses = getHotelExpenses(totalDays);
    double breakfastExpense = 0.0, lunchExpense = 0.0, dinnerExpense = 0.0;
    getMealExpenses(departureTime, arrivalTime, totalDays, breakfastExpense, lunchExpense, dinnerExpense);

    calculateAndDisplayTotals(totalDays, departureTime, arrivalTime, airfare, carRentals, milesDriven, parkingFees, taxiFees, conferenceFees, hotelExpenses, breakfastExpense, lunchExpense, dinnerExpense);

    return 0;
}



int getTotalDays() {
    int days;
    do {
        cout << "Enter the total number of days spent on the trip: ";
        cin >> days;
        if (days < 1) {
            cout << "Number of days must be at least 1. Please try again." << endl;
        }
    } while (days < 1);
    return days;
}

void getTimes(string &departureTime, string &arrivalTime) {
    cout << "Enter the departure time on the first day (HH:MM): ";
    cin >> departureTime;
    cout << "Enter the arrival time on the last day (HH:MM): ";
    cin >> arrivalTime;
}

double getAirfare() {
    double airfare;
    do {
        cout << "Enter the amount of round-trip airfare: ";
        cin >> airfare;
        if (airfare < 0) {
            cout << "Amount cannot be negative. Please try again." << endl;
        }
    } while (airfare < 0);
    return airfare;
}

double getCarRentals() {
    double carRentals;
    do {
        cout << "Enter the amount of car rentals: ";
        cin >> carRentals;
        if (carRentals < 0) {
            cout << "Amount cannot be negative. Please try again." << endl;
        }
    } while (carRentals < 0);
    return carRentals;
}

double getMilesDriven() {
    double milesDriven;
    do {
        cout << "Enter the number of miles driven (if a private vehicle was used): ";
        cin >> milesDriven;
        if (milesDriven < 0) {
            cout << "Miles driven cannot be negative. Please try again." << endl;
        }
    } while (milesDriven < 0);
    return milesDriven;
}

double getParkingFees(int totalDays) {
    double parkingFees = 0.0, fee;
    for (int i = 1; i <= totalDays; i++) {
        do {
            cout << "Enter parking fees for day " << i << ": ";
            cin >> fee;
            if (fee < 0) {
                cout << "Fee cannot be negative. Please try again." << endl;
            }
        } while (fee < 0);
        parkingFees += fee;
    }
    return parkingFees;
}

double getTaxiFees(int totalDays) {
    double taxiFees = 0.0, fee;
    for (int i = 1; i <= totalDays; i++) {
        do {
            cout << "Enter taxi fees for day " << i << ": ";
            cin >> fee;
            if (fee < 0) {
                cout << "Fee cannot be negative. Please try again." << endl;
            }
        } while (fee < 0);
        taxiFees += fee;
    }
    return taxiFees;
}

double getConferenceFees() {
    double conferenceFees;
    do {
        cout << "Enter conference or seminar registration fees: ";
        cin >> conferenceFees;
        if (conferenceFees < 0) {
            cout << "Fee cannot be negative. Please try again." << endl;
        }
    } while (conferenceFees < 0);
    return conferenceFees;
}

double getHotelExpenses(int totalNights) {
    double hotelExpenses = 0.0, fee;
    for (int i = 1; i <= totalNights; i++) {
        do {
            cout << "Enter hotel expense for night " << i << ": ";
            cin >> fee;
            if (fee < 0) {
                cout << "Fee cannot be negative. Please try again." << endl;
            }
        } while (fee < 0);
        hotelExpenses += fee;
    }
    return hotelExpenses;
}

void getMealExpenses(string departureTime, string arrivalTime, int totalDays, double &breakfastExpense, double &lunchExpense, double &dinnerExpense) {
    double fee;

  
    if (departureTime < "07:00") {
        do {
            cout << "Enter breakfast expense on the first day: ";
            cin >> fee;
            if (fee < 0) {
                cout << "Expense cannot be negative. Please try again." << endl;
            }
        } while (fee < 0);
        breakfastExpense += fee;
    }

    if (departureTime < "12:00") {
        do {
            cout << "Enter lunch expense on the first day: ";
            cin >> fee;
            if (fee < 0) {
                cout << "Expense cannot be negative. Please try again." << endl;
            }
        } while (fee < 0);
        lunchExpense += fee;
    }

    if (departureTime < "18:00") {
        do {
            cout << "Enter dinner expense on the first day: ";
            cin >> fee;
            if (fee < 0) {
                cout << "Expense cannot be negative. Please try again." << endl;
            }
        } while (fee < 0);
        dinnerExpense += fee;
    }

   
    for (int i = 2; i < totalDays; i++) {
        do {
            cout << "Enter breakfast expense for day " << i << ": ";
            cin >> fee;
            if (fee < 0) {
                cout << "Expense cannot be negative. Please try again." << endl;
            }
        } while (fee < 0);
        breakfastExpense += fee;

        do {
            cout << "Enter lunch expense for day " << i << ": ";
            cin >> fee;
            if (fee < 0) {
                cout << "Expense cannot be negative. Please try again." << endl;
            }
        } while (fee < 0);
        lunchExpense += fee;

        do {
            cout << "Enter dinner expense for day " << i << ": ";
            cin >> fee;
            if (fee < 0) {
                cout << "Expense cannot be negative. Please try again." << endl;
            }
        } while (fee < 0);
        dinnerExpense += fee;
    }

    // Last day meal allowances
    if (arrivalTime > "08:00") {
        do {
            cout << "Enter breakfast expense on the last day: ";
            cin >> fee;
            if (fee < 0) {
                cout << "Expense cannot be negative. Please try again." << endl;
            }
        } while (fee < 0);
        breakfastExpense += fee;
    }

    if (arrivalTime > "13:00") {
        do {
            cout << "Enter lunch expense on the last day: ";
            cin >> fee;
            if (fee < 0) {
                cout << "Expense cannot be negative. Please try again." << endl;
            }
        } while (fee < 0);
        lunchExpense += fee;
    }

    if (arrivalTime > "19:00") {
        do {
            cout << "Enter dinner expense on the last day: ";
            cin >> fee;
            if (fee < 0) {
                cout << "Expense cannot be negative. Please try again." << endl;
            }
        } while (fee < 0);
        dinnerExpense += fee;
    }
}

void calculateAndDisplayTotals(int totalDays, string departureTime, string arrivalTime, double airfare, double carRentals, double milesDriven, double parkingFees, double taxiFees, double conferenceFees, double hotelExpenses, double breakfastExpense, double lunchExpense, double dinnerExpense) {
    double totalExpenses = airfare + carRentals + (milesDriven * 0.27) + parkingFees + taxiFees + conferenceFees + hotelExpenses + breakfastExpense + lunchExpense + dinnerExpense;
    
    double allowableParkingFees = totalDays * 6.0;
    double allowableTaxiFees = totalDays * 10.0;
    double allowableHotelExpenses = totalDays * 90.0;
    double allowableMealExpenses = 0.0;

    if (departureTime < "07:00") allowableMealExpenses += 9.0;
    if (departureTime < "12:00") allowableMealExpenses += 12.0;
    if (departureTime < "18:00") allowableMealExpenses += 16.0;

    for (int i = 2; i < totalDays; i++) {
        allowableMealExpenses += 9.0 + 12.0 + 16.0;
    }

    if (arrivalTime > "08:00") allowableMealExpenses += 9.0;
    if (arrivalTime > "13:00") allowableMealExpenses += 12.0;
    if (arrivalTime > "19:00") allowableMealExpenses += 16.0;

    double totalAllowableExpenses = allowableParkingFees + allowableTaxiFees + allowableHotelExpenses + allowableMealExpenses + airfare + carRentals + (milesDriven * 0.27) + conferenceFees;
    double excessReimbursement = totalExpenses > totalAllowableExpenses ? totalExpenses - totalAllowableExpenses : 0;
    double amountSaved = totalExpenses < totalAllowableExpenses ? totalAllowableExpenses - totalExpenses : 0;

    cout << "Total expenses: $" << totalExpenses << endl;
    cout << "Total allowable expenses: $" << totalAllowableExpenses << endl;
    cout << "Excess reimbursement: $" << excessReimbursement << endl;
    cout << "Amount saved: $" << amountSaved << endl;
}
