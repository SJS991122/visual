#pragma once
#include<iostream>
#include"03_stude.h"
#include"03_teach.h"

class Student
{
	std::string name;
	int count;
public:
	Student(const std::string& name, int count = 0)
		:name(name), count(count)
	{}
	auto GetName()const { return name; }
	void SetNume(const std::string& name) { this->name; }

	auto GetName()const { return count; }
	void SetNume(const std::string& count) { this->count; }

};