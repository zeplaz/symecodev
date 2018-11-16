

//Cmd_agent_operator.cpp




AdjacencyMatrix* Cmd_agent_operator::setup_routmatrix()
{
    std::vector<int>* current_hublist = Sym_map->hublist();
    AdjacencyMatrix* temp_aj_matrix;

    for (i=0 ; i <current_dispatch_hublist->size(); i++)
    {
        std::vector<R_linez*> temp_line_vec_ptr;
        temp_aj_matrix = Sym_map->create_routingMatrix();

        railhubz* temp_hub_prt Sym_map->get_hub_via_id(current_dispatch_hublist->at(i));

        {

        AdjacencyMatrix = {}

        }

        temp_aj_matrix



    }
 }

Cmd_agent_operator::scan_hubs_for_dispatch();
{
  std::vector<int>* current_dispatch_hublist = Sym_map->hublist();
for (i=0; i < current_dispatch_hublist->size(); i++)
  {
      //std::vector<int>  merg_priority_Train_list;

      int temp_hub_id;
          temp_hub_id = current_dispatch_hublist->at(i);

     railhubz* temp_hub;
          temp_hub = get_hub_via_id(temp_hub_id);

    int temp_train_id;

    temp_train_id =temp_hub->return_highest_prioty_train_id());

        trainz* prt_train;

            prt_train = get_entity_via_id(temp_train_id)

        std::vector<R_linez*>  tempLine_vector;
                     tempLine_vector = temp_hub->return_ptr_lineconections();

                    for (int i = 0; i<tempLine_vector->size(); i++ )
                R_linez* Prt_temp_line =   tempLine_vector[i];

                            ==    Prt_temp_line->vertex_slop;

                    temp_hub->
                     Prt_temp_line
                     prt_train->nexthub;



                 trainpriorty_master_que.push_back(



            if temp_hub->line[i].idoutpost


                railhubz *hub_creator->id;

                    railhubz *out_post->id;


        if (drection_sign == line->get_drection())
        { add to dispach que.}


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


void Cmd_agent_operator::check_cleanup_train_enityz_arrival()
{
    trainz* temptrain;

    for (i=0; i<train_list.size(); i++ )
    {
        temptrain = sym_manger->get_entity_via_id(int train_list[i]);

        if (temptrain->arived_final())
            {temptrain->removeenity();
            numberofarrvails++;
            }
    }
}



Cmd_agent_operator::establish_link();
{
//
    R_linez*Sherb_mtl =  new R_linez(mtl, otw, total_linez);
    R_linez*
    R_linez* mtl_ottaw = new R_linez(mtl, otw, total_linez);
    R_linez* otaw_Toronto = new R_linez(Toronto, otw, total_linez);

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
