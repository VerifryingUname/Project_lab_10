#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	dest << "-------------------- BOOM ---------------------" << endl;
	string rowline;
	while (getline(source, rowline)){
	    dest << rowline << endl;
	}
	dest << "-------------------- HA!! ---------------------";
    source.close();
    dest.close();
	return 0;
}
