#include <string>
#include <vector>
#include "Table.h"

class db_engine {
	
public: 
	db_engine();
	vector<Table*> open_tables;
	Table *current = NULL;
	
	Table* find_table_by_name(string);
	Table eval(Table,string,string,string);
	bool compatible(Table*,Table*);
	bool compatible(Table*,vector<string>);
	bool set_compatible(Table*,Table*);
	template <class T>
	bool eval_helper(T, T, std::string);
	
	//Commands
	void open_cmd(string fl);
	void close_cmd(Table);
	void write_cmd(Table);
	void exit_cmd();
	void show_cmd(Table*);
	void create_cmd(string, vector<string>, vector<string>, vector<string>);
	void update_cmd(Table*, vector<string>, vector<string>, Table);
	void insert_cmd(Table*, vector<string>);
	void insert_cmd(Table, Table);
	void delete_cmd(Table*, Table*);
	void close_name(string n);

	//Queries
	Table selection(Table*, Table*);
	Table projection(vector<string>, Table*);
	Table renaming(vector<string>, Table*);
	Table set_union(Table*, Table*);
	Table set_difference(Table*, Table*);
	Table cross_product(Table*, Table*);
	Table natural_join(Table*, Table*);
};