// Define a class Bill and define its member function get() to take detail of customer , 
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.

#include<iostream>
using namespace std;

class Bill
{
    int Customer_No;
    char Customer_Name[50];
    int Units;
    float Total_Bill;

    public:

        void get_Details()
        {
            cout<<"Enter Customer number"<<endl;
            cin>>Customer_No;

            cout<<"Enter Customer name"<<endl;
            cin>>Customer_Name;

            cout<<"Enter units consume"<<endl;
            cin>>Units;

            Calculate_Bill();
            Display_Bill();
        }

        void Calculate_Bill()
        {
            if(Units<100)
            {
                Total_Bill = Units * 1.20;
            }
            else if (Units<100 && Units>200)
            {
                Total_Bill = 100 * 1.20 + ((Units - 100) * 2);
            }
            else
            {
                Total_Bill = (100 * 1.20) + (100 * 2) + ((Units - 200) * 3);
            }
        }

        void Display_Bill()
        {
            cout<<"---------------Electricity Bill---------------"<<endl;
            cout<<endl;
            cout<<"Customer Number : "<<Customer_No<<endl;
        
            cout<<"Customer Name   : "<<Customer_Name<<endl;

            cout<<"Units Consume   : "<<Units<<endl;
            
            cout<<"----------------------------------------------"<<endl;
            cout<<"Total Bill  (Rs): "<<Total_Bill<<"/-"<<endl;
            cout<<"----------------------------------------------"<<endl;

        } 
};

int main()
{
    Bill obj1;
    obj1.get_Details();

    Bill obj2;
    obj1.get_Details();
}