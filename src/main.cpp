#include "include/list.h"

int main(int arg_count, char *args[])
{

if(arg_count > 1) {
    List simplelist;
    simplelist.name = args[1];
    simplelist.print_menu();

}
else {
    cout << "Username not supplied, exiting the program" << endl;
}
    return 0;
}

// last 1:36:48