/*Problem: Online Shopping Cart with Product Copy Constructor

You are tasked with developing a C++ program to simulate the functionality of an online shopping cart. Implement two classes: `Product` and `ShoppingCart`.

1. Product Class:
   - Design a `Product` class that represents individual products in the online store.
   - Each product should have a name and a price.
   - Implement a copy constructor for the `Product` class that allows the creation of a new product by copying the details from an existing one.

2. ShoppingCart Class:
   - Design a `ShoppingCart` class that manages the items added to the cart.
   - Implement a function in the `ShoppingCart` class to add a product to the cart. Ensure that the copy constructor of the `Product` class is appropriately used when adding products to the cart.
   - Implement a function in the `ShoppingCart` class to display the contents of the cart. This function should display the name and price of each product in the cart.

3. Main Program:
   - In the main program, create instances of the `Product` class representing different products in the online store (e.g., a laptop, a smartphone).
   - Create an instance of the `ShoppingCart` class.
   - Add the products to the shopping cart using the copy constructor of the `Product` class.
   - Display the contents of the shopping cart, showing the name and price of each product.

Ensure that the copy constructor is used appropriately to maintain the independence of the original products and the products in the shopping cart.

This problem tests your understanding of classes, copy constructors, and basic object-oriented programming principles.
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*code starts*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class product{
    private:
    string name;
    double price;
    public:
    //constructor
    product(string n, double p){
        name=n;
        price=p;
    }
    //copyconstructor
    product(const product& other){
        name=other.name;
        price=other.price;
    }
    string getName(){ 
        return name; 
    }
    double getPrice(){
        return price; 
    }
};
class shopingcart{
    private: vector<product> items;
    public:
    //function to add an item to the shoping cart
    void addItem(const product& product){
        items.push_back(product);
    }
    // Function to display the contents of the cart
    void displaycart(){
        cout<<"Shopping Cart Contents:"<<endl;
        for(size_t i=0;i<items.size();i++){
            product& item = items[i];
            cout<<"Product: " << item.getName() << " | Price: $" << item.getPrice() <<endl;
        }
    }
};
int main(){

    //creating some product
    product Laptop1("Laptop-Hp",300);
    product Laptop2("Laptop-Lenovo",200);
    product Laptop3("Laptop-Apple",1000);

    //Adding product in the shoping cart using copy constructor
    shopingcart cart;
    cart.addItem(Laptop1);
    cart.addItem(Laptop3);

    // Display the contents of the shopping cart
    cart.displaycart();
}


/*code ends*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*Some doubts and conceptual questions related to this */

/*
1. About getter and setter function
In object-oriented programming, it's a common practice to encapsulate the internal state of a class by making its data members (variables) private. This means that these variables cannot be directly accessed or modified from outside the class. Instead, access to these private variables is often provided through public member functions, commonly known as getter and setter functions.

2. Getter functions: These functions are responsible for retrieving the values of private member variables. They are typically declared as const to indicate that they do not modify the state of the object. Getter functions allow external code to inquire about the state of an object without directly accessing its private members. This encapsulation helps maintain the integrity of the class's internal representation, as external code cannot manipulate the internal state directly.

3.Setter functions: In contrast, setter functions are used to modify the values of private member variables. They allow controlled access to modify the state of an object, often including validation or additional logic to ensure that the changes adhere to the intended behavior of the class.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class BankAccount {
private:
    double balance;

public:
    // Getter function
    double getBalance() const {
        return balance;
    }

    // Setter function
    void setBalance(double newBalance) {
        // Additional logic can be added here for validation
        balance = newBalance;
    }
};

In this example, getBalance is a getter function that allows external code to retrieve the balance of a BankAccount object without directly accessing the private member. The setBalance function, on the other hand, is a setter function that provides a controlled way to modify the balance variable, allowing the class to maintain its internal state according to specific rules.

Encapsulation through getters and setters is a fundamental principle in object-oriented design, promoting information hiding and helping to create more maintainable and modular code.
*/