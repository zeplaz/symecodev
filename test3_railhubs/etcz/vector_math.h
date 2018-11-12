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


float vector_math::dot (const vector2d& vec1, const vector2d& vec2);

{
return vec1.x*vec2.x + vec1.y*vec2.y;
}


void vector_math::rotate (Vec2& res, const Vec2& v, float angle);
{
    const float rad = DEG2RAD * angle;
    const float sin0 = sin(rad);
    const float cos0 = cos(rad);
    res.x = v.x * cos0 + v.y * -sin0;
    res.y = v.x * sin0 + v.y * cos0;
}

vector2d vector_math::rotate (Vec2& v, float angle);
{
   Vec2 res;
   rotate(res, v, angle);
   return res;
}
