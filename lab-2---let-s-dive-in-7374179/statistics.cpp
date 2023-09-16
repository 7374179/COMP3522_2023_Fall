//
// Created by user on 9/12/2023.
//

#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include "statistics.hpp"

const int RANDOM_VALUE = 1024;

using namespace std;

void statistics()
{
    int count=0;
    double num1;
    double num2[RANDOM_VALUE];
    double sum=0;
    fstream fs("../Readings.txt");
    if(!fs.is_open())
    {
        cerr << "Unable to open file" << endl;
        exit(1);
    }

    while (fs >> num1 >> num2[count])
    {
        count++;
    }
    sort(num2, num2+count);
    double min = num2[0];
    double max = num2[count-1];
    double mean;
    if(count%2==0)
    {
        mean = (num2[count/2-1]+num2[count/2])/2;
    } else
    {
        mean = num2[count/2];
    }

    for(int i=0;i<count;i++)
    {
        sum+=num2[i];
    }
    double avg = sum/count;

    cout << "There are " << count << " readings in the file. The average reading is "<< setprecision(3) << fixed << avg <<"." << endl;
    cout << "The highest reading is " << max << endl;
    cout << "the lowest reading is " << min << endl;
    cout << "the median reading is " << mean << endl;
    fs.close();
}