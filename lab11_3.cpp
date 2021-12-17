#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>
using namespace std;

int main()
{
    ifstream source;
    source.open("score.txt");
    string score;
    double n,sum=0,s;
    
    while(getline(source,score))
    {
        sum += atof(score.c_str());
        n++;
        s += pow(atof(score.c_str()),2);
    }
    
    cout << "Number of data = " << n << "\n";;
    cout << setprecision(3);
    cout << "Mean = "<< sum/n << "\n";
    cout << "Standard deviation = " << sqrt(((1/n)*s)-pow((sum/n),2));
}

