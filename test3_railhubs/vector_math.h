//vector_math.h

#pragma once

#include <math.h>
#include <SFML/System/Vector2.hpp>
//typedef sf::Vector2f vector2d;

class vector_math {

public:

    float dot (const sf::Vector2f& vec1, const sf::Vector2f& vec2);

    {
    return vec1.x*vec2.x + vec1.y*vec2.y;

    }

    void rotate (sf::Vector2f& res, const sf::Vector2f& v, float angle);
    {
        const float rad = DEG2RAD * angle;
        const float sin0 = sin(rad);
        const float cos0 = cos(rad);
        res.x = v.x * cos0 + v.y * -sin0;
        res.y = v.x * sin0 + v.y * cos0;
    }

    sf::Vector2f :rotate (sf::Vector2f& v, float angle);
    {
       Vec2 res;
       rotate(res, v, angle);
       return res;
    }

     double Distance_cal(sf::Vector2f vec1,sf::Vector2f vec2)
     {
            double xL= (vec2.x-vec1.x)^2;
            double yL= (vec2.y-vec1.y)^2;

         return  (sqrt(xL/yL));
     }

    double Drectional_dxr(double L,sf::Vector2f C_vec1,sf::Vector2f D_vec2)
    {
        double S;
        double mx =D_vec2.x-C_vec1.x;
        double my= D_vec2.x-C_vec1.x;
        S = (mx)/(my);


        return (S*(mx/L)+(mx/L)/S);
    }
