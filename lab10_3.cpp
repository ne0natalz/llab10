#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int count = 0;
    double mean, sd;
    double sum = 0;
    double sum_of_square = 0.0;
    string textline;
    ifstream source("score.txt");
    while (getline(source, textline)) {
        sum += atof(textline.c_str());
        sum_of_square += pow(atof(textline.c_str()), 2);
        count++;  
    }
    
    source.close();  
    
    mean = sum / count;
    sd = sqrt((sum_of_square / count) - pow((sum / count), 2));
    
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3) ;  
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sd;

    return 0;  
}