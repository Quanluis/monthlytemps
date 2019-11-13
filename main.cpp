//Luis Garzon
//COP2000.0M2
//This program takes information from a text file and displays the temps above, below and equal to the average. 

#include <iostream>
#include <fstream>
using namespace std;

class Temp {
    private: 
        int list, average,
            numberOftemps,
            belowAvg, aboveAvg,
            count;
    public: 
    //Constuctor 
    Temp(){
        cout << "Running Temp Program..." << endl;
    }
    //Temp function prototypes
    int start();
    void findAvg();
    void belowList();
};

//Temp program function implementation

void Temp::belowList(){

    int count;
    cout << "Average is " << count;

}

void Temp::findAvg(){

    int count;

    cout << "Average Temperature is: " << count << endl;

}

    int Temp::start(){

    const int array = 30;
    int temps[array];
    int count = 0;
    int numberOfTemps;
    int avg;

    fstream inputfile;

    inputfile.open("NovTemps.txt");

    if(!inputfile){
        cout << "File not found..." << endl;;
    } else {
        cout << "File found..." << endl;
        while(!inputfile.eof()){
        inputfile >> temps[count];
        count++;
        }
        numberOfTemps = count;

        cout << "Monthly Temperatures..." << endl;

         for(count = 0; count < numberOfTemps; count++){
            cout << " " << temps[count];
       }

        for(count = 0; count < numberOfTemps; count++){
            count = count + temps[count];
        }

    }
        cout << endl;

        return count;
}   

int main(){

    Temp m;

    m.start();

    m.findAvg();

    m.belowList();
    
    return 0;
}