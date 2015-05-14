#include "stdafx.h"
#include "IAmALibrary.h"

// This is an example of an exported variable
IAMALIBRARY_API int nIAmALibrary=0;

// This is an example of an exported function.
IAMALIBRARY_API INT64 SampleFunction(INT64 a, INT64 b)
{
	return a + b;
}
