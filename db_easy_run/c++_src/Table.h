#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

class Table {
public:
	string name;
	vector<string> attributes;
	vector<string> types;
	vector<string> keys;
	vector<vector<string>> data;
	bool veiw;
	
	Table();
	Table(string,vector<string>,vector<string>,vector<string>);
	void print();
	void save();
	int find(vector<string>);
};