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


#include <iostream>
#include <cstdlib>

#define MAX 200

class AdjacencyMatrix

{
    private:

        int n;
        int **adj;
        bool *visited;

    public:

        AdjacencyMatrix(int n)

        {

            this->n = n;
            visited = new bool [n];
            adj = new int* [n];
            for (int i = 0; i < n; i++)
            {
                adj[i] = new int [n];
                for(int j = 0; j < n; j++)

                {
                    adj[i][j] = 0;
                }
            }
        }

        void add_edge(int origin, int destin)
        {
            if( origin > n || destin > n || origin < 0 || destin < 0)
            {
                printf("Invalid edge!\n");
            }
            else
            {
                adj[origin - 1][destin - 1] = 1;
            }
        }
