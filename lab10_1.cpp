#include<iostream>
using namespace std;

int main(){
	int count[5] = {0, 0, 0, 0, 0}; 
	char grade;
	int Scount = 0;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << Scount + 1 << "]: ";
		cin >> grade; 
		
		if(grade == '0') {
		    break;
		}
		
		if(grade == 'A'){
		    count[0]++;
		    Scount++;
		}else if(grade == 'B'){
		    count[1]++;
		    Scount++;
		}else if(grade == 'C'){
		    count[2]++;
		    Scount++;
		}else if(grade == 'D'){
		    count[3]++;
		    Scount++;
		}else if(grade == 'F'){
		    count[4]++;
		    Scount++;
		}else{
		    cout << "Wrong input. Please input again." << endl;
		}
	}while(true);
	cout << "In total " << Scount << " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] << endl;
	
	
	return 0;
}