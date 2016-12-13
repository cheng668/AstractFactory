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
	/*�ӿں��������Ǵ�Ĭ��ʵ��*/
	virtual ScorllBar* CreateScrollBar() = 0;
	virtual Window* CreateWindow();
};

