#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream infile; //infile is object it can be named anything
    infile.open("my.txt");
    //open method is used for reading data from file

    //ios::in and ios::out if we want to mention mode.
    // to read the file it must be existing
    
    // to check whether file is open
    if(!infile){
        cout<<"cannot be opened."<<endl; 
    }
    //other method to check file is opened or not
    //infile.is_open() return true

    // to read 
    string str;
    int x;
    infile>>str;
    infile>>x;

    cout<<str<<" "<<x<<endl;

    //to check eof reached
    if(infile.eof()){
        cout<<"End of file reached."<<endl;
    }
    infile.close();
}