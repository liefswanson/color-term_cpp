// Copyright (c) 2015 Lief Swanson
// URL           https://github.com/liefswanson/color-termpp

#pragma once

#include <string>

namespace term {
	using namespace std;
	
	const extern string reset;

	const extern string black;
	const extern string red;
	const extern string green;
	const extern string yellow;
	const extern string blue;
	const extern string purple;
	const extern string cyan;
	const extern string white;

	namespace bg {
		const extern string black;
		const extern string red;
		const extern string green;
		const extern string yellow;
		const extern string blue;
		const extern string purple;
		const extern string cyan;
		const extern string white;

		namespace light {
			const extern string black;
			const extern string red;
			const extern string green;
			const extern string yellow;
			const extern string blue;
			const extern string purple;
			const extern string cyan;
			const extern string white;
		}
	}

	namespace light {
		const extern string on;
		const extern string off;
	}
	
	namespace ital {
		const extern string on;
		const extern string off;
	}

	namespace uline {
		const extern string on;
		const extern string off;
	}

	namespace blink {
		const extern string on;
		const extern string off;
	}
}
