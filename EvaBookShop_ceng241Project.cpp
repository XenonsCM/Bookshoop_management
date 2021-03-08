#include<iostream>
#include<fstream>
#include <ctime>
#include <sstream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
class Employee {

private:
	int personal_id;
	string name;
	string lastname;
	string tc_id;

public:
	int getPersonal_id();
	
	void setPersonal_id();

	string getName();

	void setName(string name);

	string getLastname();

	void setLastname(string lastname);

	string getTc_id();

	void setTc_id(string tc_id);
};

string Employee::getName() {
	return this->name;
}

void Employee::setName(string name) {
	this->name = name;
}

string Employee::getLastname() {
	return this->lastname;
}

void Employee::setLastname(string lastname) {
	this->lastname = lastname;
}

string Employee::getTc_id() {
	return this->tc_id;
}

void Employee::setTc_id(string tc_id) {
	this->tc_id = tc_id;
}

class Book {

private:
	string book_name;
	string author;
	int book_stock;
	string book_genre;
	float book_purchase_price;
	float book_sale_price;

public:
	string getBook_name();

	void setBook_name(string book_name);

	string getAuthor();

	void setAuthor(string author);

	int getBook_stock();

	void setBook_stock(int book_stock);

	string getBook_genre();

	void setBook_genre(string book_genre);

	float getBook_purchase_price();

	void setBook_purchase_price(float book_purchase_price);

	float getBook_sale_price();

	void setBook_sale_price(float book_sale_price);
};
string Book::getBook_name() {
	return this->book_name;
}

void Book::setBook_name(string book_name) {
	this->book_name = book_name;
}

string Book::getAuthor() {
	return this->author;
}

void Book::setAuthor(string author) {
	this->author = author;
}

int Book::getBook_stock() {
	return this->book_stock;
}

void Book::setBook_stock(int book_stock) {
	this->book_stock = book_stock;
}

string Book::getBook_genre() {
	return this->book_genre;
}

void Book::setBook_genre(string book_genre) {
	this->book_genre = book_genre;
}

float Book::getBook_purchase_price() {
	return this->book_purchase_price;
}

void Book::setBook_purchase_price(float book_purchase_price) {
	this->book_purchase_price = book_purchase_price;
}

float Book::getBook_sale_price() {
	return this->book_sale_price;
}

void Book::setBook_sale_price(float book_sale_price) {
	this->book_sale_price = book_sale_price;
}
//This function checks books genre and returns integer value to where it is called
int check_genre_f(string genre){
    //compare between book genre and all genres
	if(genre=="adventure")
	return 1;
	
	else if(genre=="classics")
	return 2;
	
	else if(genre=="comedy")
	return 3;
	
	else if(genre=="crime")
	return 4;
	
	else if(genre=="romance")
	return 5;
	
	else if(genre=="scifi")
	return 6;
	
	else if(genre=="horror")
	return 7;
	
	else if(genre=="history")
	return 8;
	
	else 
	return 0;
	
}

void add_book_f(Book& obj){
	string name,genre, author;
	float purchase_price, sale_price;
	int stock, genre_t;
  //User enters information about book
	cout << "Enter book name : ";
	fflush(stdin);
	getline(cin, name);
	obj.setBook_name(name);

	cout << "Enther author : ";
	fflush(stdin);
	getline(cin, author);
	obj.setAuthor(author);
	
	cout<<"Enter book genre : ";
	cin>>genre;
	obj.setBook_genre(genre);
	
	cout<<"Enter purchase price : ";
	cin>>purchase_price;
	obj.setBook_purchase_price(purchase_price);
	
	cout<<"Enter sale price : ";
	cin>>sale_price;
	obj.setBook_sale_price(sale_price);
	
	cout<<"Enter number of stock : ";
	cin>>stock;
	obj.setBook_stock(stock);
	
	fstream doc;
	//Cheking books genre and sending information of book to document
	genre_t=check_genre_f(genre);
	if(genre_t==1){
		doc.open("Book_adventure.txt",ios::app);
		doc<<obj.getBook_name()<<"*"<<obj.getAuthor() <<"*"<<obj.getBook_genre()<<"*"<<obj.getBook_purchase_price()<<"+"<<obj.getBook_sale_price()<<"&"<<obj.getBook_stock()<<"!"<<endl;
		doc.close();
	
	}
	else if(genre_t==2){
		doc.open("Book_classics.txt",ios::app);
		doc<<obj.getBook_name()<<"*"<<obj.getAuthor() <<"*"<<obj.getBook_genre()<<"*"<<obj.getBook_purchase_price()<<"+"<<obj.getBook_sale_price()<<"&"<<obj.getBook_stock()<<"!"<<endl;
		doc.close();
		
	}
	
	
	else if(genre_t==3){
		doc.open("Book_comedy.txt",ios::app);
		doc<<obj.getBook_name()<<"*"<<obj.getAuthor() <<"*"<<obj.getBook_genre()<<"*"<<obj.getBook_purchase_price()<<"+"<<obj.getBook_sale_price()<<"&"<<obj.getBook_stock()<<"!"<<endl;
		doc.close();
		
	}
	
	
	else if(genre_t==4){
		doc.open("Book_crime.txt",ios::app);
		doc<<obj.getBook_name()<<"*"<<obj.getAuthor() <<"*"<<obj.getBook_genre()<<"*"<<obj.getBook_purchase_price()<<"+"<<obj.getBook_sale_price()<<"&"<<obj.getBook_stock()<<"!"<<endl;
		doc.close();
		
	}
	
	
	else if(genre_t==5){
		doc.open("Book_romance.txt",ios::app);
		doc<<obj.getBook_name()<<"*"<<obj.getAuthor() <<"*"<<obj.getBook_genre()<<"*"<<obj.getBook_purchase_price()<<"+"<<obj.getBook_sale_price()<<"&"<<obj.getBook_stock()<<"!"<<endl;
		doc.close();
		
	}
	
	else if(genre_t==6){
		doc.open("Book_scifi.txt",ios::app);
		doc<<obj.getBook_name()<<"*"<<obj.getAuthor() <<"*"<<obj.getBook_genre()<<"*"<<obj.getBook_purchase_price()<<"+"<<obj.getBook_sale_price()<<"&"<<obj.getBook_stock()<<"!"<<endl;
		doc.close();
		
	}
	else if(genre_t==7){
		doc.open("Book_horror.txt",ios::app);
		doc<<obj.getBook_name()<<"*"<<obj.getAuthor() <<"*"<<obj.getBook_genre()<<"*"<<obj.getBook_purchase_price()<<"+"<<obj.getBook_sale_price()<<"&"<<obj.getBook_stock()<<"!"<<endl;
		doc.close();
		
	}
	
	
	else if(genre_t==8){
		doc.open("Book_history.txt",ios::app);
		doc<<obj.getBook_name()<<"*"<<obj.getAuthor() <<"*"<<obj.getBook_genre()<<"*"<<obj.getBook_purchase_price()<<"+"<<obj.getBook_sale_price()<<"&"<<obj.getBook_stock()<<"!"<<endl;
		doc.close();
		
	}
	
	
	
}


