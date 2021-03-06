// Graphs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "interval_map.cpp"
#include "Graph.h"

int main()
{
    //std::cout << "Hello World!\n"; 
	graph gr; //unidirectional graph. edges are directional and belong to only one node!
	gr.addvertex("daddy ji");
	gr.addvertex("mamma ji");
	gr.addedge("daddy ji", "mamma ji", 2);
	gr.addvertex("b  jiji");
	gr.addedge("daddy ji", "b  jiji", 2);
	gr.addedge("mamma ji", "b  jiji", 2);
	gr.addvertex("s jiji");
	gr.addedge("daddy ji", "s jiji", 2); 
	gr.addedge("mamma ji", "s jiji", 2);
	gr.addvertex("raja");
	gr.addedge("daddy ji", "raja", 2);
	gr.addedge("mamma ji", "raja", 2);
	auto gr1 = gr;
	auto ma = gr.work.at("mamma ji");

	/*for testing the solution interval_map*/
	int const  val = 4;
	interval_map<int,std::string>  *ivm = new interval_map<int, std::string>("raja");
	ivm->assign(0,7,"kaka");
	ivm->assign(5, 15, "kaka");
	ivm->assign(4, 7, "babu");
	ivm->assign(1, 2, "babu");
	int i=std::numeric_limits<int>::lowest();
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
