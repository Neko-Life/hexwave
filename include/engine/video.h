#pragma once

#include "utilities/json_utilities.h"

struct option {
	std::string id{};
	std::string name{};
	std::string video_id{};
};

struct video {
	std::string id{};
	std::string name{};
	float length;
	std::vector<option> options{};

	video& fill_from_json(const json* j);

	json to_json() const;
};