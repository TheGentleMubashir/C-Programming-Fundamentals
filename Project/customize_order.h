    #include <iostream>
    #include <string>
    using namespace std;

    // Function to handle order customization
    void CustomizeOrder(string& orderedItem, double& price) {
        const string sizes[] = {"Small", "Medium", "Large"};
        const string crusts[] = {"Thin", "Thick", "Stuffed"};
        const int toppingCost = 50; // Cost per topping

        int size_choice, crust_choice, topping_choice;

        // Show customization options for sizes
        cout << "\n\033[1;33mCustomize Your Order for " << orderedItem << ":\033[0m\n";
        cout << "\n\033[1;34m---- Available Sizes ----\033[0m\n";
        for (int i = 0; i < 3; ++i) {
            cout << (i + 1) << ". " << sizes[i];
            if (i == 1) cout << " (+200 PKR)";
            else if (i == 2) cout << " (+400 PKR)";
            cout << endl;
        }
        cout << "Enter your choice: ";
        cin >> size_choice;

        if (size_choice == 1) {
            cout << "You selected " << sizes[size_choice - 1] << ".\n";
        } else if (size_choice == 2) {
            price += 200;
            cout << "You selected " << sizes[size_choice - 1] << ". Additional 200 PKR will be added.\n";
        } else if (size_choice == 3) {
            price += 400;
            cout << "You selected " << sizes[size_choice - 1] << ". Additional 400 PKR will be added.\n";
        } else {
            cout << "Invalid size choice. Defaulting to Small.\n";
        }

        // Show customization options for crust
        cout << "\n\033[1;34m---- Available Crust Types ----\033[0m\n";
        for (int i = 0; i < 3; ++i) {
            cout << (i + 1) << ". " << crusts[i];
            if (i == 1) cout << " (+100 PKR)";
            else if (i == 2) cout << " (+300 PKR)";
            cout << endl;
        }
        cout << "Enter your choice: ";
        cin >> crust_choice;

        if (crust_choice == 1) {
            cout << "You selected " << crusts[crust_choice - 1] << " crust.\n";
        } else if (crust_choice == 2) {
            price += 100;
            cout << "You selected " << crusts[crust_choice - 1] << " crust. Additional 100 PKR will be added.\n";
        } else if (crust_choice == 3) {
            price += 300;
            cout << "You selected " << crusts[crust_choice - 1] << " crust. Additional 300 PKR will be added.\n";
        } else {
            cout << "Invalid crust choice. Defaulting to Thin.\n";
        }

        // Add Toppings
        cout << "\n\033[1;34m---- Available Toppings ----\033[0m\n";
        cout << "Each topping costs 50 PKR.\n";
        cout << "Would you like to add toppings?\n";
        cout << "1. Yes\n";
        cout << "2. No\n";
        cout << "Enter your choice: ";
        cin >> topping_choice;

        if (topping_choice == 1) {
            int num_toppings;
            cout << "Enter number of toppings: ";
            cin >> num_toppings;
            price += num_toppings * toppingCost;
            cout << "You selected " << num_toppings << " toppings. Additional " << num_toppings * toppingCost << " PKR will be added.\n";
        } else {
            cout << "No toppings added.\n";
        }

        cout << "\033[1;34mCustomization Complete! New Price: " << price << " PKR\033[0m\n";
    }
