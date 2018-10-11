

#ifndef LIST
#define LIST

#include<iostream>
using namespace std;

#include "Node.h"

//List class///////////////////////////////////////////////////////////////////////////////
class List{
public:
    Node* Nodes;
	List(){};
	void Search(int searchNum);		      //To search for player  
	void searchPosition(string position); //To search for player by position
	void show_list(int);		          //To traverse list
	void Print();					      //To print player details
	string position;
};
////////////////////////////////////////////////////////////////////////////////////////////

#endif