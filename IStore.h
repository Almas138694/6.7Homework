#pragma once
#include <iostream>
using namespace std;

class IStore
{
public:
	virtual void Show() = 0;
	virtual ~IStore() = default;
};