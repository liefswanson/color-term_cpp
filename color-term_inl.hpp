// Copyright (c) 2015 Lief Swanson
// URL           https://github.com/liefswanson/color-termpp

#pragma once

#include <string>

namespace term {
	using namespace std;
	
	const string reset  = "\e[0m";

	const string black  = "\e[30m";
	const string red    = "\e[31m";
	const string green  = "\e[32m";
	const string yellow = "\e[33m";
	const string blue   = "\e[34m";
	const string purple = "\e[35m";
	const string cyan   = "\e[36m";
	const string white  = "\e[37m";

	namespace bg {
		const string black  = "\e[40m";
		const string red    = "\e[41m";
		const string green  = "\e[42m";
		const string yellow = "\e[43m";
		const string blue   = "\e[44m";
		const string purple = "\e[45m";
		const string cyan   = "\e[46m";
		const string white  = "\e[47m";

		namespace light {
			const string black  = "\e[100m";
			const string red    = "\e[101m";
			const string green  = "\e[102m";
			const string yellow = "\e[103m";
			const string blue   = "\e[104m";
			const string purple = "\e[105m";
			const string cyan   = "\e[106m";
			const string white  = "\e[107m";
		}
	}

	namespace light {
		const string on  = "\e[1m";
		const string off = "\e[22m";
	}
	
	namespace ital {
		const string on  = "\e[3m";
		const string off = "\e[23m";
	}

	namespace uline {
		const string on  = "\e[4m";
		const string off = "\e[24m";
	}

	namespace blink {
		const string on  = "\e[5m";
		const string off = "\e[25m";
	}
}
