//vector_math.h

#pragma once

#include <math.h>
#include <SFML/System/Vector2.hpp>
typedef sf::Vector2f vector2d;

class vector_math {
public :
float dot (const vector2d& vec1, const vector2d& vec2);
void rotate (Vec2& res, const Vec2& v, float angle);
vector2d rotate (Vec2& v, float angle);

};
