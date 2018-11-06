#pragma once
#include <SFML/Graphics.hpp>
#include "railhubz.h"
#include "R_linez.h"
#include <time.h>
#include <stack>
 #include <SFML/Window.hpp>
class Tranz

{
private:
    int Train_id;
    int speed;
    sf::Vector2f* current_location;

    railhubz* Orign_Station;
    railhubz* Destination_station;

    clock_t Orgin_t;
    time_t current_t;
    //sf::Time lanchtime_orgin;
    //sf::Time timesince_lastHub;

/*
                        struct train_data{

                            bool is_inStation;

                            int distance_traveld_total;
                            int numberofCarts;

                                struct cargo{
                                    int resorse1;
                                    int resorse2;
                                    int resorse3;

                                    }cargo;
                            };
                            */

//grpahics
                //        enum cagrotype_colour
            //            { red_res1, magenta_res2, green_res3,
        //                };

sf::VertexArray Triangle_train_engine();

std::stack<sf::RectangleShape*>  cargoz;

            /*    for (int i = 0; i <=cargo.numberofCarts; i++ )
                    { cargoz.push(sf::RectangleShape* i = new sf::RectangleShape);
                        cargoz.top()-> setColour(Red);
                    } */


public:

 trainz(railhubz* hub_start, railhubz* Hub_dest, int& total_trainz);


 ~trainz();

//bool Enter_next();
//void Leave_current();

void draw(sf::RenderWindow &window);

//void Get_info(int& T_id);

//Update_status();

//void load_train_cargo();
//void Unload_train_cargo();

};
