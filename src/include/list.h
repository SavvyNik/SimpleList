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
    int currentUserIndex;

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    bool find_userList();
    void save_list();
};