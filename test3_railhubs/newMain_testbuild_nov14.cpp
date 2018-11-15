


#include <fstream>   // for std::ifstream
#include <iostream>  // for std::cout
#include <sstream>   // for std::istringstream


main {

static int cycles;

printf("Welcome To Trainsym MainRun\n");

  Cmd_agent_operator* agent1;
  printf( "you have created an agent:\n")



printf("defultsettup input -1, will create 5 stations; \n
                      shrbyz, tro,mtl,mtl,Qcity,otta are ennumed \n
                      else the int you enter is the rounds of new hubz
                      will be that enum other\n
                      wise you will be asked to enter a
                       x and y point to place sation and given an ID.\n");


  load_startup();

  {
      int stattrain_rounds
      std::cin >> stattrain_rounds;

      if (stattrain_rounds ==-1 )
     {
         agent1->create_hubz(0);
         agent1->create_hubz(1);
         agent1->create_hubz(2);
         agent1->create_hubz(3);
         agent1->create_hubz(4);
     }

     for ( i=0; i< stattrain_rounds ;i++)

       {agent1->create_hubz(i+5);}




  }



  sf::RenderWindow window (sf::VideoMode(window_Width,window_Hight), "Test_hub1");
  window.setFramerateLimit(60);


// MAIN LOOP:

while (window.isOpen())
{ sf::Event prevent;
  cycles++;



        while (window.pollEvent(prevent))
        {
            {if (prevent.type ==sf::Event::Closed)
                        window.close();
                }

            {if (prevent.type == sf::Event::Resized)
                glViewport(0, 0, prevent.size.width, prevent.size.height);
            }
        }

        //get keypress for pause
        {
            printf("keypress rturn to input cmdz; \n");

            event::polling { keypres :returnkey,..}

        }


        agent1->scan_hubs_for_dispatch();
        agent1->check_cleanup_train_enityz_arrival();

    //update loop



    // drawupdate
        sym_manger->Draw_maped_hubz(window);
        sym_manger->Draw_maped_enties(window);
        printf("number of enties: %s \n" ,sym_manger->numberofentities());

    }




//while window open.

  {



      // sysem_loop

      // event polling loop

    //update_loop

    //draw_update_loop



  }


}
