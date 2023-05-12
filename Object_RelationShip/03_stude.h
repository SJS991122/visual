#pragma once
#include <string>

class Teacher
{
	std::string name;
public:
	Teacher(const std::string& name)
		:name(name)
	{}
	auto GetName()const { return name; }
	void SetNume(const std::string& name) { this->name = name; }
};