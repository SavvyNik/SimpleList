#include <iostream> 
#include <vector>

void print_menu();
void print_list();
void add_input();
void delete_item();

std::vector<std::string> list;
std::string name;

int main(int arg_count, char *args[]) 
{
    if( arg_count > 1 )
    {
        name = std::string(args[1]); 
        print_menu();
    } 
    else 
    {
        std::cout << "Username not supplied...exiting" << std::endl;
        exit(1); 
    }
    
    return 0;
}

void print_menu()
{
    int choice;
    std::cout << "Hello " << name << std::endl;
    std::cout << "*******************************\n"; 
    std::cout << " 1 - Print list.\n";
    std::cout << " 2 - Add to list.\n";
    std::cout << " 3 - Delete from list.\n";
    std::cout << " 4 - Quit \n";
    std::cout << " Enter your choice and press return: ";
    
    std::cin >> choice;

    if( choice == 4  ) 
    {
        exit(0);
    } 
    else if( choice == 2 )
    {
        add_input();
    }
    else if( choice == 3 )
    {
        delete_item();
    }
    else if( choice == 1 )
    {
        print_list();
    }
    else
    {
        std:: cout << "Sorry not implemented yet \n";
    }
}

void print_list()
{
    std::cout << "\n\n\n\n\n\n\n\n";// move the screen down a bit
    std::cout << "*********Simple List**********\n";

    for( int list_index = 0; list_index < list.size(); list_index++ ) 
    {
        std::cout << " * " << list[list_index] << std::endl;
    }

    std::cout << "M - Menu \n";

    // this time we are accepting a character from our keyboard input and show the main menu if they press M
    // Or quit if they type Q
    char choice;
    std::cin >> choice;
    if( choice == 'M' || choice == 'm' )
    {
        print_menu();
    }
    else
    {
        std::cout << "Invalid choice quitting \n";
    }
    
}

void add_input()
{
    std::cout << "\n\n\n\n\n\n\n\n";// move the screen down a bit
    std::cout << "*********Add Item**********\n";
    std::cout << "Type in the item and press enter: ";

    std::string item;
    std::cin >> item;

    list.push_back(item);

    std::cout << "Successfully added item to the list \n\n\n\n\n\n\n";
    std::cin.clear();
    print_menu();
}

void delete_item()
{
    std::cout << "**********Delete Item*********\n";

    std::cout << "Select item index to delete \n";
    if( list.size() ) {
        for( int i = 0; i < list.size(); i++ )
        {
            std::cout << i << ": " << list[i] << std::endl;
        }
        int index;
        std::cin >> index;
        std::cin.clear();

        list.erase (list.begin()+index);

    }
    else 
    {
        std::cout << "No items to delete \n";
    }

    print_menu();
    
}