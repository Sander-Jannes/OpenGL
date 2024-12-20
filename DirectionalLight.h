#pragma once

#include "Light.h"

class DirectionalLight : public Light
{
public:
	DirectionalLight();
	DirectionalLight(GLuint shadowWidth, GLuint shadowHeight, GLfloat red, GLfloat green, GLfloat blue, GLfloat ambientIntensity, GLfloat xDirection,
		GLfloat yDirection, GLfloat zDirection, GLfloat dIntensity);

	void useLight(GLfloat ambientIntensityLocation, GLfloat ambientColorLocation,
		GLfloat diffuseIntensityLocation, GLfloat directionLocation);


	glm::mat4 CalculateLightTransform();

	~DirectionalLight();

private:
	glm::vec3 direction;
};
