#include <DreamBit.h>

class Sandbox : public DreamBit::Application
{
public:
	Sandbox() {

	
	}

	~Sandbox() {

	}
};

DreamBit::Application* DreamBit::CreateApplication() {
	return new Sandbox();
}