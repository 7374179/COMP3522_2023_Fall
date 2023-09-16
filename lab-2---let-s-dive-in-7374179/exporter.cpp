//
// Created by user on 9/12/2023.
//

#include <fstream>
#include <iomanip>
#include "exporter.hpp"

using namespace std;

void exporter(){
    ofstream fout{"../Readings.txt"};
    srand (time(NULL));
    int ran_num1 = rand()%514 + 511;
    for(int i=0;i<ran_num1;i++)
    {
        double ran_num2 = 50 + rand()/(double)RAND_MAX * 40;
        fout << i << " " << setprecision(3) << fixed << ran_num2 << endl;
    }
    fout.close();
}