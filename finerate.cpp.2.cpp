//author: Anthony Ndungu
// date: 2025/15/02
// Description: A program that calculates the fine amount for overdue library books based on the number of days overdue.
// The program takes the book ID, due date, and return date as input, and calculates the fine amount based on the number of days overdue.
// The fine rates are as follows:
// - 20 per day for up to 7 days overdue
// - 50 per day for 8-14 days overdue
// - 100 per day for 15-30 days overdue
// - 200 per day for over 30 days overdue
// The program uses the calculateDaysOverdue function to calculate the number of days between the due date and return date.
// The fine amount is then calculated based on the number of days overdue and the fine rates.
// The program outputs the fine amount for the book with the given book ID.
// Admission number:BSCIT-05-0097/2024
#include <iostream>
#include <string>
#include <ctime>  // Include the ctime library to handle date calculations

using namespace std;

// Function to calculate the number of days between two dates
int calculateDaysOverdue(int dueday, int duemonth, int dueyear, int returnday, int returnmonth, int returnyear) {
    struct tm dueDate = {0};
    struct tm returnDate = {0};

    // Setting the due date
    dueDate.tm_mday = dueday;
    dueDate.tm_mon = duemonth - 1; // Months are 0-based in tm struct
    dueDate.tm_year = dueyear - 1900; // Years are counted from 1900 in tm struct

    // Setting the return date
    returnDate.tm_mday = returnday;
    returnDate.tm_mon = returnmonth - 1;
    returnDate.tm_year = returnyear - 1900;

    // Convert both dates to time_t (seconds since the epoch)
    time_t dueTime = mktime(&dueDate);
    time_t returnTime = mktime(&returnDate);

    // Calculate the difference in seconds and convert to days
    double difference = difftime(returnTime, dueTime);
    return difference / (60 * 60 * 24);  // Convert seconds to days
}

int main() {
    int bookID, dueday, duemonth, dueyear, returnday, returnmonth, returnyear;
    int numberofdaysoverdue, fine_amount = 0, finerate;

    cout << "Enter the bookID:" << endl;
    cin >> bookID;

    cout << "Enter the duedate in dd mm yyyy format: " << endl;
    cin >> dueday >> duemonth >> dueyear;

    cout << "Enter the returndate in dd mm yyyy format:" << endl;
    cin >> returnday >> returnmonth >> returnyear;

    // Calculate the number of days overdue
    numberofdaysoverdue = calculateDaysOverdue(dueday, duemonth, dueyear, returnday, returnmonth, returnyear);

    if (numberofdaysoverdue < 0) {
        cout << "The book has not yet been returned. No fine is applicable." << endl;
        return 0;  // Exit early if the book hasn't been returned yet
    }

    // Determine the fine rate based on the overdue days
    if (numberofdaysoverdue < 7) {
        finerate = 20;
    } else if (numberofdaysoverdue >= 7 && numberofdaysoverdue < 14) {
        finerate = 50;
    } else if (numberofdaysoverdue >= 14 && numberofdaysoverdue < 31) {
        finerate = 100;
    } else {
        finerate = 200;  // If overdue more than 30 days, charge an extra 100 per day
    }
    fine_amount = numberofdaysoverdue * finerate;
    cout<<"The fine amount for the book with bookID "<<bookID<<" is:"<<fine_amount<<endl;
    return 0;
}
#
