#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

int main(){
    ifstream dat;
    dat.open("score.txt");
    int n = 0;
    string txt;
    double sum = 0,sumdev = 0,mean,dev,datsq;
    while(getline(dat,txt)){
        sum += atof(txt.c_str());
        datsq = atof(txt.c_str())*atof(txt.c_str());
        sumdev += datsq ;
        n++;
    }
    mean = sum/n;
    dev = sqrt((sumdev/n)-(mean*mean));
    cout << "Number of data = " << n << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << dev;
    dat.close();
    return 0;
}