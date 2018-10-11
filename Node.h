

#ifndef NODE
#define NODE

#include<iostream>
using namespace std;
/*
//Node class///////////////////////////////////////////////////////////////////////////////
class Node{
	public:
		Node *linkb;
		Node *linkf;
		char* name;
		char* registrationNum;
		char* team;
		int age;
		char* position;

	public:
		Node(){
			name=new(char[10]);
			registrationNum=new(char[10]);
			team=new(char[10]);
			position=new(char[10]);
			age=0;
		};

};
#endif
*/
////////////////////////////////////////////////////////////////////////////////////////////


class Node{
	private:
		char name[15];
		char registrationNum[15];
		char team[15];
		int age;
		char position[15];

	public:
		Node *linkb;
		Node *linkf;
		//Default contructor
		Node(){
			strcpy_s(name, "");
			strcpy_s(registrationNum, "");
			strcpy_s(team, "");
			strcpy_s(position, "");
			age=0;
		}
		
		//Regular contructor
		Node(char* n, char* reg, char* t, int a, char* p){
			strcpy_s(name, n);
			strcpy_s(registrationNum, reg);
			strcpy_s(team, t);
			strcpy_s(position, p);
			age=a;
		}

		//Mutators
		void set_Name(char*);
		void set_RegistrationNum(char* reg);
		void set_Team(char* t);
		void set_Position(char* p);
		void set_Age(int a);

		//Accessors
		char* get_Name();
		char* get_RegistrationNum();
		char* get_Team(); 
		char* get_Position();
		int	get_Age();

		
};


void Node::set_Name(char* n){
			n=name;
		}


void Node::set_Name(char* n){
			n=name;
		}


char* Node::get_Name(){
	return name;
}

void Node::set_RegistrationNum(char* reg){
	strcpy_s(registrationNum, reg);
}

char* Node::get_RegistrationNum(){
	return &registrationNum[0];
}

void Node::set_Team(char* t){
	strcpy_s(team, t);
}

char* Node::get_Team(){
	return &team[0];
}

void Node::set_Position(char* p){
	strcpy_s(position, p);
}

char* Node::get_Position(){
	return &position[0];
}

void Node::set_Age(int a){
	age = a;
}

int Node::get_Age(){
	return age;
}

#endif