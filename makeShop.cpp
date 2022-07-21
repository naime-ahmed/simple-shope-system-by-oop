#include<bits/stdc++.h>
using namespace std;

class Shop{

    public:
        string productName[10];
        int productPrice[10];
        int productQuantity[10];
    private:
        int totalIncome;

    public:
        int getTotalIncome(){
            return totalIncome;
        }
        void setTotalIncome(int amount){
            totalIncome+=amount;
        }

};

int main(){

    int numberOfProduct;
    cout<<"Number of products: ";
    cin>>numberOfProduct;
    Shop product[numberOfProduct];

    for (int i = 0; i < numberOfProduct; i++)
    {
        string name;
        cout<<"Product "<<i+1<<" Name: ";
        cin>>name;
        product[i].productName[i] = name;

        int price;
        cout<<"Product "<<i+1<<" price: ";
        cin>>price;
        product[i].productPrice[i] = price;

        int quantity;
        cout<<"Product "<<i+1<<" quantity: ";
        cin>>quantity;
        product[i].productQuantity[i] = quantity;

    }
    
    char exit;
    while (exit != 'X')
    {
        cout<<"\n";
        cout<<"\t \t"<<"BUY PRODUCT"<<endl;
        cout<<"\t \t"<<"------------"<<endl;
        cout<<"\n";

        cout<<"Product Index"<<"\t";
        for (int i = 0; i < numberOfProduct; i++)
        {
            cout<<i+1<<"\t";
        }
        cout<<endl;

        cout<<"Product Name"<<"\t";
        for (int i = 0; i < numberOfProduct; i++)
        {
            cout<< product[i].productName[i]<<"\t";
        }
        cout<<endl;
        
        cout<<"Product price"<<"\t";
        for (int i = 0; i < numberOfProduct; i++)
        {
            cout<<product[i].productPrice[i]<<"\t";
        }
        cout<<endl;

        cout<<" quantity"<<"\t";
        for (int i = 0; i < numberOfProduct; i++)
        {
            cout<<product[i].productQuantity[i]<<"\t";
        }
        cout<<endl;
        cout<<endl;

        int productIndex;
        cout<<"Which product do u want? from 1 to "<< numberOfProduct<<": ";
        cin>>productIndex;

        int productQuantity;
        cout<<"What is the quantity that you want of "<< product[productIndex-1].productName[productIndex-1]<<": ";
        cin>>productQuantity;

        cout<<endl;
        cout<<endl;
        
        if ( product[productIndex-1].productQuantity[productIndex-1]< productQuantity)
        {
            cout<<"Sorry enough product isn't available as much as you want";
        }
        else{
            product[productIndex-1].productQuantity[productIndex-1]-=productQuantity;
            int total = product[productIndex-1].productPrice[productIndex-1]*productQuantity;
            product->setTotalIncome(total);
            cout<<"You buy successfully"<<endl;
            cout<<"Total income: "<< product->getTotalIncome();
        }
        cout<<endl;
        cout<<endl;
        cout<<"Wanna Exit from Store? Enter capital 'X' or Enter anything :";
        cin>>exit;
        cout<<endl;
        cout<<endl;
        
    }
    
    
    return 0;
}