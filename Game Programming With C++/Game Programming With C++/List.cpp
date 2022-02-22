#include <iostream>

//TODO: Fix remove functions

template <typename T>
class List {

	
public:
	T* content;
	int Count = 0;
	int Size = 0;


	void Add(T& element)
	{
		if (Count < Size)
		{
			content[Count] = element;
			Count++;
		}
		else
		{
			Expand();
			content[Count] = element;
			Count++;
		}
	}

	void Expand()
	{
		T* temp = content;
		content = new T[Size + 1];

		for (size_t i = 0; i < Size; i++)
		{
			content[i] = temp[i];
		}
		temp = nullptr;
		Size++;
	}

	void Remove(T &element)
	{
		for (size_t i = 0; i < Size; i++)
		{
			if (content[i] == element)
			{			
				Adjust(i);
			}
		}
	}

	void RemoveAt(int position)
	{
		//delete content[position];
		Adjust(position);
	}

	void Adjust(int position)
	{
		bool hasIterratedThroughRemoved = false;
		T temp[Size - 1];
		int tempSize = Size;

		for (size_t i = 0; i < tempSize; i++)
		{
			if (i == position)
			{
				hasIterratedThroughRemoved = true;
				tempSize--;
			}

			if (hasIterratedThroughRemoved)
			{
				temp[i] = content[i + 1];
			}
			else
			{
				temp[i] = content[i];
			}
		}
	}

	T& operator [](int pos)
	{
		return content[pos];
	}

	List<T>(int size = 0)
	{
		delete[] content; 
		content = new T[size];
		Size = size;
		Count = 0;
	}

	/*iterator std::begin() { return content[0]; }
	iterator std::end() { return content[Count]; }
	iterator_const std::begin() const { return content[0]; }
	iterator_const std::end() const { return content[Count]; }*/
};