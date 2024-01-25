/*

Question:
Design a simplified class representing a "Book" in a library management system. Implement a copy constructor for the Book class.

Requirements:

1. The `Book` class should have the following attributes:
   - `title`: A string representing the title of the book.
   - `author`: A string representing the author of the book.
   - `isbn`: A string representing the ISBN (International Standard Book Number) of the book.
   - `pages`: An integer representing the number of pages in the book.

2. Implement a parameterized constructor to initialize the attributes of the book.
3. Implement a copy constructor for the Book class that performs a deep copy of the book object.
4. Ensure that the copy constructor accurately replicates all attributes of the original book object.
5. Test your implementation by creating an original Book object and then creating a copy of it using the copy constructor. 
Display the details of both the original and copied Book objects to verify the correctness of the copy constructor.

Additional Considerations:

- Provide appropriate access specifiers for class members.
- Handle memory allocation and deallocation appropriately in the copy constructor.
- Validate user input and implement error handling mechanisms as necessary.
- Comment your code to explain the purpose and functionality of the copy constructor.

Sample Output:

Original Book:
Title: "The Great Gatsby"
Author: "F. Scott Fitzgerald"
ISBN: "978-0-7432-7356-5"
Pages: 180

Copied Book:
Title: "The Great Gatsby"
Author: "F. Scott Fitzgerald"
ISBN: "978-0-7432-7356-5"
Pages: 180
```

**Note to Interviewee:**

Ensure that your implementation demonstrates a clear understanding of copy constructors, deep copying, and object duplication. 
Validate your solution through testing and address any potential edge cases or error scenarios.

*////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<bits/c++io.h>
#include<string>
#include<iostream>
using namespace std;

//creating a book class
class Book{
    string title,author,isbn;
    int pages;
    public:
    Book(string t, string a, string i, int p){
        title=t;
        author=a;
        isbn=i;
        pages=p;
    }
    //copy constructor
    Book(const Book& detail){
        title=detail.title;
        author=detail.author;
        isbn=detail.isbn;
        pages=detail.pages;
    }
    //display 
    void display(){
        cout << "Title: " << title <<endl;
        cout << "Author: " << author <<endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Pages: " << pages <<endl;
    }
};


int main(){
    //creating an original book object
    Book book1("book1","author1","1234-1234-1234", 400);
    //printing original book data 
    cout<<"\nOriginal Book"<<endl;
    book1.display();
    //creating a copy of original book using copy constructor
    Book copy1(book1);
    //printing copyconstructor data
    cout<<"\nCopied Book"<<endl;
    copy1.display();
}