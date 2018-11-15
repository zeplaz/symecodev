

//Cmd_agent_operator.cpp




AdjacencyMatrix* Cmd_agent_operator::setup_routmatrix()
{
    std::vector<int> current_hublist = prt_mapz.hublist();
    AdjacencyMatrix* temp_aj_matrix;

    for (i=0 ; i <current_dispatch_hublist.size(); i++)
    {
        std::vector<R_linez*> temp_line_vec_ptr;
        temp_aj_matrix = Sym_map->create_routingMatrix();

        railhubz* temp_hub_prt Sym_map->get_hub_via_id(current_dispatch_hublist[i]);

        {

        AdjacencyMatrix = {}

        }

        temp_aj_matrix



    }
 }

Cmd_agent_operator::scan_hubs_for_dispatch();
{
  std::vector<int> current_dispatch_hublist = prt_mapz.hublist();
for (i=0; i < current_dispatch_hublist.size(); i++)
  {
    std::vector<int>  merg_priority_Train_list;

      temp_hub_id = current_dispatch_hublist[i]
      temp_hub_id.

  }






void Cmd_agent_operator::Drect_trains_next_rout()

{
    AdjacencyMatrix* temp_martix;
    temp_martix=prt_mapz->lookup_Routingmatrix();
    AdjacencyMatrix->
}


Cmd_agent_operator::create_trainz(int numtraincreat, int priorty, int speed,
            int beinghub ,int endhub)

{
    int = numoftrains;

    for (i=0; i < numoftrains; i++ )

    {   trainz* temp_train = new trainz(enity_count,train_count,orginhub,destion);

        temp_train.load_data(priorty,speed);
        Sym_map->Register_entity(temp_train);
        train_list.push(temp_train->ID());

    }


int Cmd_agent_operator::check_cleanup_train_enityz_arrival()
{
    trainz* temptrain;

    for (i=0; i<train_list.size(); i++ )
    {
        temptrain = sym_manger->get_entity_via_id(int train_list[i]);

        if (temptrain->arived_final())
            {temptrain->removeenity();}
    }
}



void Cmd_agent_operator::create_hubz(int location)
{

 switch (hubNamez.location)

 {

 case Sherbrooke :

     float x = 45.4042f;
     float y = 71.8923f;

     railhubz* sherbyz = new railhubz(cmd_time_start,sf:Vector2f(x,y),hubz_count);
     Sym_map->Register_hubz(sherbyz);
        printf("sherbyz_ID: %s \n",sherbyz->id);
     break;

 case Toronto :

     float x = 43.6532f;
     float y = 79.3832f;

     railhubz* tro = new railhubz(cmd_time_start,sf:Vector2f(x,y),hubz_count);
     Sym_map->Register_hubz(tro);
      printf("Toronto_ID: %s \n",tro->id);
     break;
 case Montreal :

     float x = 45.5088f;
     float y = 73.552f;

     railhubz* mtl = new railhubz(cmd_time_start,sf:Vector2f(x,y),hubz_count);
     Sym_map->Register_hubz(mtl);
     printf("Montreal_ID: %s \n",mtl->id);

     break;
 case QubecCity :

     float x = 46.8257f;
     float y = 71.2349f;

     railhubz* Qcity = new railhubz(cmd_time_start,sf:Vector2f(x,y),hubz_count);
     Sym_map->Register_hubz(Qcity);
     printf("Qcity_ID: %s \n",Qcity->id);

     break;

 case Ottowa :

     float x = 75.69f;
     float y = 45.421f;

     railhubz* otta = new railhubz(cmd_time_start,sf:Vector2f(x,y),hubz_count);
     Sym_map->Register_hubz(otta);
     printf("OttAWA_ID: %s \n",otta->id);

     break;

     default :
         { printf("unknown hub name, enter cordnets:...possblz\n");
         float tempy;
         float tempx;

            printf("inoutxfloat:\n")
            std::cin >> tempx;
            printf("inoutyfloat:\n")
            std::cin >> tempy;
            railhubz* temp = new railhubz(cmd_time_start,sf:Vector2f(tempx,tempy),hubz_count);
            Sym_map->Register_hubz(temp);
            printf("newHub_ID: %s \n",temp->id);
     break;
            }

    }

}
