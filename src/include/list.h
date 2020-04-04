#include <iostream>
#include <vector>
using namespace std;

class List {
    private: 
    protected:
    public:
    List(){  
        //constructor
    }
    ~List(){
        //destructor
    }
    vector<vector<string>> mainList;
    vector<string> list;
    string name;

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    void find_userList();
};