#include "stdafx.h"
#include "MathLibrary.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	// Initialize a Fibonacci relation sequence.
	fibonacci_init(1, 1);

	// Write out the sequence values until overflow.
	do {
		System::Console::WriteLine(fibonacci_index() + ": " + fibonacci_current());
	} while (fibonacci_next());
	
	return 0;
}
