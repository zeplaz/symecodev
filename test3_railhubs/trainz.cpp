//Trainz.cpp

#include "trainz.h"


bool trainz::Handle_telagram (const telagram& msg)
{
    if (msg ==1)
    { hault(); return (true); }//addself to que?}
                if(msg == 0)
                { Move();
                    return (true);

                    // move?
                }
return }
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

trainz::update_location()
{
if (is_halt = false)
{  time_t currenttime = clock();
    int vilocity =  currenttime*speed;
    int     current_location.x
    int     current_location.y

    current_location;
// do vector math. move location and update

}

}


trainz::trainz(int id, int& total_trainz, const railhubz& hub_start, const railhubz& Hub_dest )
{
    Train_id =  total_trainz+1;
    total_trainz++;

            Orgin_t = Clock();
            Orign_Station = hub_start;
            Destination_station = Hub_dest;
            current_location = Orign_Station->getLocation();
            Triangle_train_engine.SetPointColor(0, sf::Color::Blue);
            Triangle_train_engine.SetPointOutlineColor(0, sf::Color(0, 128, 128));
    //settime and other info
    printf("new train added:ID %i %t \n", Train_id, *total_trainz);

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
