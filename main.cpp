//Luis Garzon
//COP2000.0M2
//This program takes information from a text file and displays the temps above, below and equal to the average. 

#include <iostream>
#include <fstream>
using namespace std;

class Temp {
    private: 
        int list, average,
            belowAvg, aboveAvg;
    public: 
    //Constuctor 
    Temp(){
        cout << "Running Temp Program..." << endl;
    }
    //Temp function prototypes

};

//Temp program function implementation

int main(){

    const int array = 40;
    int temps[array];
    int count = 0;
    int numberOfTemps;

    Temp m;

    fstream inputfile;

    inputfile.open("NovTemps.txt");

    if(!inputfile){
        cout << "File not found" << endl;;
    } else {
        cout << "File found" << endl;
        while(!inputfile.eof()){
        inputfile >> temps[count];
        count++;
        }
        numberOfTemps = count;

        cout << "Temps" << endl;

        for(count = 0; count < numberOfTemps; count++){
            cout << " " << temps[count];
        }
    }

    return 0;
}