class ICustomList {
public:
	virtual ~ICustomList(){}
	virtual void PushBack();
	virtual void PopBack(); 
	virtual int Count();
	virtual int Size(); 
};