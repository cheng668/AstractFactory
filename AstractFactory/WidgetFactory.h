#pragma once
#include <iostream>
using namespace std;
class Window;
class ScorllBar;
class WidgetFactory
{
public:
	WidgetFactory();
	virtual ~WidgetFactory();
	/*接口函数可以是带默认实现*/
	virtual ScorllBar* CreateScrollBar() = 0;
	virtual Window* CreateWindow();
};

