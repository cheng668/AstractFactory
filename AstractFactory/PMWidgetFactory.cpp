#include "PMWidgetFactory.h"
#include "PMScorllBar.h"
#include "PMWindow.h"

PMWidgetFactory::PMWidgetFactory() :WidgetFactory()
{
	cout << "construct PMWidgetFactory" << endl;
}


PMWidgetFactory::~PMWidgetFactory()
{
	cout << "delete PMWidgetFactory" << endl;

}

Window* PMWidgetFactory::CreateWindow()
{
	return new PMWindow();
}

ScorllBar* PMWidgetFactory::CreateScrollBar()
{
	return new PMScorllBar();
}