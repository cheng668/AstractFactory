#pragma once
#include <iostream>
using namespace std;
class Window
{
public:

	Window()
	{
		cout << "Contruct Window" << endl;
	}

	virtual ~Window()
	{
		cout << "delete Window" << endl;

	}
};

