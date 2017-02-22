#ifndef TEST_ENGINE
#define TEST_ENGINE
#include "GLFW\glfw3.h"
#pragma comment(lib,"opengl32.lib")
#include <iostream>
using namespace std;
class Engine
{
public:
	static int SCREEN_WIDTH;
	static int SCREEN_HEIGHT;
	
	Engine();
	~Engine();
	
	bool Initialize(char* windowTitle);

	void Update();
	void Render(int background_color_r, int background_color_g, int background_color_b);
private:
	static GLFWwindow* window;
};


#endif
