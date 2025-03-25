#pragma once

#ifdef DB_PLATFORM_WINDOWS
	#ifdef DB_BUILD_DLL
		#define DreamBit_API __declspec(dllexport)
	#else
		#define DreamBit_API __declspec(dllimport)
	#endif
#else
	#error execution error, DreamBit only supports Windows operating systems
#endif 

