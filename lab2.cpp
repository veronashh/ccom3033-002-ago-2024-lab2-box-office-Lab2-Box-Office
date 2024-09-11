// Veronica I. Nash-Montes (@veronashh) 843-20-8290
// Gaddis, T. Starting out with C++ from Control Structures through Objects. (2009) Addison Wesley, Mass.
// This program calculates a theater's gross and net box office profit for a night. 

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    //Desplegar el proposito del programa.
    cout << "This program calculates a theater's gross and net box office profit for a night." << endl;

    //Solicitar nombre de la película.
    string moviename;
    cout << "Enter the name of the movie: ";
    getline(cin, moviename);

    //Solicitar cantidad de boletos vendidos de adulto y niños
    int adultticketssold;

    cout << "Enter the number of adult tickets sold: ";
    cin >> adultticketssold;

    int childticketssold;

    cout << "Enter the number of child tickets sold: ";
    cin >> childticketssold;

    //Constantes para precios de boletos.
    const double ADULT_TICKET_PRICE = 10.00;
    const double CHILD_TICKET_PRICE = 6.00;
    // 20% de ganancia bruta 
    const double THEATER_PERCENTAGE = 0.20; 

    // Calcular ganancia bruta de box office 
    double grossBoxOfficeProfit = (adultticketssold * ADULT_TICKET_PRICE) + (childticketssold * CHILD_TICKET_PRICE);

    // Calcular ganancia neta de box office
    double netBoxOfficeProfit = grossBoxOfficeProfit * THEATER_PERCENTAGE;

    // Calcular cantidad pagada a distribuidor
    double amountPaidToDistributor = grossBoxOfficeProfit - netBoxOfficeProfit;

    // Precisión para valores monetarios
    const int width = 30;  
    const int monetaryWidth = 32; 
    
    cout << fixed << setprecision(2);

    // Desplegar resultados con formato correcto
    cout << endl;
    cout << left << setw(width) << "Movie Name:" 
         << right << setw(width) << "\"" << moviename << "\"" << endl;
    cout << left << setw(width) << "Adult Tickets Sold:" 
         << right << setw(width) << adultticketssold << endl;
    cout << left << setw(width) << "Child Tickets Sold:" 
         << right << setw(width) << childticketssold << endl;
    
    // Valores monetarios
    cout << left << setw(width) << "Gross Box Office Profit:" 
         << right << setw(monetaryWidth) << "$ " << fixed << showpoint<< grossBoxOfficeProfit << endl;
    cout << left << setw(width) << "Net Box Office Profit:" 
         << right << setw(monetaryWidth) << "$ " << fixed << showpoint<<netBoxOfficeProfit << endl;
    cout << left << setw(width) << "Amount Paid to Distributor:" 
         << right << setw(monetaryWidth) << "$ " << fixed << showpoint<< amountPaidToDistributor << endl;

    return 0;
}