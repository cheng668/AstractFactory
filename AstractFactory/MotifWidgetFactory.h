#pragma once
#include "WidgetFactory.h"
class Window;
class ScorllBar;
class MotifWidgetFactory :
	public WidgetFactory
{
public:
	MotifWidgetFactory();
	virtual ~MotifWidgetFactory();

	virtual Window* CreateWindow() override;
	virtual ScorllBar* CreateScrollBar() override;
};

