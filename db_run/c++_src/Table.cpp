#include "Table.h"
#include <iomanip>

using namespace std;

Table::Table() {
	name = "";
	veiw = false;
}

Table::Table(string n, vector<string> a, vector<string> t, vector<string> k) {
	name = n;				//Database file name.
	attributes = a;		//Top row stating what each column is.
	types = t;			//Type each column is. ex: int, string, varchar(10).
	keys = k;				//Type we are sorting it by. Key can be multiple attributes.
	data;				//Actual info in each row.
	veiw = false;
}

//returns index where input row is found in the current table
int Table::find(vector<string> s) {
	if(data.size() <= 0 || data[0].size() != s.size()){
		return -1;
	}else{	
		for (int i=0; i<data.size(); ++i){ 
			for (int j=0; j<data[i].size(); ++j) {
				if (data[i][j] != s[j])
					j=data[i].size(); //stop looking here
				if(j == data[i].size() - 1){ //if we reached the end of a line that is equal	
					return i;
				}
			}	
		}	
	}
	return -1;	//if we never find it return -1
}

/*
Name: [Name]
Primary Key: [Primary Key]
TYPES
ATTRIBUTE NAMES
DATA
*/
void Table::print() {
	if(name != "") 
		cout << "Name: " << name << endl;
	if(keys.size() > 0) {
		cout << "Primary Key: (";
		for (int i=0; i<keys.size(); ++i) {
			cout << keys[i];
			if (i<keys.size()-1)		
				cout << ",";
		}
		cout << ")\n";
	}
	for (string s : types)		
		cout << left << setw(15) << s;
	cout << endl;
	for (string s : attributes)		
		cout << left << setw(15) << s;
	cout << endl;
	for (vector<string> v : data) {
		for (string s : v)
			cout << left << setw(15) << s;
		cout << endl;
	}
}


//Saves this table to file.
void Table::save() {
	if(veiw){
		cerr << "Cannot save a veiw!" << endl;
	}else{
		ofstream write(name + ".db", ios::out | ios::trunc);
		for(int i = 0; i < attributes.size(); ++i){
			write << attributes[i] << ",";
		}
		write << "\n";
		for(int i=0; i< types.size(); ++i){
			write << types[i] << ",";
		}
		write << "\n";
		for(int i = 0; i < keys.size(); ++i){
			write << keys.at(i) << ",";
		}
		write << "\n";
		for(int i=0; i < data.size(); ++i){
			for(int j = 0; j < data[i].size(); ++j){
				write << data.at(i).at(j) << ",";
			}
			write << "\n";
		}
	     write.close();
	}
}
