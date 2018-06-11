#include "stdafx.h"
#include "List.h"
#include "Queue.h"
#include "Edge.h"
#include "ConsoleNav.h"
#include "AdjacencyList.h"
#include "PriorityQueue.h"
#include "Navigation.h"
#include <iostream>
#include <windows.h>
#include <vld.h>			// Memory leak testing

int main()
{
	bool tests = false;
	
	if (tests) {
		//Queue<Edge> q1;
		//Edge v1, v2, v3, v4;
		///*v1 = new Edge();
		//v2 = new Edge();*/
		//q1.enqueue(Edge());
		//q1.enqueue(Edge());
		//std::cout << q1.isEmpty() << std::endl;
		////std::cout << q1.dequeue()->i << std::endl << q1.dequeue()->j << std::endl;	
		//std::cout << q1.isEmpty() << std::endl;
		//v1 = q1.dequeue();
		//v2 = q1.dequeue();
		//system("Pause");
		//

		//AdjacencyList li(6);
		//li.addEdge(0, 2, 5);
		//li.addEdge(1, 3, 10);
		//li.addEdge(2, 4, 15);

		//std::cout << li.toString() << std::endl;
		//try {
		//	li.convertToUndirected();
		//}
		//catch (std::logic_error e) {
		//	//empty catch block
		//}
		//

		//std::cout << li.toString() << std::endl;
		
	}
	
	// menu part
	while (true) {
		int menu_choice = menu(40, 10, "Select Mode", 3, "Manual Testing", "Time Testing", "Exit");
		system("cls");

		switch (menu_choice) {
		case 1: manualMenu(); break;
		case 2: performTimeTest(); break;
		case 3: return 0;
		}
	}


    return 0;
}

