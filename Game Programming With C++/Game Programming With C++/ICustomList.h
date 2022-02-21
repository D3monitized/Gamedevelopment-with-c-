#pragma once
class ICustomList {
public:
	virtual ~ICustomList(){}
	virtual void PushBack(); 
	virtual void PopBack(); 
	virtual void Size(); 
	virtual void Count(); 
};