void add_employee(Employee& obj){
    //User enters information about new employee to write it in the employee document
            string name, last_name,tc_id;
            float salary, first_salary;
            int start_day, start_month, start_year;
            
            cout<<"Enter tc id:";
            fflush(stdin);
            getline(cin, tc_id);
            obj.setTc_id(tc_id);

            cout<<"Enter name of employee:";
            fflush(stdin);
            getline(cin, name);
            obj.setName(name);

            cout<<"Enter last name:";
            fflush(stdin);
            getline(cin, last_name);
            obj.setLastname(last_name);

		

        fstream employee;
        employee.open("Employee.txt", ios::app); //Opens file for writing information in it
        employee<<obj.getTc_id()<<" "<<obj.getName()<<" "<<obj.getLastname()<<" "<<endl;
        employee.close();
    }
void modify_employee(Employee &obj){
    //user enters information about an employee to change it
    //this function search employee in file and wants user to enter new information about employee
			string deleteline;
			string line;
			ifstream emp;
			emp.open("Employee.txt");
			ofstream temp;
			temp.open("temp.txt");
			cout << "Enter id of employee which u want to modify? ";
			cin >> deleteline;
			//reading the file line by line and check entered id is same with lines id
			while (getline(emp,line))
			{
			std::string id(line.begin(), line.begin() + line.find(" "));
			if (id != deleteline)
			temp << line << endl;
			}
			temp.close();
			emp.close();
			remove("Employee.txt");
			rename("temp.txt","Employee.txt");
	        string name, last_name,tc_id;
	        //User enter new information here
            cout<<"Enter new id:";
            fflush(stdin);
            getline(cin, tc_id);
            obj.setTc_id(tc_id);

            cout<<"Enter new name of employee:";
            fflush(stdin);
            getline(cin, name);
            obj.setName(name);

            cout<<"Enter new last name:";
            fflush(stdin);
            getline(cin, last_name);
            obj.setLastname(last_name);
	        fstream employee;
	        employee.open("Employee.txt", ios::app);
	        employee<<obj.getTc_id()<<" "<<obj.getName()<<" "<<obj.getLastname()<<" "<<endl;
	        employee.close();
}
void show_employee(){

    //This function shows employees with their all information

    string id,name,lastname,id1;
	ifstream doc;
	cout<<"----------------Employees--------------"<<endl;
	doc.open("Employee.txt",ios::in);
	string line;
	if(doc.is_open())
	{
	    //Getting information about employees from file line by line and prints

	    while(getline(doc,id,' ')&&getline(doc,name,' ')&&getline(doc,lastname,' ')){
				size_t start = id.find_first_not_of("\n\r");
				id1 = id.substr(start);
				cout<<"Employee's id: "<<id1<<endl;
				cout<<"Name: "<<name<<endl;
				cout<<"Last name: "<<lastname<<endl;
				cout<<"================================\n";
				}
				cout<<"\n\n";
				doc.close();	
				}
				else
				cout<<"Documentary can not opening "<<endl;
	
}

