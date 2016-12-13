#include "MotifWidgetFactory.h"
#include "MotifScrollBar.h"
#include "MotifWindow.h"

MotifWidgetFactory::MotifWidgetFactory() :WidgetFactory()
{
	cout << "construct MotifWidgetFactory" << endl;

}


MotifWidgetFactory::~MotifWidgetFactory()
{
	cout << "delete MotifWidgetFactory" << endl;

}

Window* MotifWidgetFactory::CreateWindow()
{
	return new MotifWindow();
}

ScorllBar* MotifWidgetFactory::CreateScrollBar()
{
	return new MotifScrollBar();

}