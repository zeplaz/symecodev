

//Sym_Map.cpp



Sym_Map* Sym_Map::Instance()
{
static Sym_Map instance;
return &instance;


}

float Sym_Map::get_cartesian_plane(bool H_1_W_0, float plane);
{
     float car_plane;

     switch (H_1_W_0)
     {
        case true :
            if (plane == (window_Hight/2)
                car_plane=0;
                break;
            if (plane <= (window_Hight/2)
                car_plane = (window_Hight/2)-plane;
                break;
            if (plane >= (window_Hight/2)
                car_plane= plane-(plane/2);
                break;

        case false :
            if (plane == (window_Width/2)
                car_plane=0;
                break;
            if (plane <= (window_Width/2)
                car_plane = (window_Width/2)-plane;
                break;
            if (plane >= (window_Width/2)
                car_plane= plane-(plane/2);
                break;
        }

    return car_plane;
}



Sym_Map* Sym_Map::get_entity_via_id(int id)const

{
entity_map::const_iterator cons_itor =inst_enity_map.find(id);

assert ((cons_itor !=inst_enity_map.end()) && "<Sym_Map::get_entity_via_id>:ERROR")
return cons_itor->second;

}

void Sym_Map::removeenity(Base_TSym_entity* ptrentity)
{
inst_enity_map.erase(inst_enity_map.find(prtenity->ID()));

}

void Sym_Map::registerentity(Base_TSym_entity* newentity)
{

    inst_enity_map.insert(std::make_pair(newentity->ID(),newentity))
}


void Sym_Map::addLinez(int& Line_id, R_linez& newRline)
{   prthubz =    new int;

        if (Line_id == NULL)
        Line_id* = rail_linez+1;

      Rail_map[Line_id] = newRline;
      rail_linez++;
    }


    void Sym_Map::add_hubz(int& hub_id,railhubz& newhub);
          {

              Hubz_map[hub_id] =newhub;

          }









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
