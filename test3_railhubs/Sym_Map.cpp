

//Sym_Map.cpp

#include "Sym_Map.h"
#include "Base_TSym_entity.h"

Sym_Map* Sym_Map::Instance()
{
static Sym_Map instance;
return &instance;

}

float Sym_Map::get_cartesian_plane(bool H_1_W_0, float plane)
{
     float car_plane;

     switch (H_1_W_0)
     {
     case 0 :
            if (plane == window_Hight/2)
            {   car_plane =0 ;}

            if (plane <= window_Hight/2)
            {    car_plane = (window_Hight/2)-plane;}

            if (plane >= window_Hight/2)
            {  car_plane = plane-plane/2;
             }
            break;

        case 1 :
            if (plane == window_Width/2)
                {car_plane=0;}

            if (plane <= window_Width/2)
                {car_plane = window_Width/2-plane ;}

            if (plane >= window_Width/2)
                {car_plane= plane-plane/2;}
            break;

        }

    return car_plane;
}



Base_TSym_entity* Sym_Map::get_entity_via_id(int id) const

{
entity_map::const_iterator cons_itor =inst_enity_map.find(id);

assert ((cons_itor != inst_enity_map.end()) && "<Sym_Map::get_entity_via_id>:ERROR");
return cons_itor->second;

}

void Sym_Map::removeenity(Base_TSym_entity* ptrentity)
{
inst_enity_map.erase(inst_enity_map.find(ptrentity->ID()));

}

void Sym_Map::Register_entity(Base_TSym_entity* newentity)
{

    inst_enity_map.insert(std::make_pair(newentity->ID(),newentity));
}
/*

void Sym_Map::addLinez(int& Line_id, R_linez& newRline)
{   //prthubz =    new int;

Rail_map.insert( std::pair<int,R_linez*>(Line_id,newRline) );

}


    void Sym_Map::add_hubz(int& hub_id,railhubz& newhub);
          {
 Hubz_map.insert( std::pair<int,railhubz*>(hub_id,newhub) );



          }
*/








/*
//iter != map.end();
// rewtrire constructor or run interal?
//sf::Vecto2f* hublocationtemp;


railhubz Shrby(&rail_Inalz_clock, );
railhubz MTL(&rail_Inalz_clock, 0,0);
railhubz Ottaw(&rail_Inalz_clock, 0,0);
railhubz TOR(&rail_Inalz_clock, 0,0);


R_linez SHrb_MTL(&Shrby,&MTL);
R_linez MTL_OTWA(&MTL, &Ottaw);
R_linez OTAW_TORNTO(&Ottaw,&TOR);

*/