void show_books_f(int operationshow1){

    //This function gets information about book genre from main function and show book of entered genre
    //Function reads file line by line and show each book in entered genre

    string bookName,bookName1,authName,advName,purPrice,salePrice,stkSituation;
	ifstream doc;
	switch(operationshow1){
	case 1:
	{
	cout<<"----------ADVENTURE BOOKS----------"<<endl;
	doc.open("Book_adventure.txt",ios::in);
	string line;
	if(doc.is_open())
	{
	while(getline(doc,bookName,'*') && getline(doc,authName,'*') && getline(doc,advName,'*') &&
	getline(doc,purPrice,'+') && getline(doc,salePrice,'&') && getline(doc,stkSituation,'!'))
	{
	    //Getting information about book form file and print it

    size_t start = bookName.find_first_not_of("\n\r");
	bookName1 = bookName.substr(start);
	cout<<"Book name : "<<bookName1<<endl;
	cout<<"Author : "<<authName<<endl;
	cout<<"Genre : "<<advName<<endl;
	cout<<"Purchase price : "<<purPrice<<endl;
	cout<<"Sale price : "<<salePrice<<endl;
	cout<<"Stock situation : "<<stkSituation<<endl;
	cout<<"================================\n";
	}
	cout<<"\n\n";
	doc.close(); //closing file, end of reading operation
	}
	else
	cout<<"Documentary can not opening "<<endl;
	
		break;
	}
	case 2:
	cout<<"----------CLASSIC BOOKS----------"<<endl;
	doc.open("Book_classics.txt");
	if(doc.is_open())
	{
	while(getline(doc,bookName,'*') && getline(doc,authName,'*') && getline(doc,advName,'*') &&
	getline(doc,purPrice,'+') && getline(doc,salePrice,'&') && getline(doc,stkSituation,'!'))
	{
	size_t start = bookName.find_first_not_of("\n\r");
	bookName1 = bookName.substr(start);
	cout<<"Book name : "<<bookName1<<endl;
	cout<<"Author : "<<authName<<endl;
	cout<<"Genre : "<<advName<<endl;
	cout<<"Purchase price : "<<purPrice<<endl;
	cout<<"Sale price : "<<salePrice<<endl;
	cout<<"Stock situation : "<<stkSituation<<endl;
	cout<<"================================\n";
	}
	cout<<"\n\n";
	doc.close();
	}
	else
	cout<<"Documentary can not opening "<<endl;
	break;
	case 3:
	cout<<"----------ROMANCE BOOKS----------"<<endl;
	doc.open("Book_romance.txt");
	if(doc.is_open())
	{
	while(getline(doc,bookName,'*') && getline(doc,authName,'*') && getline(doc,advName,'*') &&
	getline(doc,purPrice,'+') && getline(doc,salePrice,'&') && getline(doc,stkSituation,'!'))
	{
	size_t start = bookName.find_first_not_of("\n\r");
	bookName1 = bookName.substr(start);
	cout<<"Book name : "<<bookName1<<endl;
	cout<<"Author : "<<authName<<endl;
	cout<<"Genre : "<<advName<<endl;
	cout<<"Purchase price : "<<purPrice<<endl;
	cout<<"Sale price : "<<salePrice<<endl;
	cout<<"Stock situation : "<<stkSituation<<endl;
	cout<<"================================\n";
	}
	cout<<"\n\n";
	doc.close();
	}
	else
	cout<<"Documentary can not opening "<<endl;
	
	break;
	
	case 4:
	cout<<"----------COMEDY BOOKS----------"<<endl;
	doc.open("Book_comedy.txt");
	if(doc.is_open())
	{
	while(getline(doc,bookName,'*') && getline(doc,authName,'*') && getline(doc,advName,'*') &&
	getline(doc,purPrice,'+') && getline(doc,salePrice,'&') && getline(doc,stkSituation,'!'))
	{
	size_t start = bookName.find_first_not_of("\n\r");
	bookName1 = bookName.substr(start);
	cout<<"Book name : "<<bookName1<<endl;
	cout<<"Author : "<<authName<<endl;
	cout<<"Genre : "<<advName<<endl;
	cout<<"Purchase price : "<<purPrice<<endl;
	cout<<"Sale price : "<<salePrice<<endl;
	cout<<"Stock situation : "<<stkSituation<<endl;
	cout<<"================================\n";
	}
	cout<<"\n\n";
	doc.close();
	}
	else
	cout<<"Documentary can not opening "<<endl;
	
	break;
	
	case 5:
	cout<<"----------HORROR BOOKS----------"<<endl;
	doc.open("Book_horror.txt");
	if(doc.is_open())
	{
	while(getline(doc,bookName,'*') && getline(doc,authName,'*') && getline(doc,advName,'*') &&
	getline(doc,purPrice,'+') && getline(doc,salePrice,'&') && getline(doc,stkSituation,'!'))
	{
	size_t start = bookName.find_first_not_of("\n\r");
	bookName1 = bookName.substr(start);
	cout<<"Book name : "<<bookName1<<endl;
	cout<<"Author : "<<authName<<endl;
	cout<<"Genre : "<<advName<<endl;
	cout<<"Purchase price : "<<purPrice<<endl;
	cout<<"Sale price : "<<salePrice<<endl;
	cout<<"Stock situation : "<<stkSituation<<endl;
	cout<<"================================\n";
	}
	cout<<"\n\n";
	doc.close();
	}
	else
	cout<<"Documentary can not opening "<<endl;
	
	break;
	
	case 6:
	cout<<"----------CRIME BOOKS----------"<<endl;
	doc.open("Book_crime.txt");
	if(doc.is_open())
	{
	while(getline(doc,bookName,'*') && getline(doc,authName,'*') && getline(doc,advName,'*') &&
	getline(doc,purPrice,'+') && getline(doc,salePrice,'&') && getline(doc,stkSituation,'!'))
	{
	size_t start = bookName.find_first_not_of("\n\r");
	bookName1 = bookName.substr(start);
	cout<<"Book name : "<<bookName1<<endl;
	cout<<"Author : "<<authName<<endl;
	cout<<"Genre : "<<advName<<endl;
	cout<<"Purchase price : "<<purPrice<<endl;
	cout<<"Sale price : "<<salePrice<<endl;
	cout<<"Stock situation : "<<stkSituation<<endl;
	cout<<"================================\n";
	}
	cout<<"\n\n";
	doc.close();
	}
	else
	cout<<"Documentary can not opening "<<endl;
	
	break;
	
	case 7:
	cout<<"----------HISTORY BOOKS----------\n\n"<<endl;
	doc.open("Book_history.txt");
	if(doc.is_open())
	{
	while(getline(doc,bookName,'*') && getline(doc,authName,'*') && getline(doc,advName,'*') &&
	getline(doc,purPrice,'+') && getline(doc,salePrice,'&') && getline(doc,stkSituation,'!'))
	{
	size_t start = bookName.find_first_not_of("\n\r");
	bookName1 = bookName.substr(start);
	cout<<"Book name : "<<bookName1<<endl;
	cout<<"Author : "<<authName<<endl;
	cout<<"Genre : "<<advName<<endl;
	cout<<"Purchase price : "<<purPrice<<endl;
	cout<<"Sale price : "<<salePrice<<endl;
	cout<<"Stock situation : "<<stkSituation<<endl;
	cout<<"================================\n";
	}
	cout<<"\n\n";
	doc.close();
	}
	else
	cout<<"Documentary can not opening "<<endl;
	
	break;
	
	case 8:
	cout<<"----------SCIFI BOOKS----------"<<endl;
	doc.open("Book_scifi.txt");
	if(doc.is_open())
	{
	while(getline(doc,bookName,'*') && getline(doc,authName,'*') && getline(doc,advName,'*') &&
	getline(doc,purPrice,'+') && getline(doc,salePrice,'&') && getline(doc,stkSituation,'!'))
	{
	size_t start = bookName.find_first_not_of("\n\r");
	bookName1 = bookName.substr(start);
	cout<<"Book name : "<<bookName1<<endl;
	cout<<"Author : "<<authName<<endl;
	cout<<"Genre : "<<advName<<endl;
	cout<<"Purchase price : "<<purPrice<<endl;
	cout<<"Sale price : "<<salePrice<<endl;
	cout<<"Stock situation : "<<stkSituation<<endl;
	cout<<"================================\n";
	}
	cout<<"\n\n";
	doc.close();
	}
	else
	cout<<"Documentary can not opening "<<endl;
	
	break;
	}

}

