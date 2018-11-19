//Trainz.cpp

#include "trainz.h"


    bool trainz::Handle_telagram (const telagram& tela)
    {
                if (tela.msg == halt_cmd)
                    { printf("train has been given Hult_tela_fromLINE!mustbe trubz\n");
                    return (true);
                    }

                if(tela.msg == move_cmd)
                    {
                     printf("trainWillMove_on_locationUpdate!\n");
                    return (true);
                    }
     return false;
    }

    void trainz::update()
    {       time_t currenttime = clock();
                //check_status();
            update_location(currenttime);

            if (distance_toNext_from_last < distance_traveld )
            {
                        hault();

                if (Destination_station->id ==Next_hub->id)
                {
                    arid_f = true;
                }
            }
            //loop up new next station;

            else {
            //    found_rount?

            }

            Sym_map->


    }



trainz::update_location(time_t& currenttime)
{
if (is_halt = false)
{                           //time_t currenttime = clock();
    double vilocity =  currenttime*speed;


        float cl_x1 = current_location.x
        float cl_y1  =current_location.y

     // (cl_x1^2)+(cl_y1)



// do vector math. move location and update
}

}

trainz::load_data(double start_priory, int speezx)

{
            esclatcatator_priority=start_priory;
            speed=speezx ;
}

trainz::Next_hub()

{
    Next_hub = Orign_Station->line_map(Destination_station);
    next_hub_location = Next_hub->getLocation();
}

trainz::trainz(int& int& total_trainz, const railhubz& hub_start, const railhubz& Hub_dest )
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

|        distance = sqrt(((next_hub_location-.x-current_location.x)^2)+
        next_hub_location.y-current_location.y)^2));

    //settime and other info
    printf("new train added:ID %s %t \n", Train_id, *total_trainz);

}



void trainz::hault()
{
    is_halt = true;

    telagram  cmd_telaexit(0,this->Train_id, enter_line_id,
                   -1, exit_line,line_data1.dre_dxr);
                   this->Handle_telagram(cmd_telaexit);

                   active_line =-1;
}

    bool trainz::arived_final()

    {
        if (arid_f = true)
        {printf(" a train: %s has arvied final destaion %r \n",  Train_id, Destination_station->id);
            return true;}
    }

    void trainz::move(int enter_line_id)
    {
        is_halt = false;
        current_t= clock();


        line_data1.dre_dxr=Drectional_dxr(distance_toNext_from_last,
        current_location, next_hub->getLocation());
        line_data1.rail_line_active = enter_line_id;

        telagram  cmd_telmove(current_t,this->Train_id, enter_line_id,
                            -1, enter_line,line_data1);

     this->Handle_telagram(cmd_telmove);

    }

/*
            void trainz::draw{

            sf::Vector2f* New_location;
                  //get_current_location();
            int dt      = timesince_lastHub*speed;
                  get_time();
            Triangle_train_engine.SetPointPosition();

              } */
