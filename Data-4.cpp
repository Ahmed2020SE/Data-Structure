#include <iostream>
#include<string>
using namespace std;

struct books {
	string title;
	string author;
	string subject;
	int Book_id;
};
void printBook(books b) {
	cout << "Title: " << b.title
		<< "Author: " << b.author
		<< "Subject: " << b.subject
		<< "Book ID: " << b.Book_id
		<< endl;
}
void printBook(books *p) {
	cout << "Title: " << (p)->title
		<< "Author: " << (p)->author
		<< "Subject: " << (p)->subject
		<< "Book ID: " << (p)->Book_id
		<< endl;
}
void printBook(books b[],int size) {
	for (int i = 0; i < size; i++) {
		cout << "Title: " << b[i].title
			<< "Author: " << b[i].author
			<< "Subject: " << b[i].subject
			<< "Book ID: " << b[i].Book_id
			<< endl;
	}
}
int main()
{
	books b1, b2;
	books *p;
	printBook(b1);
	p = &b1;
	printBook(p);
	int x;
	cin >> x;
	books *b=new books[x];
	printBook(b, x);

    return 0;
}