void Empshow_books_f(int operationshow2){

    //This function is using for selling books, helping to calculate profit and changing stock situation.

    string bookName,bookName1,authName,advName,purPrice,salePrice,stkSituation;
	ifstream doc;
	int counter=0;
	//Checking books genre to show
    switch(operationshow2){
		
	case 1:
	doc.open("Book_adventure.txt",ios::in);
	cout<<"----------ADVENTURE BOOKS----------"<<endl;
	if(doc.is_open()){ //Checks if document is open
	while(getline(doc,bookName,'*') && getline(doc,authName,'*') && getline(doc,advName,'*') &&
	getline(doc,purPrice,'+') && getline(doc,salePrice,'&') && getline(doc,stkSituation,'!'))
	{
	    //Getting information from text file

	size_t start = bookName.find_first_not_of("\n\r");
	bookName1 = bookName.substr(start);//setting book name into a string to print
	cout<<"Book name : "<<bookName1<<endl;
	cout<<"Sale price : "<<salePrice<<endl;
	cout<<"Stock situation : "<<stkSituation<<endl;
	cout<<"================================\n";
	}
	cout<<"\n\n";
	doc.close();
	}
	else
	cout<<"Documentary can not opening "<<endl;
	
	break;
	case 2:
	cout<<"----------CLASSIC BOOKS----------"<<endl;
	doc.open("Book_classic.txt");
	if(doc.is_open()){
	while(getline(doc,bookName,'*') && getline(doc,authName,'*') && getline(doc,advName,'*') &&
	getline(doc,purPrice,'+') && getline(doc,salePrice,'&') && getline(doc,stkSituation,'!'))
	{
	size_t start = bookName.find_first_not_of("\n\r");
	bookName1 = bookName.substr(start);
	cout<<"Book name : "<<bookName1<<endl;
	cout<<"Sale price : "<<salePrice<<endl;
	cout<<"Stock situation : "<<stkSituation<<endl;
	cout<<"================================\n";
	}
	cout<<"\n\n";
	doc.close();
	}
	else
	cout<<"Documentary can not opening "<<endl;
	
	
	case 3:
	cout<<"----------ROMANCE BOOKS----------"<<endl;
	doc.open("Book_romance.txt");
	if(doc.is_open()){
	while(getline(doc,bookName,'*') && getline(doc,authName,'*') && getline(doc,advName,'*') &&
	getline(doc,purPrice,'+') && getline(doc,salePrice,'&') && getline(doc,stkSituation,'!'))
	{
	size_t start = bookName.find_first_not_of("\n\r");
	bookName1 = bookName.substr(start);
	cout<<"Book name : "<<bookName1<<endl;
	cout<<"Sale price : "<<salePrice<<endl;
	cout<<"Stock situation : "<<stkSituation<<endl;
	cout<<"================================\n";
	}
	cout<<"\n\n";
	doc.close();
	}
	else
	cout<<"Documentary can not opening "<<endl;
	break;
	
	case 4:
	cout<<"----------COMEDY BOOKS----------"<<endl;
	doc.open("Book_comedy.txt");
	if(doc.is_open())
	{
	while(getline(doc,bookName,'*') && getline(doc,authName,'*') && getline(doc,advName,'*') &&
	getline(doc,purPrice,'+') && getline(doc,salePrice,'&') && getline(doc,stkSituation,'!'))
	{
	size_t start = bookName.find_first_not_of("\n\r");
	bookName1 = bookName.substr(start);
	cout<<"Book name : "<<bookName1<<endl;
	cout<<"Author : "<<authName<<endl;
	cout<<"Genre : "<<advName<<endl;
	cout<<"Purchase price : "<<purPrice<<endl;
	cout<<"Sale price : "<<salePrice<<endl;
	cout<<"Stock situation : "<<stkSituation<<endl;
	cout<<"================================\n";
	}
	cout<<"\n\n";
	doc.close();
	}
	else
	cout<<"Documentary can not opening "<<endl;
	
	break;
	
	
	
	case 5:
	cout<<"----------HORROR BOOKS----------"<<endl;
	doc.open("Book_horror.txt");
	if(doc.is_open()){
	while(getline(doc,bookName,'*') && getline(doc,authName,'*') && getline(doc,advName,'*') &&
	getline(doc,purPrice,'+') && getline(doc,salePrice,'&') && getline(doc,stkSituation,'!'))
	{
	size_t start = bookName.find_first_not_of("\n\r");
	bookName1 = bookName.substr(start);
	cout<<"Book name : "<<bookName1<<endl;
	cout<<"Sale price : "<<salePrice<<endl;
	cout<<"Stock situation : "<<stkSituation<<endl;
	cout<<"================================\n";
	}
	cout<<"\n\n";
	doc.close();
	}
	else
	cout<<"Documentary can not opening "<<endl;
	
	
	case 6:
	cout<<"----------CRIME BOOKS----------"<<endl;
	doc.open("Book_crime.txt");
	if(doc.is_open()){
	while(getline(doc,bookName,'*') && getline(doc,authName,'*') && getline(doc,advName,'*') &&
	getline(doc,purPrice,'+') && getline(doc,salePrice,'&') && getline(doc,stkSituation,'!'))
	{
	size_t start = bookName.find_first_not_of("\n\r");
	bookName1 = bookName.substr(start);
	cout<<"Book name : "<<bookName1<<endl;
	cout<<"Sale price : "<<salePrice<<endl;
	cout<<"Stock situation : "<<stkSituation<<endl;
	cout<<"================================\n";
	}
	cout<<"\n\n";
	doc.close();
	}
	else
	cout<<"Documentary can not opening "<<endl;
	break;
	
	case 7:
	cout<<"----------HISTORY BOOKS----------\n\n"<<endl;
	doc.open("Book_history.txt");
	if(doc.is_open()){
	while(getline(doc,bookName,'*') && getline(doc,authName,'*') && getline(doc,advName,'*') &&
	getline(doc,purPrice,'+') && getline(doc,salePrice,'&') && getline(doc,stkSituation,'!'))
	{
	size_t start = bookName.find_first_not_of("\n\r");
	bookName1 = bookName.substr(start);
	cout<<"Book name : "<<bookName1<<endl;
	cout<<"Sale price : "<<salePrice<<endl;
	cout<<"Stock situation : "<<stkSituation<<endl;
	cout<<"================================\n";
	}
	cout<<"\n\n";
	doc.close();
	}
	else
	cout<<"Documentary can not opening "<<endl;
	break;
	
	case 8:
	cout<<"----------SCIFI BOOKS----------"<<endl;
	doc.open("Book_scifi.txt");
	if(doc.is_open()){
	while(getline(doc,bookName,'*') && getline(doc,authName,'*') && getline(doc,advName,'*') &&
	getline(doc,purPrice,'+') && getline(doc,salePrice,'&') && getline(doc,stkSituation,'!'))
	{
	size_t start = bookName.find_first_not_of("\n\r");
	bookName1 = bookName.substr(start);
	cout<<"Book name : "<<bookName1<<endl;
	cout<<"Sale price : "<<salePrice<<endl;
	cout<<"Stock situation : "<<stkSituation<<endl;
	cout<<"================================\n";
	}
	cout<<"\n\n";
	doc.close();
	}
	else
	cout<<"Documentary can not opening "<<endl;
	break;
	}
}
int check_id_password(string id,string password)
{
    //This function checks id and password are true entered
    string id_t="root",password_t="toor";
    if(id==id_t && password==password_t){
	    return 0;
    }
    else
	    return 1;
}
int check_user_type(string user_type){

    //This function use for understand who is using app

    if(user_type=="1"||user_type=="Employee"||user_type=="employee")
	return 1;
	else if(user_type=="2"||user_type=="Admin"||user_type=="admin")
	return 2;
	else if(user_type=="3"||user_type=="Exit"||user_type=="exit")
	return 3;
	else 
	return 4;
}
void sale_book_add_money(int add_money)
{
    //Adds saled books money to total money
	time_t date = time(NULL);
  	struct tm *date_info = localtime(&date);
  	int day=date_info->tm_mday;
  	char money[50];
	fstream doc,dos;
	int total_money;
	dos.open("Safe.txt",ios::in);
	doc.open("Sales.txt",ios::app);
	doc<<day<<"*"<<add_money<<"!"<<endl;//Writes daily profit into doc
	dos>>total_money;
	fstream newm("text.txt",ios::app);
	newm<<total_money+add_money;//adds daily profit to total money and writes new total money into new text file
	newm.close();
	doc.close();
	dos.close();
	remove("Safe.txt");//Removing old file
	rename("text.txt","Safe.txt");//Changes name of file that we write new info in to old files name for using same code more than once
	
}



