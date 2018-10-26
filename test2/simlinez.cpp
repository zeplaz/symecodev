
//SimLinez.cpp
#include <iostream>
#include <SFML/Graphics.hpp>

#include"Menu.h"

#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>


// .setFillColor(sf::Color()); for shapes.

int main()
{

sf::RenderWindow window (sf::VideoMode(640*2,480*2), "Linesimez");
window.setFramerateLimit(60);

//sf::RenderWindow window2 (sf::VideoMode(640,480), "Mapdial");
//window2.setFramerateLimit(60);
    // soundProvider;
    ServiceLocator::RegisterServiceLocator(&soundProvider);
//linestuff
struct linez

{
int id;
//orderpair1
float x1 = 0;
float y1= 0;

//oswepe1
float x2 =0;
float y2= 0;
};

int linecounter =0;

struct linez pline1;
linecounter++;
pline1.id = linecounter;
pline1.x1 =10;
pline1.x2 =600;
pline1.y1 =46;
pline1.y2 =76;

struct linez pline2;
linecounter++;
pline2.id = linecounter;
pline2.x1 =504;
pline2.x2 =3;
pline2.y1 =6;
pline2.y2 =7;


sf::Vertex line1[] =
{
sf::Vertex(sf::Vector2f(pline1.x1,pline1.y1)),
sf::Vertex(sf::Vector2f(pline1.x2,pline1.y2))
};

line1[0].color = sf::Color::Red;
line1[1].color = sf::Color::Green;

sf::Vertex line2[] =
{
sf::Vertex(sf::Vector2f(pline2.x1,pline2.y1)),
sf::Vertex(sf::Vector2f(pline2.x2,pline2.y2))
};

line2[0].color = sf::Color::Cyan;
line2[1].color = sf::Color::Blue;

//line1[0].move= (10.f,5.f);


//vertex stuff
sf::Vertex vpoint1;
vpoint1.position = sf::Vector2f(300,300);
vpoint1.color = sf::Color::Red;

sf::VertexArray triangle1(sf::Triangles,3);
triangle1[0].position = sf::Vector2f(9,110);
triangle1[1].position = sf::Vector2f(300,200);
triangle1[2].position = sf::Vector2f(300,700);

triangle1[0].color = sf::Color::Magenta;
triangle1[1].color = sf::Color::Blue;
triangle1[2].color = sf::Color::Yellow;

//shaprecreation
sf::CircleShape cicle1(200);
sf::RectangleShape rectn1(sf::Vector2f(100,50));

rectn1.setPosition(20.f,40.f);
cicle1.setPosition(20.f,200.f);
rectn1.setFillColor(sf::Color::Yellow);


//textureloading
sf::Texture texture1_base;

if (!texture1_base.loadFromFile("res/texturez/texr_1_test.png"))
{
    std::cout << "load failed of texture 1" << std::endl;
    system ("pause");
    return EXIT_FAILURE;
}
cicle1.setTexture(&texture1_base) ;
//cicle1.setTextureRect(sf::IntRec(0,0,500,500)); //start? , 0,0

sf::Transform aTrasform1;
sf::RenderStates states1base;



//meue
Menu PrMenu((window.getSize().x/2), (window.getSize().y/2));
/*    */
    while (window.isOpen())
    { sf::Event prevent;
    //while (window2.isOpen())
        //    {sf::Event revent2;
        //    while (window2.pollEvent(revent2))
        //        {

            //    }
        //    }
        while (window.pollEvent(prevent))
            {
            switch (prevent.type)
            { //polling iput is poor for keybord move to live per class or windo
            //obkzj
            case sf::Event::KeyReleased:
                    switch (prevent.key.code)
                {
                        //std::cout << start << "  time?  " ;
                        case sf::Keyboard::Up:
                            PrMenu.MoveUp();
                          //         cile1shape.move(-20.5f, -17.07f);
                        break;

                        case sf::Keyboard::Down:
                                PrMenu.MoveDown();
                            //        cile1shape.move(-10.1f, 15.0f); break;
                        break;

                        case sf::Keyboard::Return:
                            switch(PrMenu.GetPressedItem())
                            {
                            case 0: std::cout <<"move";
                                pline2.x2= pline2.x2+30;
                                pline2.y2 = pline2.y2+23;

                                line2[0].position = sf::Vector2f(pline2.x2,pline2.y2);
                                ServiceLocator::GetAudio()->PlayMusic("audio/song.ogg");
                                break ;

                                case 1: std::cout <<"stuff";

                                break ;

                                case 2: std::cout <<"stuff";
                                break ;
                             }
                       break;

                }
            //case sf::Event::Closed:
///window.close();
            //    break;


                        }
                        {if (prevent.type ==sf::Event::Closed)
                            window.close();
                        }

                {if (prevent.type == sf::Event::Resized)
                    glViewport(0, 0, prevent.size.width, prevent.size.height);
                }

            }


            //liveinput
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
            {


            }
if ( sf::Mouse::isButtonPressed(sf::Mouse::Left))
{
    std::cout << "mouse?:"<< sf::Mouse::getPosition().x << std::endl ; ////stuff
}

            //

// update

            window.clear();
// draw
            window.draw(triangle1);
            window.draw(line1, 2, sf::Lines);
            window.draw(line2, 2, sf::Lines);
            window.draw(cicle1);
            PrMenu.draw(window);
            window.display();

    }


    return 0;}


    /*
    //dy^2
    //dx^2
    //d^1/2//reset, setCenter setSize
    //sf::View view(sf::FloatRect(200,200,300,200));
    //sf::View (sf::Vector2f())

    //case sf::Event::
    //if (sf::keyboard::Key::W==event.key.code)
    //view.move(sf::Vector2f());{           }
    //view.setRoation.
    else if (sf::keyboard::Key::+ == event.key.code)
    {view.zoom(1.2f);}
    break;
    else if (sf::keyboard::Key::- == event.key.code)
    {view.zoom(0.8f);}
    break;

    sf::FloatRect shape1r= cycle1.getGlobalBound();
    sf::FloatRect shape2r= cycle2.getGlobalBound();

    float dx= (cycle1.getPosition().x+(shape1r.width/2))-(cycle2.getPosition().x+
              (shape2r.width/2));

    float dy= (cycle1.getPosition().y+(shape1r.hieght/2))-(cycle2.getPosition().y+
                        (shape2r.height/2));
    float distance = std::sqrt((dx^2)+(dy^2));

    if (distance <= (shape1r.width/2) + (shape2r.width/2)
    {std::cout <<"doooomz_Dkz" <<std::endl;}

     //cr_hubgraphic.getPosition();
     */
