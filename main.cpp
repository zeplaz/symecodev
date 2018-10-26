//main.cpp

// sfml-graphics-d.lib
//sfml.aud.lib
//sfml-audio-d.lib
//sfml-system-d.lib
//sfml-window-d.lib
//sfml--d.lib
//#include <SFML/Window.hpp>
//#include <SFML/OpenGL.hpp>
//jkkjkjjk
//#include "main.cpp"
#include <chrono>
#include <thread>
#include <time.h>
#include <iostream>
//#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include"Menu.h"
//#include "Fullupdisplay.h"
#include <stack>



void update(clock_t& start, std::stack<sf::CircleShape**>& pr_ojkz_toUPz, bool & active) //  graphicz,stack& logic, deque& state
{// should stack just be a refens to an ID for the obk?

 struct tempry
        {
        //datatypetoprocess
//state<State> void**= isconcurnt();
    int id_state;

//bool               active;
//messsge* <mesg*>;
//char*[]=
//new 'alk/kamz~!';
            //pollingevntclear?();

} ;

/*
                while (!greaphicz.isEmpty()=true)
                    int objztorender =
                    {temp= graphicz.pop();
                    temp

                }-
            */
//->)


sf::CircleShape* temp_cr;
temp_cr = *pr_ojkz_toUPz.top();
pr_ojkz_toUPz.pop();
temp_cr->move(7.f,10.3);

    if (temp_cr->getPosition().y >  700 )
            temp_cr->move(0.f,-300.f);

    if (temp_cr->getPosition().x > 900 )
            temp_cr->move(-500.f,0.f);

    if (temp_cr->getPosition().y < 0)
       temp_cr->move(500.f,0.f);

    if (temp_cr->getPosition().x < 0)
        temp_cr->move(500.f,300.f);

   *pr_ojkz_toUPz.push(temp_cr);

    //    pr_ojkz_toUPz->push(move(&pr_ojkz_toUPz->pop()));

if (clock() - start > 50000)
{  start=clock();
if (active == false) {active = true;}
else {active = false;}
}

}


                            /*polling(Stack<Event>& evnskltlk ){

                            Stack<Event> temp;

                            //=evnskltlk.peak();
                            //switch (

                            //case :
                            //case:
                            while ( !evnsktlk.isEmpty())
                            {temp =evnskltlk.pop();

                            }


                            } */



