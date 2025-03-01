#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)  //在预处理器中添加了HZ_BUILD_DLL,确保在HAZEL中是输出的
	#else
		#define HAZEL_API __declspec(dllimport)  //在SandBox是输入的
	#endif
#else 
    #error Hazel only supports Winodws!
#endif