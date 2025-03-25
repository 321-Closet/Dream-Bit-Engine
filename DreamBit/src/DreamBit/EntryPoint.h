#pragma once


#ifdef DB_PLATFORM_WINDOWS


extern DreamBit::Application* DreamBit::CreateApplication();

int main(int argj, char** argk) {
	printf("Dream Bit Engine Started!");
	auto app = DreamBit::CreateApplication();

	app->Run();
	delete app;
}
#endif