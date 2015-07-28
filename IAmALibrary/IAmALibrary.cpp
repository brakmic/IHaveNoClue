#include "stdafx.h"

// This is an example of an exported variable
IAMALIBRARY_API int nIAmALibrary=0;

IAMALIBRARY_API struct CarrierObject
{
    int a_value;
};

// This is an example of an exported function.
IAMALIBRARY_API int SampleFunction(int a, int b)
{
	return a + b;
}

IAMALIBRARY_API void WriteContent(CarrierObject* obj)
{
    if(obj != NULL)
    {
        printf("You gave me: %d\n", obj->a_value);
    }
    else
    {
        printf("How about sending me a valid object with some value in it?\n");
    }
}