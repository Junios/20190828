#pragma once
#include "Object.h"
class Actor : public Object
{
public:
	Actor();
	~Actor();

	//Event �Լ�
	virtual void BeginPlay() = 0;

	virtual void Tick() = 0;

	virtual void Render() = 0;
};

