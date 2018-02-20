#include <iostream>
#include "forth.h"

int main()
{
	names(dup2);
	using rtnstk = build_return_stack<
		colon<dup2, dup, dup>,
		lit<7>,
		lit<3>,
		lit<8>,
		lit<10>,
		invert
		>::run;
	using env = environment<nil, rtnstk, initialize_dictionary::run>;
	forth::run<env>::dstack::tochars();
}
