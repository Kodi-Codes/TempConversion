#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    // Open Farenheit file 
    ifstream inputFile("FahrenheitTemperature.txt");

    // Check if file opened
    if (!inputFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    // Open Celcius file
    ofstream outputFile("CelsiusTemperature.txt");

    // Check if file opened
    if (!outputFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    string city;
    int fahrenheit;

    // Convert from Fahrenheit to Celcius
    while (inputFile >> city >> fahrenheit) {
        double celsius = (fahrenheit - 32) * 5.0 / 9.0;
        outputFile << city << " " << celsius << endl;
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    return 0;

}