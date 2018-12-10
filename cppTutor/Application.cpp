#include <iostream>
#include <string>

using namespace std::string_literals;
class Entity
{
private:
	std::string m_Name;
	int m_Score;
public:
	Entity(int mScore)
		:m_Name("Unknown"), m_Score(mScore) {} // initilize in order
	
	Entity(const std::string& name) 
		:m_Name(name),m_Score(0){}

	const std::string& GetName() const
	{
		return m_Name;
	}
};

struct Vector2
{
	float x, y;

	Vector2(float x, float y)
		:x(x),y(y){}

	Vector2 Add(const Vector2& other) const
	{
		return operator+(other);
	}

	Vector2 operator+(const Vector2& other) const
	{
		return Vector2(x + other.x, y + other.y);
	}

	Vector2 Multiply(const Vector2& other) const
	{
		return operator*(other);
	}

	Vector2 operator*(const Vector2& other) const
	{
		return Vector2(x * other.x, y * other.y);
	}
};

int main()
{
	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.5f, 1.5f);
	Vector2 powerup(1.1f, 1.1f);

	Vector2 result1 = position.Add(speed.Multiply(powerup));
	Vector2 result2 = position + speed * powerup;
	std::cout << result1.x << " " << result1.y << std::endl;
	std::cout << result2.x << " " << result2.y << std::endl;

	std::cin.get();
}