#pragma once

#include <stdio.h>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Window
{
public:
	Window();
	Window(GLint windowWidth, GLint windowHeight);

	int Initialize();

	GLint GetBufferWidth() { return bufferWidth; }
	GLint GetBufferHeight() { return bufferHeight; }

	bool GetShouldClose() { return glfwWindowShouldClose(mainWindow); }

	bool* GetKeys() { return keys; }
	GLfloat getXChange();
	GLfloat getYChange();

	void SwapBuffers() { glfwSwapBuffers(mainWindow); }

	~Window();

private:
	GLFWwindow *mainWindow;

	GLint width, height;
	GLint bufferWidth, bufferHeight;

	bool keys[1024];

	GLfloat lastX;
	GLfloat lastY;
	GLfloat xChange;
	GLfloat yChange;
	bool mouseFirstMoved;

	void createCallBacks();
	static void handleKeys(GLFWwindow* window, int key, int code, int action, int mode);
	static void handleMouse(GLFWwindow* window, double xPos, double yPos);
};