void fire_employee(){
    //This function is using for fire employee, it deletes all information about fired employee with writing employees who are not fired into a
    // new text file and changes its name to original text file and deletes first text file
	string deleteline;
	string line;
	ifstream emp;
	emp.open("Employee.txt");
	ofstream temp;
	temp.open("temp.txt");
	cout << "Enter id of employee which u want to fire? ";
	cin >> deleteline;
	while (getline(emp,line))
	{
	std::string id(line.begin(), line.begin() + line.find(" "));
	if (id != deleteline)
	temp << line << endl;
	}
	temp.close();
	emp.close();
	remove("Employee.txt");
	rename("temp.txt","Employee.txt");
	
}
int sale_book(){
string book_name; //User enter book details
string book_genre;
cout<<"Enter book name :";
fflush(stdin);
getline(cin,book_name);
cout<<"user please enter book genre :";
cin>>book_genre;

ifstream myfile("Book_adventure.txt"); // opening data file
string line;
int money=0;
ofstream file("temp.txt"); // one extra temp file for stock updation ,will delete that file in last
while(getline(myfile,line))
{
// word[0]=b_name,word[1]=b_author,word[2]=b_genre,word[3]=b_sales,word[4]=b_purchase,word[5]=b_stock;
string word[6]; // will contains values as mentioned above
int j=0;

for(int i=0;i<line.size();i++) // iterate over whole line and store books details in word array
{
while(line[i]!='*'&&line[i]!='+'&&line[i]!='&'&&line[i]!='!')
{ word[j]=word[j]+line[i];
i++;}
j++;
}

if(word[0]==book_name&&word[2]==book_genre) // if user data is match with book details than
{ int sales;
cout<<"book name :"<<word[0]<<endl;
cout<<"sales price :"<<word[3]<<endl;
cout<<"stock :"<<word[5]<<endl;
cout<<"enter number of sales :";
cin>>sales;
int stocks=stoi(word[5]); // convert string to number
int sale=stoi(word[3]);
while(sales>stocks) // if sales value is greater than user enter again
{cout<<"we dont have that many copies of books please check stock value and than enter sales :";
cin>>sales;}
if(sales==stocks) // if sales == stocks no need to write that data in temp just delete that row
{money=sale*sales;cout<<"Book succefully sold!"<<endl;}
else if(sales<stocks) // else update stock and money value and write data in updataed data in temp
{money=sale*sales;
stocks=stocks-sales;
word[5]=to_string(stocks);
cout<<"Book succefully sold!"<<endl;
file<<word[0]<<"*"<<word[1]<<"*"<<word[2]<<"*"<<word[3]<<"+"<<word[4]<<"&"<<word[5]<<"!"<<endl;
}
}
else // if data is not matched with user data than write that file as it is
{ file<<line<<endl;
}
}
myfile.close();
file.close();
std::ofstream ofs; // trucate book_adventure file and write updated data present in temp file to it
ofs.open("Book_adventure.txt", std::ofstream::out | std::ofstream::trunc);
ofs.close();
ifstream file1("temp.txt");
ofstream myfile1("Book_adventure.txt"); // write data of temp to book_adventure
while(getline(file1,line))
{ myfile1<<line<<endl;}

myfile1.close();
file1.close();

remove("temp.txt"); //remove temp file

return(money); //return calculated value of money
}

