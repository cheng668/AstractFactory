#include "Window.h"
#include "WidgetFactory.h"
#include "MotifWidgetFactory.h"
#include "PMWidgetFactory.h"
#include "Window.h"
#include "ScorllBar.h"
int main()
{
	/*此代码为了便于测试，省略了工厂的单例创建模式，
	不建议参考本代码对工厂类的创建方式*/
	WidgetFactory* factoryPM = new PMWidgetFactory();
	ScorllBar* ScrPM = factoryPM->CreateScrollBar();
	Window* WinPM = factoryPM->CreateWindow();

	WidgetFactory* factoryMotif = new MotifWidgetFactory();
	ScorllBar* ScrMotif = factoryMotif->CreateScrollBar();
	Window* WinMotif = factoryMotif->CreateWindow();

	delete factoryPM;
	delete ScrPM;
	delete WinPM;
	delete factoryMotif;
	delete ScrMotif;
	delete WinMotif;
	_CrtDumpMemoryLeaks();
	system("pause");
	return 0;
}

/*
output:
	construct WidgetFactory
	construct PMWidgetFactory
	Contruct ScorllBar
	Contruct PMScorllBar
	Contruct Window
	contruct PMWindow
	construct WidgetFactory
	construct MotifWidgetFactory
	Contruct ScorllBar
	Contruct MotifScrollBar
	Contruct Window
	contruct MotifWindow
	delete PMWidgetFactory
	delete WidgetFactory
	delete PMScorllBar
	delete ScorllBar
	delete PMWindow
	delete Window
	delete MotifWidgetFactory
	delete WidgetFactory
	delete PMScorllBar
	delete ScorllBar
	delete MotifWindow
	delete Window
*/