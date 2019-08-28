#include "Engine.h"
#include "Actor.h"
#include <conio.h>


Engine::Engine()
{
	bIsRunning = true;
}


Engine::~Engine()
{
	for (auto SelectActor : Actors)
	{
		delete SelectActor;
		SelectActor = nullptr;
	}

	Actors.clear();
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

	if (KeyCode == 'q')
	{
		SetIsRuninng(false);
	}
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
