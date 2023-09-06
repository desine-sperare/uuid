#include <random>
#include <ctime>
#include <stdint.h>
#include <regex>
#include <string>
#include "uuid.hpp"

namespace timlibs
{
	std::string baseline = "0123456789abcdef";

	uint16_t generate_random_number()
	{
		std::random_device device;
		std::mt19937 engine;
		engine.seed(device());
		return engine() % 16;
	}

	std::string generate_uuid()
	{
		std::string uuid;
		for (int i = 0; i < 32; i++) {
			uuid += baseline[generate_random_number()];
			if (i == 7 || i == 11 || i == 15 || i == 19) uuid += '-';
		}
		return uuid;
	}

	bool is_correct(const std::string& uuid)
	{
		static const std::regex r( "[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}" );
		return std::regex_match(uuid, r);
	}
};
