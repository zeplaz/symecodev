//vector_math.h

#pragma once

#include <math.h>
#include <SFML/System/Vector2.hpp>
typedef sf::Vector2f vector2d;

float dot (const vector2d& vec1, const vector2d& vec2);

{
return vec1.x*vec2.x + vec1.y*vec2.y;

}
