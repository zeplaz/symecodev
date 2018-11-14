#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "Sym_Map.h"
#include "Base_Tsym_entity.h"

#include "railhubz.h"
#include "R_linez.h"

#include "etcz/msg_cmdz.h"
#include "etcz/msg_dispatcher.h"

#include <time.h>
#include <cmath.h>
#include <fstream>


struct telagram;
            class railhubz;
            class R_linez;
            class vector_math;

class trainz : public  Base_TSym_entity
{

private:

    int speed;
    bool is_halt;
    float distance;

    sf::Vector2f current_location;
    sf::Vector2f next_hub_location;

    railhubz* Orign_Station;
    railhubz* Destination_station;

    clock_t Orgin_clock;
    time_t current_t;

void locationsetup(railhubz& hub_str, railhubz& next_hub );

public:
    railhubz* Next_hub;
    double esclatcatator_priority;
    int Train_id;

    trainz(int dispact_enity_id int& total_trainz,const railhubz& hub_start,
     const railhubz& Hub_dest): Base_TSym_entity(dispact_enity_id)
            {}

 ~trainz();

void hault();
void move();
//bool Enter_next();
//void Leave_current();
void update();
virtual bool Handle_telagram(const telagram& msg);

void update_location(time_t& currnttime);

void draw(sf::RenderWindow &window);

//void Get_info(int& T_id);

//Update_status();

//void load_train_cargo();
//void Unload_train_cargo();

};



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

//sf::VertexArray Triangle_train_engine();

    //std::stack<sf::RectangleShape*>  cargoz;

        /*    for (int i = 0; i <=cargo.numberofCarts; i++ )
                { cargoz.push(sf::RectangleShape* i = new sf::RectangleShape);
                    cargoz.top()-> setColour(Red);
                } */
