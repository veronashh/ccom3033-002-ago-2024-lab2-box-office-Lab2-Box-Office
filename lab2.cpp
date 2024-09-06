// Veronica I. Nash-Montes (@veronashh) 843-20-8290
// Gaddis, T. Starting out with C++ from Control Structures through Objects. (2009) Addison Wesley, Mass.
// This program calculates a theater's gross and net box office profit for a night. 

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    //Displega el proposito del programa.
    cout << "This program calculates a theater's gross and net box office profit for a night." << endl;

    //Solicitar nombre de la película.
    string moviename;
    cout << "Enter the name of the movie: ";
    getline(cin, moviename);

    //Cantidad de boletos vendidos de adulto y niños
    int adultticketssold;

    cout << "Enter the number of adult tickets sold: ";
    cin >> adultticketssold;

    int childticketssold;

    cout << "Enter the number of child tickets sold: ";
    cin >> childticketssold;

    //Constantes para precios de boletos.
    const double ADULT_TICKET_PRICE = 10.00;
    const double CHILD_TICKET_PRICE = 6.00;
    // 20% of gross profit
    const double THEATER_PERCENTAGE = 0.20; 

    // Calcular Gross Box Office Profit
    double grossBoxOfficeProfit = (adultticketssold * ADULT_TICKET_PRICE) + (childticketssold * CHILD_TICKET_PRICE);

    // Calcular Net Box Office Profit
    double netBoxOfficeProfit = grossBoxOfficeProfit * THEATER_PERCENTAGE;

    // Calcular Amount Paid to Distributor
    double amountPaidToDistributor = grossBoxOfficeProfit - netBoxOfficeProfit;

    // Display the results with proper formatting
    cout << endl;
    cout << left << setw(30) << "Movie Name:" 
         << right << setw(30) << "\"" << moviename << "\"" << endl;
    cout << left << setw(30) << "Adult Tickets Sold:" 
         << right << setw(30) << adultticketssold << endl;
    cout << left << setw(30) << "Child Tickets Sold:" 
         << right << setw(30) << childticketssold << endl;
    cout << left << setw(30) << "Gross Box Office Profit:" 
         << right << setw(30) << fixed << setprecision(2) << "$" << grossBoxOfficeProfit << endl;
    cout << left << setw(30) << "Net Box Office Profit:" 
         << right << setw(30) << fixed << setprecision(2) << "$" << netBoxOfficeProfit << endl;
    cout << left << setw(30) << "Amount Paid to Distributor:" 
         << right << setw(30) << fixed << setprecision(2) << "$" << amountPaidToDistributor << endl;

    return 0;
}
