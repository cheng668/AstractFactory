#pragma once
#include "WidgetFactory.h"
class Window;
class ScorllBar;
class PMWidgetFactory :
	public WidgetFactory
{
public:
	PMWidgetFactory();
	virtual ~PMWidgetFactory();

	virtual Window* CreateWindow() override;
	virtual ScorllBar* CreateScrollBar() override;
};

