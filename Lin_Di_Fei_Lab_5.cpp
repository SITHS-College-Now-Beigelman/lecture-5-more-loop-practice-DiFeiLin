/*Di Fei Lin
10/7/24
Lab 5 */
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    string typeTransaction; // identifies the variables 
    double transactionMoney;
    double moneyTotal;
    int amountTransaction;
    double credit = 0;//credit amount starts at 0
    double debit = 0;//debit amount startsat 0

    cout<<"How much money did you have at the beginning of the day?"; // askes for total money 
    cin>>moneyTotal;

    cout<<"How many transactions:";//askes for the total transactions 
    cin>>amountTransaction;

    while (amountTransaction>0){ // it ends when the numbers of transactions hits 0

    cout<<"What is the type of transaction (debit or credit):"; // type of transaction 
    cin>>typeTransaction;

    cout<<"Amount of said transaction:";//amount of transaction 
    cin>>transactionMoney;

    if (typeTransaction == "debit"){ // if debit subtraction 
        cout<<fixed<<showpoint;
        cout<<setprecision(2);
        cout<<"New Account balance: $" <<moneyTotal-transactionMoney<<endl;
        moneyTotal = moneyTotal-transactionMoney;
        amountTransaction = amountTransaction - 1;//deducts one from the amount of transactions left 
        debit = debit + transactionMoney;// totals the debit deduction amount 
    }

    else {
        cout<<fixed<<showpoint;
        cout<<setprecision(2);
        cout<<"New Account balance: $" <<moneyTotal+transactionMoney<<endl;// if credit addition 
        moneyTotal = moneyTotal+transactionMoney;//adds to the amount money left 
        amountTransaction = amountTransaction - 1;//deducts one from te amount fo transactions left 
        credit = credit+transactionMoney;//totals the debit deduction amount 
    }

    }

    cout<<"Total credit addition: $"<<credit<<endl;//prints total credit amount 
    cout<<"Total debit deduction: $"<<debit<<endl;//prints total debit deductions 

    return 0;

}
/*How much money did you have at the beginning of the day?12000
How many transactions:3
What is the type of transaction (debit or credit):debit
Amount of said transaction:1200 
New Account balance: $10800.00
What is the type of transaction (debit or credit):debit
Amount of said transaction:1200 
New Account balance: $9600.00
What is the type of transaction (debit or credit):debit
Amount of said transaction:4000
New Account balance: $5600.00
Total credit addition: $0.00
Total debit deduction: $6400.00*/