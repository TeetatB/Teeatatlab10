#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    ifstream s;
    int count = 0;
    double sum1 = 0;
    double sum2 = 0;
    s.open("score.txt");
    string textline;
    while(getline(s, textline)){
        sum1 += atof(textline.c_str());
        sum2 += pow(atof(textline.c_str()),2);
    count++;
    }
    double mean = sum1/count;
    double SD = sqrt((sum2/count)-pow(mean,2));
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << SD;
}