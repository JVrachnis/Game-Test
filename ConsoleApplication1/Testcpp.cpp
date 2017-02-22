#include <iostream>
#include "enginge\engine.h"
using namespace std;

int main() {
	int background_color_r = 0;
	int background_color_g = 1;
	int background_color_b = 0;
	static char* windowsName = "test";
	cout << "hello world \n";
	Engine engine;
	engine.Initialize("test");
	while (true)
	{

		engine.Render(background_color_r, background_color_g, background_color_b);
		engine.Update();

	}
	return 0;
}