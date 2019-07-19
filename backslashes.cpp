#include <iostream>

using namespace std;

int main()
{
    int totalStudents, numberOfSlices;
    numberOfSlices = 10, totalStudents = 20;

    cout << "I have " << numberOfSlices << " of pizza" << endl;
    cout << "/\\^^/\\" << endl;
    cout << "Backslash and double quotes equal \"2\" / \"1\" is " << 2 / 1 << " in C++." << endl;
    // cout << "I have  " slices of Pizza and / 20 \" students " << endl;
    cout << "Each student should recieve " << totalStudents / numberOfSlices << "slices of pizza" << endl;
    return 0;
}