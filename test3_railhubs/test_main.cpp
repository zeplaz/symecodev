
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>

#include <time.h>

#include "trainz.h"
#include "R_linez.h"
#include "railhubz.h"

int main ()

{




int total_trainz=0;
int total_hubz =0;
int total_linez=0;
clock_t start_prog_t =clock();

sf::RenderWindow window (sf::VideoMode(640*2,480*2), "Test_hub1");
window.setFramerateLimit(60);


sf::Vector2f sampevec(20.f, 100.f);



time_t currnttime = start_prog_t;
railhubz mtl(currnttime,sampevec,total_hubz);

//railhubz mtl(currnttime, ,total_hubz );

    while (window.isOpen())
    { sf::Event prevent;

    while (window.pollEvent(prevent))
            {
                {if (prevent.type ==sf::Event::Closed)
                            window.close();
                    }

                {if (prevent.type == sf::Event::Resized)
                    glViewport(0, 0, prevent.size.width, prevent.size.height);
                }
            }
            window.clear();
// draw
            //window.draw();
        //  window.draw();
        window.clear();
        
                mtl.draw(window);
                window.display();

    }


    return 0;
}
