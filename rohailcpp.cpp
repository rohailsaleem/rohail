#include<iostream>
#include"rohail_linked_list.h"
using namespace std;
int main()
{
	list obj;
	obj.generatenode(25);
	obj.generatenode(50);
	obj.generatenode(90);
	obj.generatenode(40);
	cout << "\n--------------------------------------------------\n";
	cout << "---------------Displaying All nodes---------------";
	cout << "\n--------------------------------------------------\n";
	obj.screen();
	cout << "\n--------------------------------------------------\n";
	cout << "-----------------Inserting At End-----------------";
	cout << "\n--------------------------------------------------\n";
	obj.generatenode(55);
	obj.screen();
	cout << "\n--------------------------------------------------\n";
	cout << "----------------Inserting At Start----------------";
	cout << "\n--------------------------------------------------\n";
	obj.accomodate_start(50);
	obj.screen();
	cout << "\n--------------------------------------------------\n";
	cout << "-------------Inserting At Particular--------------";
	cout << "\n--------------------------------------------------\n";
	obj.accomodate_position(5, 60);
	obj.screen();
	cout << "\n--------------------------------------------------\n";
	cout << "---------------Deleting At Start-----------------";
	cout << "\n--------------------------------------------------\n";
	obj.terminate_first();
	obj.screen();
	cout << "\n--------------------------------------------------\n";
	cout << "-----------------Deleing At End-------------------";
	cout << "\n--------------------------------------------------\n";
	obj.terminate_last();
	obj.screen();
	cout << "\n--------------------------------------------------\n";
	cout << "--------------Deleting At Particular--------------";
	cout << "\n--------------------------------------------------\n";
	obj.terminate_position(4);
	obj.screen();
	cout << "\n--------------------------------------------------\n";
	system("pause");
	return 0;
}
