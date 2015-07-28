// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the IAMALIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// IAMALIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef IAMALIBRARY_EXPORTS
#define IAMALIBRARY_API __declspec(dllexport)
#else
#define IAMALIBRARY_API __declspec(dllimport)
#endif

extern IAMALIBRARY_API int nIAmALibrary;

extern IAMALIBRARY_API struct CarrierObject;

extern "C" IAMALIBRARY_API int SampleFunction(int a, int b);

extern "C" IAMALIBRARY_API void WriteContent(CarrierObject* obj);
