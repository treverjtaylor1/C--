#include <iostream>
using namespace std;

// Sales Tax example 
 int main() {
        double sales = 95000;
        cout << "Sales = $" << sales <<endl;
        const double stateTaxRate = 0.04; // State Tax Rate
        const double countyTaxRate = 0.02; // County Tax Rate
        double stateTaxTotal = (sales * stateTaxRate); // Taking Sales times State Tax Rate to find State Tax
        double countyTaxTotal = (sales * countyTaxRate); // Taking Sales times County Tax Rate to find County Tax
        double grossSales = sales - (stateTaxTotal + countyTaxTotal); 
        cout <<  "State Tax = $" << stateTaxTotal << endl
             << "County Tax = $" << countyTaxTotal << endl
             << "Total Sales After Tax = $" << grossSales;
        return 0;
} 