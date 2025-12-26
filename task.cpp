#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

int main(){
    int erste_nummer;
    int zweite_nummer;

    cout << "This program identifies the larger integer and the smaller integer from the user input" << endl;
    cout << "Please enter a positive integer: "; cin >> erste_nummer;
    cout << "Please enter another positive integer: "; cin >> zweite_nummer;
    
    if (!cin ||
//    !std::isfinite(erste_nummer) || skipping this because isfinite() works for float types
//    !std::isfinite(zweite_nummer) ||
    erste_nummer <=0 ||
    zweite_nummer <=0
    )
    {
    cout << "Invalid input detected, Aborting......." << endl;
    return 1;
    }

    cout << "Greater integer is: " << std::max(erste_nummer, zweite_nummer) << endl;
    cout << "Smaller integer is: " << std::min(erste_nummer, zweite_nummer) << endl;

    return 0;
}

/*This is the safest way to parse input as suggested by AI:
bool read_positive_int(int& value) {
    std::string line;
    if (!std::getline(std::cin, line))
        return false; // EOF or stream error

    std::stringstream ss(line);
    int temp;
    char extra;

    if (!(ss >> temp) || (ss >> extra) || temp <= 0)
        return false;

    value = temp;
    return true;
}
int x;
std::cout << "Enter a positive integer: ";

if (!read_positive_int(x)) {
    std::cout << "Invalid input\n";
}
*/