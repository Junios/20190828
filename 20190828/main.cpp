#include "Engine.h"
#include "Player.h"
#include "Monster.h"

int main()
{
	Engine* engine = new Engine();
	engine->AddActor(new Player());
	engine->AddActor(new Monster());


	engine->Run();

	delete engine;
	engine = nullptr;

	return 0;
}