// DataStructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include "LinkedList.cpp"

int main()
{
	LinkedList<int> li;
	li.getNode(10);
	li.getNode(11);
	li.getNode(12);
	li.getNode(12);
	li.getNode(13);
	li.getNode(15);
	LinkedList<std::string> li1;
	li1.getNode("a");
	li1.getNode("b");
	li1.getNode("c");
	li1.getNode("d");
	li1.getNode("e");
	li1.getNode("f");
	li.removeNode(3);
	li1.removeNode(3);
	LinkedList<std::string> *li1rev;
	li1rev = li1.reverse();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
