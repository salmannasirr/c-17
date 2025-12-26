#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main() {
    double radius {0};
    const double pi {3.141592653589793238};
    short int num_prec_digits {4};

    cout << "Please enter the radius of the Circle to calculate its area:" << endl;
    cin >> radius;
    cout << "Please enter the number of precision digits required(default = 4):" << endl;
    cin >> num_prec_digits; 

    if (!cin || 
    radius <= 0 || 
    !std::isfinite(radius) ||
    num_prec_digits <= 0 || 
    num_prec_digits > std::numeric_limits<double>::max_digits10
    )
    {
        cout << "Invalid entry...Aborting" << endl;
        return 1;
    }

    const auto area = pi * radius * radius;

    cout << "The area of the Circle has been calculated to be: " << std::setprecision(num_prec_digits) << area << endl;

    return 0;

}