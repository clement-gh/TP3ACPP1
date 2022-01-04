#pragma once
#include <iostream>

#include "book.h"



#ifndef READER_H
#define READER_H
namespace reader {
class Reader
{
private:

	std::string _firstname;// Pr�nom
	std::string _surname; //Nom
	std::string _id;
	std::vector<int> _borrowedbooks;
	//::vector<borrow::Borrow>  _liblistborrow =  _listofborrow;

public:
	Reader(std::string firstname, std::string surname, std::string id);

	std::string getfirstname()const;
	std::string getsurname()const;
	std::string getid()const;
	void setid(std::string id);
	std::vector<int> getlistborrowedbook();
	void addlistborrowedbook(int isbnbook); //ajout livre dans la liste

	
};

};

#endif