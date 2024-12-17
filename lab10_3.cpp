#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    ifstream source("score.txt");
    double num, sum = 0, sumsq = 0;
    int n = 0;
    string text;
    while (getline(source, text)){
        num = atof(text.c_str());
        sum += num;
        sumsq += num *num;
        n++;
    }
    source.close();
    double mean = sum / n;
    double STD = sqrt((sumsq / n) - (mean * mean));
    cout << "Number of data = " << n << endl;
    cout << setprecision(3);
    cout << "Mean = " <<  mean << endl;
    cout << "Standard deviation = " << STD << endl;
    return 0;
}