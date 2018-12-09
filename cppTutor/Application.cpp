#include <iostream>
#include <string>


class Entity
{
private:
	std::string m_Name;
	int m_Score;
public:
	Entity()
		:m_Name("Unknown"),m_Score(0) // initilize in order
	{	
	}
	Entity(const std::string& name) 
		:m_Name(name)
	{
	}
	const std::string& GetName() const
	{
		return m_Name;
	}
};

int main()
{
	const Entity e;
	const Entity e1("XiaoZhen");

	std::cout << e.GetName() << std::endl;
	std::cout << e1.GetName() << std::endl;

	e.GetName();
	std::cin.get();
}