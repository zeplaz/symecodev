// R_linez.h

#pragma once
#include <SFML/Graphics.hpp>
 #include <SFML/Window.hpp>
 #include <SFML/System.hpp>
 #include <SFML/OpenGL.hpp>

#include "Sym_Map.h"

#include "Base_Tsym_entity.h"
#include "trainz.h"
#include "railhubz.h"

#include "msg_cmdz.h"
#include "msg_dispatcher.h"

#include <time.h>


template <typename T> float sgn(T val) {
    return (T(0) < val) - (val < T(0));
}

class railhubz

class R_linez: public Base_Tsym_entity;
{
protected:
    sf::VertexArray rail_linez_array;

//sf::VertexArray rail_linez_array;
 //

                                float RL_x1  =0.f;
                                float RL_y1 =0.f;
                                float RL_x2  =0.f;
                                float RL_y2 =0.f;


float* AcessArray_Drection = new float[2]{0.f, 0.f};
bool AcessArray_channels[2] = {false};


//railhubz* rOrign_Station;
//railhubz* rDestination_station;

public:
    int line_id;
R_linez(const railhubz& hub_1, const railhubz& hub_2,
        int& total_R_linez):Base_TSym_entity(total_R_linez);

    //R_linez(const railhubz::railhubz& hub_start, const railhubz::railhubz& Hub_dest, int& total_trainz);
    //R_linez (railhubz&, railhubz&, int&);
    //: initialize();

    ~R_linez();

void update();
virtual bool handle_msg(const telagram& msg);

void draw(sf::RenderWindow &window);

bool can_add_train();


//getstatus();
//void initialize();
//update_line();



};
