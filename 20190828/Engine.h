#pragma once
#include <vector>

using namespace std;

class Engine
{
public:
	Engine();
	~Engine();

	bool GetIsRuninng();
	void SetIsRuninng(bool NewState);

	void Run();

	virtual void AddActor(class Actor* NewActor);
protected:
	virtual void Input();
	virtual void Process();
	virtual void Render();

	bool bIsRunning;

	vector<class Actor*> Actors;
};

