/**
 *   @file: Hw1.cc
 * @author: Hunter Stout
 *   @date: 9/12/2021
 *  @brief: Mini Monitor Shop :D
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {

    //Declare variables.
    int ohio;
    int quantity;
    double samsung;
    double viewsonic;
    double discount;
    double tax;
    double taxtotal;
    const char monitor1 = 's';
    const char monitor2 = 'v';
    char monitor;

    //Main interface.
    cout << "*-----------------------------------------------------------*" << endl;
    cout << "*           Welcome to Hunter's Monitor Shop :D             *" << endl;
    cout << "*  We have two choices, Samsung ($190) or ViewSonic ($170)  *" << endl;
    cout << "*-----------------------------------------------------------*" << endl;
    cout << "*    Please Type either 's' or 'v' to make your desicion    *" << endl;
    cout << "*         *---* Samsung (s) | ViewSonic (v) *---*           *" << endl;
    cout << "*-----------------------------------------------------------*" << endl;
    cin >> monitor;

    //Main backbone, Samsung half.
    if (monitor == monitor1) {
     cout << "*------------------------------------------------------*" << endl;
     cout << "*      You have choose the Samsung Monitor ($190)      *" << endl;
     cout << "*   (Note: 5% discount when purchasing 3+ monitors)    *" << endl;
     cout << "* Please enter the quantity you would like to purchase *" << endl;
     cout << "*------------------------------------------------------*" << endl;
     cin >> samsung;

        //Secondary backbone for 3 or more Samsung monitors.
        if (samsung >= 3) {
            cout << "*-------------------------------------------------*" << endl;
            cout << "*           Are you a resident of Ohio?           *" << endl;
            cout << "* Please Type either 1 or 2 to make your desicion *" << endl;
            cout << "*          *---* Yes (1) | No (2) *---*           *" << endl;
            cout << "*-------------------------------------------------*" << endl;
            cin >> ohio;

            //Output for 3 or more monitors & ohio residency.
            if (ohio == 1) {

                //Calculations, 1. Quantity, 2. Discount, 3. Subtotal, 4. Tax, 5. Total after tax.
                quantity = samsung;
                discount = samsung * 9.5;
                samsung = samsung * 180.5;
                tax = samsung * 0.07;
                taxtotal = samsung + tax;

                //Recipt.
                cout << fixed << setprecision(2);
                cout << "*-------------------------------------------------*" << endl;
                cout << "*          Thank you for your purchase!           *" << endl;
                cout << "* Monitor brand: Samsung                          *" << endl;
                cout << "* Quantity: " << quantity << "                                     *" << endl;
                cout << "* Ohio Resident: Yes                              *" << endl;
                cout << "* Total price: $" << samsung << "                            *" << endl;
                cout << "*-------------------------------------------------*" << endl;
                cout << "* Discount: $" << discount << "                                *" << endl;
                cout << "* Subtotal: $" << taxtotal << "                               *" << endl;
                cout << "* Tax: $" << tax << "                                     *" << endl;
                cout << "*-------------------------------------------------*" << endl;
            }
            //Output for 3 or more monitors & no ohio residency.
            else if (ohio == 2) {

                //Calculations, 1. Quantity, 2. Discount, 3. Subtotal, 4. Tax, 5. Total after tax.
                quantity = samsung;
                discount = samsung * 9.5;
                samsung = samsung * 180.5;
                tax = 0;
                taxtotal = samsung + tax;

                //Recipt.
                cout << "*-------------------------------------------------*" << endl;
                cout << "*          Thank you for your purchase!           *" << endl;
                cout << "* Monitor brand: Samsung                          *" << endl;
                cout << "* Quantity: " << quantity << "                                     *" << endl;
                cout << "* Ohio Resident: No                               *" << endl;
                cout << "* Total price: $" << samsung << "                            *" << endl;
                cout << "*-------------------------------------------------*" << endl;
                cout << "* Discount: $" << discount << "                                *" << endl;
                cout << "* Subtotal: $" << taxtotal << "                               *" << endl;
                cout << "* Tax: $0 - Not an Ohio resident.                 *" << endl;
                cout << "*-------------------------------------------------*" << endl;
            }
            //Output for 3 or more monitors & incorrect input.
            else {

                //Calculations, 1. Quantity, 2. Discount, 3. Subtotal, 4. Tax, 5. Total after tax.
                quantity = samsung;
                discount = samsung * 9.5;
                samsung = samsung * 180.5;
                tax = 0;
                taxtotal = samsung + tax;

                //Recipt.
                cout << "*-------------------------------------------------*" << endl;
                cout << "*          Thank you for your purchase!           *" << endl;
                cout << "* Monitor brand: Samsung                          *" << endl;
                cout << "* Quantity: " << quantity << "                                     *" << endl;
                cout << "* Ohio Resident: No, we assume.                   *" << endl;
                cout << "* Total price: $" << samsung << "                            *" << endl;
                cout << "*-------------------------------------------------*" << endl;
                cout << "* Discount: $" << discount << "                                *" << endl;
                cout << "* Subtotal: $" << taxtotal << "                               *" << endl;
                cout << "* Tax: $0 Error, We assume user is not from ohio. *" << endl;
                cout << "*-------------------------------------------------*" << endl;
            }

        }
        //Secondary backbone for 1-2 Samsung monitors.
        else if (samsung == 1 || samsung == 2) {
            cout << "*-------------------------------------------------*" << endl;
            cout << "*           Are you a resident of Ohio?           *" << endl;
            cout << "* Please Type either 1 or 2 to make your desicion *" << endl;
            cout << "*          *---* Yes (1) | No (2) *---*           *" << endl;
            cout << "*-------------------------------------------------*" << endl;
            cin >> ohio;

            //Output for 1-2 monitors & ohio residency.
            if (ohio == 1) {

                //Calculations, 1. Quantity, 2. Discount, 3. Subtotal, 4. Tax, 5. Total after tax.
                quantity = samsung;
                discount = 0;
                samsung = samsung * 190;
                tax = samsung * 0.07;
                taxtotal = samsung + tax;

                //Recipt.
                cout << fixed << setprecision(2);
                cout << "*-------------------------------------------------*" << endl;
                cout << "*          Thank you for your purchase!           *" << endl;
                cout << "* Monitor brand: Samsung                          *" << endl;
                cout << "* Quantity: " << quantity << "                                     *" << endl;
                cout << "* Ohio Resident: Yes                              *" << endl;
                cout << "* Total price: $" << samsung << "                            *" << endl;
                cout << "*-------------------------------------------------*" << endl;
                cout << "* Discount: $" << discount << "                                 *" << endl;
                cout << "* Subtotal: $" << taxtotal << "                               *" << endl;
                cout << "* Tax: $" << tax << "                                     *" << endl;
                cout << "*-------------------------------------------------*" << endl;
            }
            //Output for 1-2 monitors & no ohio residency.
            else if (ohio == 2) {

                //Calculations, 1. Quantity, 2. Discount, 3. Subtotal, 4. Tax, 5. Total after tax.
                quantity = samsung;
                discount = 0;
                samsung = samsung * 190;
                tax = 0;
                taxtotal = samsung + tax;

                //Recipt.
                cout << "*-------------------------------------------------*" << endl;
                cout << "*          Thank you for your purchase!           *" << endl;
                cout << "* Monitor brand: Samsung                          *" << endl;
                cout << "* Quantity: " << quantity << "                                     *" << endl;
                cout << "* Ohio Resident: No                               *" << endl;
                cout << "* Total price: $" << samsung << "                            *" << endl;
                cout << "*-------------------------------------------------*" << endl;
                cout << "* Discount: $" << discount << "                                 *" << endl;
                cout << "* Subtotal: $" << taxtotal << "                               *" << endl;
                cout << "* Tax: $0 - Not an Ohio resident.                 *" << endl;
                cout << "*-------------------------------------------------*" << endl;
            }
            //Output for 1-2 monitors & incorrect input.
            else {

                //Calculations, 1. Quantity, 2. Discount, 3. Subtotal, 4. Tax, 5. Total after tax.
                quantity = samsung;
                discount = 0;
                samsung = samsung * 190;
                tax = 0;
                taxtotal = samsung + tax;

                //Recipt.
                cout << "*-------------------------------------------------*" << endl;
                cout << "*          Thank you for your purchase!           *" << endl;
                cout << "* Monitor brand: Samsung                          *" << endl;
                cout << "* Quantity: " << quantity << "                                     *" << endl;
                cout << "* Ohio Resident: No, we assume.                   *" << endl;
                cout << "* Total price: $" << samsung << "                            *" << endl;
                cout << "*-------------------------------------------------*" << endl;
                cout << "* Discount: $" << discount << "                                 *" << endl;
                cout << "* Subtotal: $" << taxtotal << "                               *" << endl;
                cout << "* Tax: $0 Error, We assume user is not from ohio. *" << endl;
                cout << "*-------------------------------------------------*" << endl;
            }
        
        }
        //Secondary backbone, Error message for negative number input for quantity.
        else {
            cout << "*-------------------------------------------------*" << endl;
            cout << "*      Error: Please choose a number above 0!     *" << endl;
            cout << "*-------------------------------------------------*" << endl;
        
        }

    }

    else if (monitor == monitor2) {

    //Main backbone, ViewSonic half.
     cout << "*------------------------------------------------------*" << endl;
     cout << "*      You have choose the ViewSonic Monitor ($170)    *" << endl;
     cout << "*   (Note: 5% discount when purchasing 3+ monitors)    *" << endl;
     cout << "* Please enter the quantity you would like to purchase *" << endl;
     cout << "*------------------------------------------------------*" << endl;
     cin >> viewsonic;

        //Secondary backbone for 3 or more ViewSonic monitors.
        if (viewsonic >= 3) {
            cout << "*-------------------------------------------------*" << endl;
            cout << "*           Are you a resident of Ohio?           *" << endl;
            cout << "* Please Type either 1 or 2 to make your desicion *" << endl;
            cout << "*          *---* Yes (1) | No (2) *---*           *" << endl;
            cout << "*-------------------------------------------------*" << endl;
            cin >> ohio;

            //Output for 3+ monitors & ohio residency.
            if (ohio == 1) {

                //Calculations, 1. Quantity, 2. Discount, 3. Subtotal, 4. Tax, 5. Total after tax.
                quantity = viewsonic;
                discount = viewsonic * 8.5;
                viewsonic = viewsonic * 161.5;
                tax = viewsonic * 0.07;
                taxtotal = viewsonic + tax;

                //Recipt
                cout << fixed << setprecision(2);
                cout << "*-------------------------------------------------*" << endl;
                cout << "*          Thank you for your purchase!           *" << endl;
                cout << "* Monitor brand: ViewSonic                        *" << endl;
                cout << "* Quantity: " << quantity << "                                     *" << endl;
                cout << "* Ohio Resident: Yes                              *" << endl;
                cout << "* Total price: $" << viewsonic << "                            *" << endl;
                cout << "*-------------------------------------------------*" << endl;
                cout << "* Discount: $" << discount << "                                *" << endl;
                cout << "* Subtotal: $" << taxtotal << "                               *" << endl;
                cout << "* Tax: $" << tax << "                                     *" << endl;
                cout << "*-------------------------------------------------*" << endl;
            }
            //Output for 3+ monitors & no ohio residency.
            else if (ohio == 2) {

                //Calculations, 1. Quantity, 2. Discount, 3. Subtotal, 4. Tax, 5. Total after tax.
                quantity = viewsonic;
                discount = viewsonic * 8.5;
                viewsonic = viewsonic * 161.5;
                tax = 0;
                taxtotal = viewsonic + tax;

                //Recipt
                cout << "*-------------------------------------------------*" << endl;
                cout << "*          Thank you for your purchase!           *" << endl;
                cout << "* Monitor brand: ViewSonic                        *" << endl;
                cout << "* Quantity: " << quantity << "                                     *" << endl;
                cout << "* Ohio Resident: No                               *" << endl;
                cout << "* Total price: $" << viewsonic << "                            *" << endl;
                cout << "*-------------------------------------------------*" << endl;
                cout << "* Discount: $" << discount << "                                *" << endl;
                cout << "* Subtotal: $" << taxtotal << "                               *" << endl;
                cout << "* Tax: $0 - Not an Ohio resident.                 *" << endl;
                cout << "*-------------------------------------------------*" << endl;
            }
            //Output for 3+ monitors & incorrect input.
            else {

                //Calculations, 1. Quantity, 2. Discount, 3. Subtotal, 4. Tax, 5. Total after tax.
                quantity = viewsonic;
                discount = viewsonic * 8.5;
                viewsonic = viewsonic * 161.5;
                tax = 0;
                taxtotal = viewsonic + tax;

                //Recipt.
                cout << "*-------------------------------------------------*" << endl;
                cout << "*          Thank you for your purchase!           *" << endl;
                cout << "* Monitor brand: ViewSonic                        *" << endl;
                cout << "* Quantity: " << quantity << "                                     *" << endl;
                cout << "* Ohio Resident: No, we assume.                   *" << endl;
                cout << "* Total price: $" << viewsonic << "                            *" << endl;
                cout << "*-------------------------------------------------*" << endl;
                cout << "* Discount: $" << discount << "                                *" << endl;
                cout << "* Subtotal: $" << taxtotal << "                               *" << endl;
                cout << "* Tax: $0 Error, We assume user is not from ohio. *" << endl;
                cout << "*-------------------------------------------------*" << endl;
            }

        }
        //Secondary backbone for 1-2 ViewSonic monitors.
        else if (viewsonic == 1 || viewsonic == 2) {
            cout << "*-------------------------------------------------*" << endl;
            cout << "*           Are you a resident of Ohio?           *" << endl;
            cout << "* Please Type either 1 or 2 to make your desicion *" << endl;
            cout << "*          *---* Yes (1) | No (2) *---*           *" << endl;
            cout << "*-------------------------------------------------*" << endl;
            cin >> ohio;

            //Output for 1-2 monitors & ohio residency.
            if (ohio == 1) {

                //Calculations, 1. Quantity, 2. Discount, 3. Subtotal, 4. Tax, 5. Total after tax.
                quantity = viewsonic;
                discount = 0;
                viewsonic = viewsonic * 170;
                tax = viewsonic * 0.07;
                taxtotal = viewsonic + tax;

                //Recipt.
                cout << fixed << setprecision(2);
                cout << "*-------------------------------------------------*" << endl;
                cout << "*          Thank you for your purchase!           *" << endl;
                cout << "* Monitor brand: ViewSonic                        *" << endl;
                cout << "* Quantity: " << quantity << "                                     *" << endl;
                cout << "* Ohio Resident: Yes                              *" << endl;
                cout << "* Total price: $" << viewsonic << "                            *" << endl;
                cout << "*-------------------------------------------------*" << endl;
                cout << "* Discount: $" << discount << "                                 *" << endl;
                cout << "* Subtotal: $" << taxtotal << "                               *" << endl;
                cout << "* Tax: $" << tax << "                                     *" << endl;
                cout << "*-------------------------------------------------*" << endl;
            }
            //Output for 1-2 monitors & no ohio residency.
            else if (ohio == 2) {

                //Calculations, 1. Quantity, 2. Discount, 3. Subtotal, 4. Tax, 5. Total after tax.
                quantity = viewsonic;
                discount = 0;
                viewsonic = viewsonic * 170;
                tax = 0;
                taxtotal = viewsonic + tax;

                //Recipt.
                cout << "*-------------------------------------------------*" << endl;
                cout << "*          Thank you for your purchase!           *" << endl;
                cout << "* Monitor brand: ViewSonic                          *" << endl;
                cout << "* Quantity: " << quantity << "                                     *" << endl;
                cout << "* Ohio Resident: No                               *" << endl;
                cout << "* Total price: $" << viewsonic << "                            *" << endl;
                cout << "*-------------------------------------------------*" << endl;
                cout << "* Discount: $" << discount << "                                 *" << endl;
                cout << "* Subtotal: $" << taxtotal << "                               *" << endl;
                cout << "* Tax: $0 - Not an Ohio resident.                 *" << endl;
                cout << "*-------------------------------------------------*" << endl;
            }
            //Output for 1-2 monitors & incorrect input.
            else {

                //Calculations, 1. Quantity, 2. Discount, 3. Subtotal, 4. Tax, 5. Total after tax.
                quantity = viewsonic;
                discount = 0;
                viewsonic = viewsonic * 170;
                tax = 0;
                taxtotal = viewsonic + tax;

                //Recipt.
                cout << "*-------------------------------------------------*" << endl;
                cout << "*          Thank you for your purchase!           *" << endl;
                cout << "* Monitor brand: ViewSonic                        *" << endl;
                cout << "* Quantity: " << quantity << "                                     *" << endl;
                cout << "* Ohio Resident: No, we assume.                   *" << endl;
                cout << "* Total price: $" << viewsonic << "                            *" << endl;
                cout << "*-------------------------------------------------*" << endl;
                cout << "* Discount: $" << discount << "                                 *" << endl;
                cout << "* Subtotal: $" << taxtotal << "                               *" << endl;
                cout << "* Tax: $0 Error, We assume user is not from ohio. *" << endl;
                cout << "*-------------------------------------------------*" << endl;
            }
        
        }
        //Secondary backbone, output for negative quantity error.
        else {
            cout << "*-------------------------------------------------*" << endl;
            cout << "*      Error: Please choose a number above 0!     *" << endl;
            cout << "*-------------------------------------------------*" << endl;
        
        }
    }

    //Main backbone, output for error not using 's' or 'v'
    else {
        cout << "*--------------------------------------------------------*" << endl;
        cout << "* Error: Must pick 's' for Samsung, or 'v' for ViewSonic *" << endl;
        cout << "*               Please try again, goodbye!               *" << endl;
        cout << "*--------------------------------------------------------*" << endl;
    }

    return 0;
}