#include "WidgetFactory.h"
#include "PMWindow.h"

WidgetFactory::WidgetFactory()
{
	cout << "construct WidgetFactory" << endl;
}


WidgetFactory::~WidgetFactory()
{
	cout << "delete WidgetFactory" << endl;
	
}

Window* WidgetFactory::CreateWindow()
{
	cout << "WidgetFactory createwindow" << endl;
	return new PMWindow();
}
