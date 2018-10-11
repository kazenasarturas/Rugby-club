
#include <sstream>//For input/output string streams

//#include "Node.h"
#include "List.h"


//Nodes 1-5 created
Node *node1, *node2, *node3, *node4, *node5;
List *club;

int main()
{
	//variables initialized
	int ageNum=0;
	int searchNum=0;
	int direction;
	char choice;

	//Object myList created for List class
	List newList;

	//Space for nodes 1-5 created
	node1 = new(Node);
	node2 = new(Node);
	node3 = new(Node);
	node4 = new(Node);
	node5 = new(Node);

	string position= ""; //Position entry
	club=new(List);   //New list created

	//Sample nodes:5 Players created/////////////////////////////////////////////////////////////////////
	node1->linkb = NULL;
	node1->linkf = node2;
	node1->set_Name("Mark");
	node1->set_RegistrationNum("4287");
	node1->set_Team("U10");
	node1->set_Age(10);
	node1->set_Position("Hooker");
	/*
	node2->linkb = node1;
	node2->linkf = node3;
	node2->name="Alex";
	node2->registrationNum="4682";
	node2->team="U12";
	node2->age=11;
	node2->position="Centre";;

	node3->linkb = node2;
	node3->linkf = node4;
	node3->name="James";
	node3->registrationNum="6422";
	node3->team="U12";
	node3->age=12;
	node3->position="Flyhalf";;

	node4->linkb = node3;
	node4->linkf = node5;
	node4->name="Tom";
	node4->registrationNum="4741";
	node4->team="U19";
	node4->age=19;
	node4->position="Tighthead";;

	node5->linkb = node4;
	node5->linkf = NULL;
	node5->name="Peter";
	node5->registrationNum="3666";
	node5->team="U21";
	node5->age=20;
	node5->position="Prop";*/
	///////////////////////////////////////////////////////////////////////////////
	
	//Team search function called to search players by their team
	newList.searchPosition(position);

	//Search function called to search a specific player by a decimal number
	newList.Search(searchNum);


	LOOP:cout<<"\nCLUB LIST: " << endl;
	cout<<"Show linked list Forward (F) or Backward (B): ";
	cin>>choice;
	choice = toupper(choice);
	cout << endl;
	if (choice == 'F')
	    {
	    direction=1;
	    club->Nodes=node1;
		club->show_list(direction);
	    }

	else if (choice=='B')
		{
		direction=0;
		club->Nodes=node5;
		club->show_list(direction);
		}

	else{
		while(choice != 'F' || 'B'){
		cout<<"Invalid request."<<endl;
		cout<<"Try again"<<endl;
		goto LOOP;
		//return 0;
		//exit(1);
			}
		}

 	delete (node1);
	delete (node2);
	delete (node3);
	delete (node4);
	delete (node5);
	
	return 0;
}

//Function 
void List::searchPosition(string position)
{
	cout << "SEARCH PLAYER BY POSITION: ";
	cin >> position; //Team name entered by user:U10, U12, U19, U21
	cout << endl;

	if(position == "Hooker"){
		club->Nodes=node1;	//Node 1 selected
		club->Print();		//Print() function called:Diplays players details
	}
	else if(position == "Centre"){
		club->Nodes=node2;
		club->Print();				
	}
	else if(position == "Flyhalf"){
		club->Nodes=node3;
		club->Print();		
	}
	else if(position == "Tighthead"){
		club->Nodes=node4;
		club->Print();		
	}

	else if(position == "Prop"){
		club->Nodes=node5;
		club->Print();
	}
	
	else{
		cout<<"Invalid request."<<endl;
		cout<<"Check spelling and type players position with a capital letter."<<endl;
		cout<<"Please try again"<<endl;
		cout<<endl;
		List::searchPosition(position);
	}
}

//Player is selected by number by the user 
void List::Search(int searchNum)
{
	cout << "PLAYER DATABASE"<<endl;
	cout << "Choose between 1 to 5 to see a registered player: ";
	cin >> searchNum;
	cout << endl;
	if (searchNum == 1){
		club->Nodes=node1;
		club->Print();
		}

	else if( searchNum == 2){
		club->Nodes=node2;
		club->Print();
		}

	else if( searchNum == 3){
		club->Nodes=node3;
		club->Print();
		}

	else if( searchNum == 4){
		club->Nodes=node4;
		club->Print();
		}

	else if( searchNum == 5){
		club->Nodes=node5;
		club->Print();
		}
	
	else{
		cout<<"\nInvalid request."<<endl;
		cout<<"Please try again."<<endl;
		cout<<endl;
		List::Search(searchNum);
	}
}

//Function to travese the list.
//Function is given a direction to travese the list in and is
//called by the "if else" statement in the main program.
void List::show_list(int dir)
{
	if (dir==1){
	  while (Nodes !=NULL){
			Print();
			Nodes = Nodes->linkf;
			}
			cout<<"\n";
			}

	if (dir==0){
	   while(Nodes != NULL){
			Print();
			Nodes = Nodes->linkb;
			}
			cout<<"\n";
			}
}
///////////////////////////////////////////////////////////////////

void List::Print()
{
		cout<<" Player details: \n";
		cout<<" Name - "<<Nodes->get_Name();
	   /* cout<<" \n Reg. number - "<<Nodes->registrationNum;
		cout<<" \n Team - "<<Nodes->team;
	    cout<<" \n Age - "<<Nodes->age;
	    cout<<" \n Position - "<<Nodes->position;
		cout<<" \n\n";*/

 }
 