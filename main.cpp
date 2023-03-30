/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

    int ludnosc = 48136;
    double powierzchnia = 25.28;
    string szerokosc = "53°57′50″N";
    string dlugosc = "18°31′34″E";
    
void wybor();

void lud(){
    cout<<"W starogardzie mieszka "<<ludnosc<<" osob"<<endl;
    wybor();
}

void powi(){
    cout<<"Starogard ma "<<powierzchnia<<" m^2"<<endl;
    wybor();
}

void wspol(){
    cout<<"Starogard lezy na: "<<szerokosc<<endl;
    cout<<dlugosc<<endl;
    wybor();
}

void wybor(){
    int w;
    cout<<"Co chcesz wiedziec o stg: "<<endl;
    cout<<"[0] - ludnosc"<<endl;
    cout<<"[1] - powierzchnia"<<endl;
    cout<<"[2] - wspolrzedne"<<endl;
    cout<<"[3] - zakoncz"<<endl;
    cin>>w;
    
    switch(w){
        case 0:
        lud();
        break;
        case 1:
        powi();
        break;
        case 2:
        wspol();
        break;
        case 3:
        break;
        default:
        wybor();
        break;
    }
}

int main()
{
    wybor();
    return 0;
}
