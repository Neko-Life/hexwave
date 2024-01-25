#pragma once

#include <iostream>
#include "video_manager.h"
#include <glad/gl.h>

class window {

public:
	window();

	~window();

	void window_loop();

	void close_window();

private:

	struct GLFWwindow* glfw_window{nullptr};

	video_manager manager{};

	bool testing_export{false};

	GLuint tex_handle;

};