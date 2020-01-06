#include <iostream> 
using namespace std;

void print_menu(std::string name);

int main(int arg_count, char *args[]) 
{
    if( arg_count > 1 )
    {

        std::string name(args[1]);
        print_menu(name);
    } 
    else 
    {
        std::cout << "Username not supplied...exiting" << std::endl;
        exit(1);
    }

    

    return 0;
}

void print_menu(std::string name)
{
    int choice;

    cout << "*******************************\n"; 
    cout << " 1 - Print list.\n";
    cout << " 2 - Add to list.\n";
    cout << " 3 - Delete from list.\n";
    cout << " 4 - Quit \n";
    cout << " Enter your choice and press return: ";

    std::cin >> choice;

    if( choice == 4  ) 
    {
        exit(0);
    } 
    
    else 
    {
        std:: cout << "Sorry not implemented yet \n";
    }
}