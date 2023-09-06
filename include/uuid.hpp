#pragma once

#include <stdint.h>
#include <string>

namespace timlibs
{
	uint16_t generate_random_number();
	std::string generate_uuid();
	bool is_correct(const std::string& uuid);
};
