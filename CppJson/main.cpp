#include <iostream>
#include "Array.h"
#include "Object.h"
#include "Json.h"

int main()
{
	Array arr{ "dsad", 2, 4, 3.12, true, nullptr };
	arr += 1;
	return 0;
}