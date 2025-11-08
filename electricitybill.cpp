
#include <iostream>
using namespace std;

class EB_Bill 
{
private:
    int cust_id, units;
    char cust_name[50], address[50];
    float amount;

public:
    void getcustomer_details();   
    void calculate_amount();      
    void print_bill();            
};

void EB_Bill::getcustomer_details()
 {
    cout<<"enter the electricity bill:";
    cin>> electricity bill;
    cout << "Enter customer_id: ";
    cin >> cust_id;
    cout << "Enter customer_name: ";
    cin >> cust_name;
    cout << "Enter address: ";
    cin >> address;
    cout << "Enter units: ";
    cin >> units;
}

void EB_Bill::calculate_amount()
{
    if (units <= 100)
    {
        amount = 0;
    } 
    else if (units <= 200) 
    {
        amount = (units - 100) * 2.25;
    } 
    else if (units <= 400) 
    {
        amount = (100 * 2.25) + (units - 200) * 4.25;
    } 
    else if (units <= 600) 
    {
        amount = (100 * 2.25) + (200 * 4.25) + (units - 400) * 6.25;
    } 
    else 
    {
        amount = (100 * 2.25) + (200 * 4.25) + (200 * 6.25) + (units - 600) * 9;
    }
}

void EB_Bill::print_bill():
 {
    cout << "Electricity Bill:" <<endl;
    cout << "Customer ID: " << cust_id << endl;
    cout << "Customer Name: " << cust_name << endl;
    cout << "Address: " << address << endl;
    cout << "Units: " << units << endl;
    cout << "Amount: " << amount << endl;
}

int main() 
{
    EB_Bill E1;
    E1.getcustomer_details(); 
    E1.calculate_amount();     
    E1.print_bill();           
    return 0;
}
