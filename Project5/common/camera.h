#ifndef CAMERA_HPP
#define CAMERA_HPP

#include <glm/glm.hpp>

class Camera {
public:
    GLFWwindow* window;
    glm::mat4 viewMatrix;
    glm::mat4 projectionMatrix;
    glm::mat4 orthoprojectionMatrix;
    // Initial position : on +Z
    glm::vec3 position;
    glm::vec3 direction;
    glm::vec3 right;
    // Initial horizontal angle : toward -Z
    float horizontalAngle;
    // Initial vertical angle : none
    float verticalAngle;
    // Field of View
    float FoV;
    float speed; // units / second
    float mouseSpeed;
    float fovSpeed;

    Camera(GLFWwindow* window);
    void update();
};

#endif
