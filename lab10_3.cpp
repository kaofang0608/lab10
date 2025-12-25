#include<iostream>
#include<fstream>
#include <iomanip>
#include<string>
#include<cmath>
using namespace std;

int main(){

    int count = 0;
    double sum = 0,sum_of_square=0,x=0,sd;
    

    string score;
    ifstream source("score.txt");

    while(getline(source,score)){
        x = atof(score.c_str());
        sum += x;
        sum_of_square += x*x;
        count++;
    }
    
    sd = sqrt((sum_of_square/count)-pow(sum/count,2));

    cout<<"Number of data = "<<count<<"\n";
    cout << setprecision(3);
    cout<<"Mean = "<<sum/count<<"\n";
    cout << "Standard deviation = "<< sd;
}