void show_total_money(){
	fstream doc;
	int x;
	doc.open("Safe.txt",ios::in); //Opens safe document for reading total money
	doc>>x;
	cout<<"===================================\n\n"<<endl;
	cout<<"Total money : "<<x<<"TL\n\n"<<endl;
	cout<<"===================================\n"<<endl;
	
	doc.close();
}
void show_daily_profit(){
	time_t date = time(NULL);
  	struct tm *date_info = localtime(&date); //Gets date info from computer
  	int day=date_info->tm_mday;
  	
	fstream doc;
	string text;
	int dayt,mony,total=0,pos,kes,flag=1;
	char dates[3],*money;
	doc.open("Sales.txt",ios::in);
	if(doc.is_open()){
		while(flag!=0){
		money=new char[10];
		getline(doc,text);
		for(int z=0;z<100;z++){
			if(text[z]=='*')
			{	pos=z;
				break;
			}
		}
		for(int s=pos;s<100;s++){
			if(text[s]=='!')
			{	kes=s;
				break;
			}
		}
		
		for(int i=0;i<pos;i++){
			dates[i]=text[i];
			
		}
		int g=0;
		for(int a=pos+1;a<kes;a++){
			money[g]=text[a];
			g++;
		}
				//Getting money(string) and convert into an integer value for adding total money
				stringstream geek(dates);
				geek>>dayt;
				stringstream geeks(money);
				geeks>>mony;
				if(day==dayt){
				total+=mony;
			
				}
				getline(doc,text);
		delete [] money,dates;
		if(doc.eof()){
			flag=0;
		}
	}
	cout<<"=======================================\n";
	cout<<"Day :"<<day<<endl;;
	cout<<"Daily profit :"<<total<<endl;
	cout<<"=======================================\n\n";
	
	doc.close();
}
}
void delete_book(){
    //Used for saled books to delete them from stock
	Book obj;
	string genre,name;
	int genre_t;
	string deleteline;
	string line;
	ifstream emp;
	cout<<"Enter the name of book you want to delete it : ";cin>>deleteline;
	cout<<"Enter the genre of book you want to delete it : ";cin>>genre;
	genre_t=check_genre_f(genre); //Checks genre of book
	if(genre_t==1){
	emp.open("Book_adventure.txt");
	ofstream temp;
	temp.open("temp.txt");
	while (getline(emp,line))
	{
	std::string name(line.begin(), line.begin() + line.find('*'));
	if (name != deleteline) //Check line for deleting
	temp << line << endl;   //Writing books into a new document except what user entered to delete
	}
	temp.close();
	emp.close();
	remove("Book_adventure.txt");
	rename("temp.txt","Book_adventure.txt");		
	}
	else if(genre_t==2){
	emp.open("Book_classics.txt");
	ofstream temp;
	temp.open("temp.txt");
	
	while (getline(emp,line))
	{
	std::string name(line.begin(), line.begin() + line.find('*'));
	if (name != deleteline)
	temp << line << endl;
	}
	temp.close();
	emp.close();
	remove("Book_classics.txt");
	rename("temp.txt","Book_classics.txt");
	}
	else if(genre_t==3){
	emp.open("Book_comedy.txt");
	ofstream temp;
	temp.open("temp.txt");	
	while (getline(emp,line))
	{
	std::string name(line.begin(), line.begin() + line.find('*'));
	if (name != deleteline)
	temp << line << endl;
	}
	temp.close();
	emp.close();
	remove("Book_comedy.txt");
	rename("temp.txt","Book_comedy.txt");	
	}	
	else if(genre_t==4){
	emp.open("Book_crime.txt");
	ofstream temp;
	temp.open("temp.txt");	
	while (getline(emp,line))
	{
	std::string name(line.begin(), line.begin() + line.find('*'));
	if (name != deleteline)
	temp << line << endl;
	}
	temp.close();
	emp.close();
	remove("Book_crime.txt");
	rename("temp.txt","Book_crime.txt");	
	}	
	else if(genre_t==5){
	emp.open("Book_romance.txt");
	ofstream temp;
	temp.open("temp.txt");
	while (getline(emp,line))
	{
	std::string name(line.begin(), line.begin() + line.find('*'));
	if (name != deleteline)
	temp << line << endl;
	}
	temp.close();
	emp.close();
	remove("Book_romance.txt");
	rename("temp.txt","Book_romance.txt");	
	}
	else if(genre_t==6){
	emp.open("Book_scifi.txt");
	ofstream temp;
	temp.open("temp.txt");
	
	while (getline(emp,line))
	{
	std::string name(line.begin(), line.begin() + line.find('*'));
	if (name != deleteline)
	temp << line << endl;
	}
	temp.close();
	emp.close();
	remove("Book_scifi.txt");
	rename("temp.txt","Book_scifi.txt");
	}	
	else if(genre_t==7){
	emp.open("Book_horror.txt");
	ofstream temp;
	temp.open("temp.txt");
	
	while (getline(emp,line))
	{
	std::string name(line.begin(), line.begin() + line.find('*'));
	if (name != deleteline)
	temp << line << endl;
	}
	temp.close();
	emp.close();
	remove("Book_horror.txt");
	rename("temp.txt","Book_horror.txt");
	}	
	else if(genre_t==8){
	emp.open("Book_history.txt");
	ofstream temp;
	temp.open("temp.txt");
	
	while (getline(emp,line))
	{
	std::string name(line.begin(), line.begin() + line.find('*'));
	if (name != deleteline)
	temp << line << endl;
	}
	temp.close();
	emp.close();
	remove("Book_history.txt");
	rename("temp.txt","Book_history.txt");		
	}
	else 
	cout<<"Something gone wrong!!!"<<endl;
}
int main(){
	string user_type,yesno;
	Book book;	
	Employee E;
	int flag=1,flag_p=1,flag_pp=1,selection,flag_add=1,parameter1,parameter2;
	while(flag!=0){
    time_t now = time(0);	// Take time datas from system.
    char* dt = ctime(&now);  // We Convert this data as Array.
	cout<<"Welcome to EvaBookShop"<<endl;
	cout<<"Date and Time : "<<dt;;
	cout<<"Choose Operation to access the panel"<<endl;
	cout<<"1.Employee"<<endl;
	cout<<"2.Admin"<<endl;
	cout<<"3.Exit"<<endl;
	cout<<"Enter your operation (string or number) :";
	cin>>user_type;
	selection=check_user_type(user_type);
	if(selection==2){
		while(flag_p!=0){
		
	string id;  cout<<"ID: "; cin>>id;string password; cout<<"Password: "; cin>>password;
	flag_p=check_id_password(id,password);
	if(flag_p==1)
	cout<<"Try again wrong password or id!!"<<endl;
			}
					}
	switch(selection){
		case 1:
			while(flag_pp!=0){		
			cout<<"----------------EMPLOYEE PAGE----------------"<<endl;
			cout<<"1.Show Books"<<endl;
			cout<<"2.Sell Books"<<endl;
			cout<<"3.Exit to main menu"<<endl;
			cout<<"Choose operation: ";
			int operation2;
			cin>>operation2;
			if(operation2==1){
			cout<<"Which genre u want to show"<<endl;
			cout<<"1.Adventure"<<endl<<"2.Classic"<<endl<<"3.Romance"<<endl<<"4.Comedy"<<endl<<"5.Horror"<<endl<<"6.Crime"<<endl<<"7.History"<<endl<<"8.Scifi"<<endl;
			cout<<"Choose operation: ";
			cin>>parameter2;
			Empshow_books_f(parameter2);
			}
			else if(operation2==2){
			int add_money=0;
			add_money=sale_book();
			if(add_money==0)
			cout<<"Something gone wrong!!\n Maybe stock is 0 or Book is may not be registered."<<endl;
			else{
			cout<<"Added money is: "<<add_money<<endl;
			sale_book_add_money(add_money);
				}
			}
			
			else if(operation2=3){
				flag_pp=0;
			}}
			flag_pp=1;
			break;
		case 2:
			while(flag_pp!=0){
			cout<<"----------------ADMIN PAGE----------------"<<endl;
			cout<<"1.Add Books"<<endl;
			cout<<"2.Show Books"<<endl;
			cout<<"3.Delete Books"<<endl;
			cout<<"4.Manage Employee"<<endl;
			cout<<"5.Safe Management"<<endl;
			cout<<"6.Exit to main menu"<<endl;
			int operation;
			cout<<"Choose your operation : ";
			cin>>operation;
			if(operation==1){
			while(flag_add!=0){
			add_book_f(book);
			cout<<"Book added successfully!!!"<<endl;
			cout<<"Do u want to add another book?(Yes/No): ";
			cin>>yesno;
			cout<<"\n \n";
			if(yesno=="Yes"||yesno=="yes"){
				flag_add=1;
				}
			else if(yesno=="No"||yesno=="no"){
				break;
				}
			}
			}
			else if(operation==2){
				cout<<"Which genre u want to show"<<endl;
				cout<<"1.Adventure"<<endl<<"2.Classic"<<endl<<"3.Romance"<<endl<<"4.Horror"<<endl<<"5.Crime"<<endl<<"6.History"<<endl<<"7.Scifi"<<endl;
				cout<<"Choose operation: ";
				cin>>parameter1;
				show_books_f(parameter1);
				
			}
			else if(operation==3){
				delete_book();
				
				
				
			}
			else if(operation==4){
				cout<<"-----------------Employee Management Menu-----------------"<<endl;
				int opr;
				cout<<"1.Show employee "<<endl;
				cout<<"2.Add new employee "<<endl;
				cout<<"3.Delete employee "<<endl;
				cout<<"4.Modify employee "<<endl;
				cout<<"Choose an operation :";
				cin>>opr;
				if(opr==1)
				show_employee();				
				else if(opr==2)
				add_employee(E);
				else if(opr==3)
		    	fire_employee();
				else if(opr==4)
				modify_employee(E);
			}
			else if(operation==5){
				int fl=1;
				while(fl!=0){
				int opr;
				cout<<"-----------------Safe Management Menu-----------------"<<endl;
				cout<<"1.Daily Profit"<<endl;
				cout<<"2.Total money"<<endl;
				cout<<"3.Exit"<<endl;
				cout<<"Choose an operation :";
				cin>>opr;
				if(opr==1){
				show_daily_profit();
					 
				}
				else if(opr==2){
				show_total_money();	
				}
				else if(opr==3){
				break;
				}
				else
				cout<<"Wrong operation please enter a correct operation number!!!"<<endl;
				
			}
			}
			
			else if(operation==6){
				flag_pp=0;
			}
			
			
		}
		flag_pp=1;
			break;
		case 3:
			cout<<"The program is closing"<<endl;
			cout<<"*****GoodBYE!!!*****"<<endl;
			flag=0;
			break;
			
		case 4:
			cout<<"Wrong user type please write correctly";
			break;
	}
}
return 0;
}

