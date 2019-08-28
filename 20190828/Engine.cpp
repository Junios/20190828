#include "Engine.h"
#include "Actor.h"
#include <conio.h>


Engine::Engine()
{
	bIsRunning = true;
}


Engine::~Engine()
{
}

bool Engine::GetIsRuninng()
{
	return bIsRunning;
}

void Engine::SetIsRuninng(bool NewState)
{
	bIsRunning = NewState;
}

void Engine::Run()
{
	for (auto SelectActor : Actors)
	{
		SelectActor->BeginPlay();
	}

	while (bIsRunning)
	{
		Input();
		Process();
		Render();
	}
}

void Engine::AddActor(Actor * NewActor)
{
	if (NewActor != nullptr)
	{
		Actors.push_back(NewActor);
	}
}

void Engine::Input()
{
	int KeyCode = _getch();
}

void Engine::Process()
{
	for (auto SelectActor : Actors)
	{
		SelectActor->Tick();
	}
}

void Engine::Render()
{
	for (auto SelectActor : Actors)
	{
		SelectActor->Render();
	}
}
