#include <iostream>
#include <vector>
#include <string>

class Author {
private:
    std::string name;
    std::vector<std::string> writtenBooks;

public:
    Author(const std::string& authorName) : name(authorName) {}

    void addBook(const std::string& bookTitle) {
        writtenBooks.push_back(bookTitle);
    }

    const std::string& getName() const {
        return name;
    }

    const std::vector<std::string>& getWrittenBooks() const {
        return writtenBooks;
    }
};

class Book {
private:
    std::string title;
    Author author;
    bool available;

public:
    Book(const std::string& bookTitle, const Author& bookAuthor)
        : title(bookTitle), author(bookAuthor), available(true) {}

    const std::string& getTitle() const {
        return title;
    }

    const Author& getAuthor() const {
        return author;
    }

    bool isAvailable() const {
        return available;
    }

    void setAvailability(bool status) {
        available = status;
    }
};

class Patron {
private:
    std::string name;
    std::vector<Book> borrowedBooks;

public:
    Patron(const std::string& patronName) : name(patronName) {}

    void borrowBook(const Book& book) {
        borrowedBooks.push_back(book);
    }

    const std::string& getName() const {
        return name;
    }

    const std::vector<Book>& getBorrowedBooks() const {
        return borrowedBooks;
    }
};

int main() {
    // Creating authors
    Author author1("Stephen King");
    Author author2("J.K. Rowling");

    // Adding books to authors
    author1.addBook("The Shining");
    author1.addBook("It");
    author2.addBook("Harry Potter and the Philosopher's Stone");
    author2.addBook("Harry Potter and the Chamber of Secrets");

    // Creating books
    Book book1("The Shining", author1);
    Book book2("It", author1);
    Book book3("Harry Potter and the Philosopher's Stone", author2);
    Book book4("Harry Potter and the Chamber of Secrets", author2);

    // Creating patrons
    Patron patron1("John");
    Patron patron2("Alice");

    // Patron borrowing books
    patron1.borrowBook(book1);
    patron1.borrowBook(book3);
    patron2.borrowBook(book2);
    patron2.borrowBook(book4);

    // Outputting borrowed books for each patron
    std::cout << "Books borrowed by " << patron1.getName() << ":" << std::endl;
    for (const auto& book : patron1.getBorrowedBooks()) {
        std::cout << "- " << book.getTitle() << " by " << book.getAuthor().getName() << std::endl;
    }

    std::cout << "\nBooks borrowed by " << patron2.getName() << ":" << std::endl;
    for (const auto& book : patron2.getBorrowedBooks()) {
        std::cout << "- " << book.getTitle() << " by " << book.getAuthor().getName() << std::endl;
    }

    return 0;
}
