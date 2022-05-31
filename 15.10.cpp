//task 15.10

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;

class Currency{

public:
    string name;
    double amount;

    Currency(string name, double amount){
        this->name = name;
        this->amount = amount;
    }

    void print(){
        cout << "Currency : " << name << "\nAmount : " << amount << endl;
    }

    void add(Currency obj, Currency obj1){
        if (obj.name == obj1.name){
            obj.amount += double(obj1.amount);
            cout << "New Amount : " << obj.amount << endl;
        }
    }

    void difference(Currency obj, Currency obj1){
        if (obj.name == obj1.name){
            obj.amount -= double(obj1.amount);
            cout << "New Amount : " << obj.amount << endl;
        }

    }

    friend void converted_price(Currency obj, string currency_to_convert, double rate){
        if (currency_to_convert != obj.name){
            obj.amount *= rate;
            cout << "Amount in " << currency_to_convert << " : " << obj.amount << endl;
        }
    }

};

class Product{

public:
    string product_name;
    double price;
    string currency = "UAH";
    int amount_of_product;

    Product(string product_name, double price, int amount_of_product){
        this->product_name = product_name;
        this->price = price;
        this->amount_of_product = amount_of_product;
    }

    void print(){
        cout << "Product name : " << product_name << "\nPrice : " << price << " UAH" << "\nAmount of product : " << amount_of_product << endl;;
    }

    void add(Product prod, Product prod1){
        if (prod.product_name == prod1.product_name){
            prod.amount_of_product += abs(prod1.amount_of_product);
            cout << "New Amount : " << prod.amount_of_product << endl;
        }
    }

    void difference(Product prod, Product prod1){
        if (prod.product_name == prod1.product_name){
            prod.amount_of_product -= abs(prod1.amount_of_product);
            cout << "New Amount : " << prod.amount_of_product << endl;
        }

    }


    friend void converted_price_product(Product prod, string currency_to_convert, double rate){
        if (currency_to_convert != prod.product_name){
            prod.price /= rate;
            cout << "Price in " << currency_to_convert << " : " << prod.price << endl;
        }
    }

};

int main(){
    //string cur;
    //double amoun;
    //cin >> cur >> amoun;
    //cout << "////////" << endl;
    //Currency obj(cur, amoun); //("USDT", 12.22);
    Currency obj("USDT", 12.22);
    obj.print();
    cout << "////////" << endl;

    Currency obj1("USDT", 12.22);
    obj1.print();
    cout << "////////" << endl;

    obj.add(obj, obj1);
    cout << "////////" << endl;

    obj.difference(obj, obj1);
    cout << "////////" << endl;

    Product prod("Toy", 99.99, 3);
    prod.print();
    cout << "////////" << endl;

    Product prod1("Toy", 99.99, -1);
    prod.print();
    cout << "////////" << endl;

    prod.add(prod, prod1);
    cout << "////////" << endl;

    prod.difference(prod, prod1);
    cout << "////////" << endl;

    converted_price(obj, "UAH", 26.12);
    cout << "////////" << endl;

    converted_price_product(prod, "USDT", 26.12);

    return 0;
}
