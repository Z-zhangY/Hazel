#include<Hazel.h>

//SandBox��̳�Hazel��
class SandBox :public Hazel::Application  
{
public:
	SandBox()
	{

	}
	~SandBox()
	{
		 
	}
};
Hazel::Application* Hazel::CreateApplication()
{
	return new SandBox();
}

