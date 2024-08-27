#include <iostream>
#include <vector>
using namespace std;

class List
{
    private:
        // Only the class itself
    protected:
        // Inherits or belongs to class
    public:
        // Anything
        // Constructor
        List(){

        }

        // Destructor
        ~List(){

        }

        vector <string> list;
        string name;

        void print_menu();
        void print_list();
        void add_item();
        void delete_item();
};