int main()
{

// inlitzation of need data struc...

std::stack<sf::CircleShape**> przgraphshapes; //cir_graphzsak;
//stack<rendrableGraphicShapezpPtryz*> przgraphshapes;
std::stack<sf::CircleShape> circ_shapstack;
    //globalz
            bool active = false;
            bool vaild=1;
            long d=2;

//size mainwindow at open
//const int xsize =;
//const int ysize =0;
static const int xsize_STAD = 900;
static const int ysize_STAD = 780;




// cleanup but  inslationz etc

//Fullupdisplay pirmayoutlayer();
    sf::RenderWindow window(sf::VideoMode(xsize_STAD,ysize_STAD),"OP:rootzprocess", sf::Style::Default);

                window.setFramerateLimit(60);

//sf::RenderWindow window2(sf::VideoMode(xsize_STAD/2,ysize_STAD/2),"OP23:2ndwindozprocess", sf::Style::Default);
//window2.setFramerateLimit(60);

    //sf::RenderWindow refenced_fram(sf::VideoMode(xsize_STAD,ysize_STAD),);
//inlizler:





        int clockcouter =0;

        clock_t start=clock();
        clockcouter++;

        clock_t torgin =clock();
        clockcouter++;

    sf::Clock clock;

// creation of some objects displayed.. ponter shjapes and fullstack. exit form
//beging
//lines
sf::VertexArray line1(sf::Lines, 2);
sf::VertexArray trainSdispal;

trainSdispal.setPrimitiveType(sf::Lines);
trainSdispal.append(sf::Vertex(sf::Vector2f(600,400),sf::Color::Green));
trainSdispal.append(sf::Vertex(sf::Vector2f(700,456),sf::Color::Green));


trainSdispal.append(sf::Vertex(sf::Vector2f(600,400),sf::Color::Green));
trainSdispal.append(sf::Vertex(sf::Vector2f(237,400),sf::Color::Green));

trainSdispal.append(sf::Vertex(sf::Vector2f(600,400),sf::Color::Green));
trainSdispal.append(sf::Vertex(sf::Vector2f(800,353),sf::Color::Green));



sf::Color::Magenta;

sf::Vertex point1;
    point1.position = sf::Vector2f(150, 150);
    point1.color = sf::Color::Magenta;

        line1[0].position = sf::Vector2f(300, 300);

        line1[0].color = sf::Color::Green;

        line1[1] = point1;

///



        int graphobjcounter=0;

sf::CircleShape** prShape1_cr1;


            sf::CircleShape cile1shape(60.f);
            //cile1shape.setFillColor(sf::Color::Red);

    circ_shapstack.push(cile1shape);

        graphobjcounter++;

            prShape1_cr1[0] = new sf::CircleShape(70.f) ;//*{cir_graphzsak};
            prShape1_cr1[0]->setPosition(100.f, 90.f);
            prShape1_cr1[0]->setFillColor(sf::Color::Blue);

//    przgraphshapes.push(prShape1_cr1);
    //            graphobjcounter++;

                prShape1_cr1[1] = new sf::CircleShape(30.f) ;//*{cir_graphzsak};
                prShape1_cr1[1]->setPosition(600.f, 400);
                prShape1_cr1[1]->setFillColor(sf::Color::Blue);

                przgraphshapes.push(prShape1_cr1);
                    graphobjcounter++;



                sf::CircleShape shape2(100.f);
            shape2.setPosition(500.f, 10.f);
            shape2.setFillColor(sf::Color::Green);
    circ_shapstack.push(shape2);
        graphobjcounter++;




        sf::Texture texture1_base;

        if (!texture1_base.loadFromFile("res/texturez/texr_1_test.png"))
        {
            std::cout << "load failed of texture 1" << std::endl;
            system ("pause");
            return EXIT_FAILURE;
        }
        prShape1_cr1[0]->setTexture(&texture1_base) ;
        cile1shape.setTexture(&texture1_base);





Menu PrMenu(window.getSize().x/2, window.getSize().y/2);






int counter = 0;
// mainloop.
    while (window.isOpen())

    {           //create needed event systems
        sf::Event primaryevent;
    //sf::Event ndwindowevent2;

 std::cout << counter;



//the loop well handling events clean to event handler ot a pointer of areayz. or even a fancy **aray.


        while (window.pollEvent(primaryevent))
        {
            //while (window.pollEvent(ndwindowevent2))
            //{
                    switch (primaryevent.type)
                    {

                        case sf::Event::KeyReleased:

                            switch (primaryevent.key.code)
                            {
                                std::cout << start << "  time?  " ;
                                case sf::Keyboard::Up:
                                    PrMenu.MoveUp();
                                    cile1shape.move(-9.5f, -13.07f);
                                break;

                                case sf::Keyboard::Down:
                                    PrMenu.MoveDown();
                                    cile1shape.move(-10.1f, 11.0f);
                                break;

                                case sf::Keyboard::Right:
                                    cile1shape.move(10.1f, 0.0f);
                                break;

                            //    case sf::Keyboard::Right:

                            //    break;

                                 case sf::Keyboard::Return:
                                   switch(PrMenu.GetPressedItem())
                                   {
                                   case 0 :
                                        cile1shape.move(10.1f, 0.0f);
                                     break;
                                   }
                                 break;
                              }

                        break;
                       }


                {if (primaryevent.type == sf::Event::Resized)
                    glViewport(0, 0, primaryevent.size.width, primaryevent.size.height);
                }

                {if (primaryevent.type ==sf::Event::Closed)
                    window.close();
                //    window2.close();
                }

        }
                            //    if(event.type ==Event::Keypress)
//update}}

update(start,przgraphshapes,active);

std::cout<< std::endl << "update funcompleate." << std::endl;

                            //long int crtime =0;
                            //crtime =+ std::chrono::seconds(1);
                             ///loop until time's up
                            //std::cout << (double)final / ((double)CLOCKS_PER_SEC);

    //wait(2);

    //draw
    window.clear();
    //window2.clear();
std::cout<< std::endl << "clear" << std::endl;
std::cout << active;

//drawstuff/                   // loop for handling the graohp stacks...
                    /*    for (int i = 0; i< graphobjcounter; i++)

                        {
                                // renderfucntion();
                        } */

                //window.draw(shape)
sf::CircleShape** temp_cr;
while (!przgraphshapes.empty()==true )
{

            temp_cr = przgraphshapes.top();
            przgraphshapes.pop();
std::cout<< std::endl << "popupdate." << std::endl;
            window.draw(**temp_cr);
            std::cout<< std::endl << "drawtemp." << std::endl;

}
przgraphshapes.push(temp_cr);

std::cout<< std::endl << "endwhile." << std::endl;

                window.draw(cile1shape);

                std::cout<< std::endl << "drawcileshap." << std::endl;

                PrMenu.draw(window);

                if (active ==true)
                {window.draw(shape2);}

                std::cout<< std::endl << "othershaps." << std::endl;


                window.draw(line1);
                window.draw(trainSdispal);
            //    window.display();
               window.display();
std::cout << counter;
counter++;
// end of primaryloop
 std::cout << counter;
} //window.isclosed()
//

// program cleanup? lol

    return 0;
}











/*void waiter(){
    int x=0;
    while(x<3){
    //cout<<".";
        clock_t stopwait;
        stopwait = clock () + 1 * CLOCKS_PER_SEC ;
        while (clock() < stopwait) {}
    x++;
    }
}//end of waiter*/
