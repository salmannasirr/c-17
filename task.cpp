#include <iostream>
#include <cmath>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int h_inches;
    int d_feet;
    int d_inches;
    float angle;
    cout << "This program calculates the height of the tree based on the following parameters...\n"
         << "\t-h(height of your eye when looking into a angle measuring device) in inches: type(h) = int\n"
         << "\t-d(distance you are from the tree) in feet and inches: type(d) = int\n"
         << "\t-a(angle from the angle measuring device) in degrees: type(a) = float" << endl;

    cout << "Please enter h:";
    cin >> h_inches;

    cout << "Please enter d_feet:";
    cin >> d_feet;

    cout << "Please enter d_inches:";
    cin >> d_inches;

    cout << "Please enter the angle:";
    cin >> angle;
    cout << endl;

    if (!cin ||
        !std::isfinite(h_inches) ||
        !std::isfinite(d_feet) ||
        !std::isfinite(d_inches) ||
        !std::isfinite(angle)){
            cout << "Aborting program as invalid value entered by user..." << endl;
            return 1;
        }

    const auto height_of_tree = h_inches + (d_feet*12 + d_inches)*tan((angle * M_PI/180));

    cout << std::setw(35) << std::setfill('-') << "Height of tree: " << height_of_tree 
         << std::setw(20) << "" << endl;

    return 0;
}