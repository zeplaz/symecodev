



#include "R_linez.h"
#include <iostream>

R_linez::~R_linez(){}


R_linez::R_linez(const railhubz& hub_1,
                 const railhubz& hub_2, int& total_R_linez) //(const railhubz& hub1, const railhubz& hub2, int& total_R_linez)
{
     line_id = total_R_linez+1;
     total_R_linez++;

  sf::Vector2f temp1(hub_1.getLocation());
float x = temp1.x;
float y = temp1.y;
printf("info about temp1 x %f y %f /n", x, y);
   sf::Vector2f temp2(hub_2.getLocation());

                            if (temp2 ==sf::Vector2f(200.f,100.f))
                                {std::cout <<"true temp2;" << std::endl; }

                            if (temp1 ==sf::Vector2f(700.f, 100.f))
                            {std::cout <<"true temp1;" << std::endl; }

  rail_linez_array.setPrimitiveType(sf::Lines);
  sf::Vertex rail_L_vertex;

  //rail_L_vertex.position =  temp1;
  //rail_L_vertex.color  = sf::Color::Blue;
  rail_linez_array.append(rail_L_vertex);
                    //rail_L_vertex.position =  temp2;
  //rail_L_vertex.color  = sf::Color::Blue;
  rail_linez_array.append(rail_L_vertex);

    rail_linez_array[0].position =temp1;
    rail_linez_array[0].color = sf::Color::Red;

  rail_linez_array[1].position =temp2;
  rail_linez_array[1].color = sf::Color::Blue;


                                  //rail_linez_array[2].position = sf::Vector2f(300, 5);
                                  //rail_linez_array[3].position = sf::Vector2f(400, 2);
                                  //rail_L_vertex.position =  temp2;
                                                //    rail_L_vertex.color  =  sf::Color::Blue;
                                                    //        rail_linez_array.append(rail_L_vertex);

                                // rail_linez_array[0].position = temp;
                                 //rail_linez_array[0].color = sf::Color::Blue;
                                    //rail_linez_array[0]

                                    //rail_linez_array[1].position = temp2;
                                //    rail_linez_array[1].color  = sf::Color::Blue;

                                //    printf("linecreation id: %",total_R_linez );

}

void R_linez::update()
{


}


 bool R_linez::handle_msg(const telagram& msg)
{
        switch (msg);
        case enter_line1 :

            return true;
            break;

        case enter_line2 :

            return true;
            break;

        case exit_line1 :

            return true;
            break;

        case exit_line2 :

            return true;
            break;

        case report_status :

            can_add_train_tochannel();

            return true;
            break;


        default : return false;

}


void R_linez::draw(sf::RenderWindow &window)
{
    window.draw(rail_linez_array);

}

bool train_enter_line(trainz& train_on_line)

{    //   if (train_on_line->current_location)

}
bool R_linez::can_add_train_tochannel()
{

//if (sgn() == sgn(AcessArray_Drection) || sgn(AcessArray_Drection==0 )
{       if (AcessArray_channels[0] = false && )
                { AcessArray_channels[0] = true;
                return true;
            }
        if (AcessArray_channels[1] = false)
                AcessArray_channels[1] = true;
                return true;
                }
    return false;
}
