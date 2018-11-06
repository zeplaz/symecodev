//Trainz.cpp

trainz::trainz(railhubz* hub_start, railhubz* Hub_dest, int& total_trainz)
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
