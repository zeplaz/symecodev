//Trainz.cpp

#include "trainz.h"


bool trainz::Handle_telagram (const telagram& tela)
{
            if (tela->msg == halt_cmd)
                { hault();


                telagram  cmd_telaexit(0,this->Train_id,tela.sender,
                               -1, exit_line);
                               this->Handle_telagram(cmd_telaexit);
                        

                return (true);

                }//addself to que?}

            if(tela->msg == move_cmd)
                { Move();
                return (true);
                }

                return false;
}

void trainz::update()
{       time_t currenttime = clock();
            //check_status();
            update_location(currenttime);
}


trainz::hault()
{
    is_halt = true;
}

trainz::move()
{

is_halt = false;

}

trainz::update_location(time_t& currenttime)
{
if (is_halt = false)
{                           //time_t currenttime = clock();
    double vilocity =  currenttime*speed;
        vector_math temp_vec1;

        float cl_x1 = current_location.x
        float cl_y1    =   current_location.y

     // (cl_x1^2)+(cl_y1)
    current_location;



// do vector math. move location and update

}

}

loaddata(&  t_org)

{

}

trainz::Next_hub()

{
    Next_hub = Orign_Station->line_map(Destination_station);
    next_hub_location = Next_hub->getLocation();

}
;

trainz::trainz(int& total_trainz, const railhubz& hub_start, const railhubz& Hub_dest )
{
    Train_id =  total_trainz+1;
    total_trainz++;
            Orgin_t = Clock();
            Orign_Station = hub_start;
            Destination_station = Hub_dest;
            current_location = Orign_Station->getLocation();
            Triangle_train_engine.SetPointColor(0, sf::Color::Blue);
            Triangle_train_engine.SetPointOutlineColor(0, sf::Color(0, 128, 128));

            Next_hub = Orign_Station->line_map(Destination_station);

            loaddata(Orgin_t);




        distance = sqrt(((next_hub_location.x-current_location.x)^2)+
                    next_hub_location.y-current_location.y)^2));

    //settime and other info
    printf("new train added:ID %s %t \n", Train_id, *total_trainz);

}


~trainz(){

}

/*
            void trainz::draw{

            sf::Vector2f* New_location;
                  //get_current_location();
            int dt      = timesince_lastHub*speed;
                  get_time();
            Triangle_train_engine.SetPointPosition();

              } */
