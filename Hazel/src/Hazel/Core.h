#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)  //��Ԥ�������������HZ_BUILD_DLL,ȷ����HAZEL���������
	#else
		#define HAZEL_API __declspec(dllimport)  //��SandBox�������
	#endif
#else 
    #error Hazel only supports Winodws!
#endif