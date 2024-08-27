#include "include/list.h"

void List::print_menu() {
    int choice;
    cin.clear();
    cout << "\n\n\n******* " << name << " *******\n";
    cout << "1 - Print List.\n";
    cout << "2 - Add to List.\n";
    cout << "3 - Delete from List.\n";
    cout << "4 - Quit.\n";
    cout << "Enter your choice and press return/enter.\n";

    cin >> choice;

    if (choice == 4) {
        exit(0);
    }
    else if(choice == 3){
        delete_item();
    }
        else if(choice == 2){
        add_item();
    }
        else if(choice == 1){
        print_list();
    }
    else {
        cout << "Sorry choice hasn't been implemented\n";
    }
}

void List::add_item() {

    cout << "\n\n\n\n\n\n";
    cout << "******************";
    cout << "Type in an item and press enter: ";

    string item;
    // cin >> item;
    // cin.clear();
    // 
    std::cin.ignore();
    std::getline(std::cin, item);   // needs this to accept spaces
    list.push_back(item);
    cout << "Successlully added item to the list\n\n\n";
    cin.clear();

    print_menu();

}

void List::delete_item() {

    cout << "**** Delete an Item ****\n";
    cout << "Select an item index number to delete";
    if (list.size()) {
        cout << " In delete_item funcion\n";
        for (unsigned i = 0; i < list.size(); i++) {
            cout << i << ". " << list[i] << "\n";
        }

        }
        else {
            cout << "< ** No items in the list **>";
        }
        print_menu();
    }

void List::print_list() {
    cout << "\n\n\n\n\n\n\n\n";
    cout << "****** Printing List ******\n";
    for (unsigned list_index = 0; list_index < list.size(); list_index++) {
            cout << "*" << list[list_index] << "\n";
    }

    cout << "enter M - menu \n";
    char choice = 'q';
    cin >> choice;
    if (choice == 'M' || choice == 'm') {
        print_menu();
    }
    else{
        cout << "Invalid choice. Quitting.. \n ";
        exit(0);
    }
}

// last 1:16:48