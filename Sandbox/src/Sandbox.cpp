#include "Hazel.h"

namespace Hazel {
	__declspec(dllimport)void Print();
}

class Sandbox : public Hazel::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Hazel::Application* Hazel::CreateApplication() {
	return new Sandbox();
}