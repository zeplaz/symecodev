
#inlcude "R_linez.h"


~R_linez(){


}

R_linez::R_linez (railhubz& hub1, railhubz& hub2, int& total_R_linez)
{
     line_id = total_R_linez+1;
     total_R_linez++;

    rail_linez_array[0].position = hub1.hub_location;
    rail_linez_array[0].color  = sf::Color::Blue;

    rail_linez_array[1].position = hub2.hub_location;
    rail_linez_array[1].color  = sf::Color::Blue;

}

void R_linez::Draw(window& window, int&total_R_linez)
{
    {
    for (int i = 0; i<total_R_linez ; i++)
        {window.draw(R_linez.line_id[i]) }
    }

}

bool train_enter_line(trainz& train_on_line)

{    //   if (train_on_line->current_location)


}
bool R_linez::can_add_train(int proposedrection)

{

if (sgn(proposedrection) == sgn(AcessArray_Drection) || sgn(AcessArray_Drection==0 )
{       if (AcessArray_channels[0] = false)
                { AcessArray_channels[0] = true;
                return true;
            }
        if (AcessArray_channels[1] = false)
                AcessArray_channels[1] = true;
                return true;
                }
    return false;
}
