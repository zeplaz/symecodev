//test entity1.cpp

#include "test_entity1.h"
#include <iostream>

void test_entity1::changedata (int x)
    {
        reciveddata = x;

    }

bool test_entity1::Handle_telagram(const telagram& tela) const
  {

      if ( tela.sender == this->ID())
      {
          std::cout << tela.msg << "send cmd to self";


          return true;
      }

      if ( tela.receiver == this->ID())
        {
            changedata(tela.msg);

        }


       return false;

     }


  void test_entity1::update()

  {
  int var;
  int destation_id;
  int msg_cmdz;

  printf("enty data: %s" \n, somedata );

    printf("updateroundtest_endty s% input:int: \n",this->ID() );
    std::cin >> var;

   if (var ==1)
    {
      std::cout << "plzinput id to send to:";
          std::cin >> destation_id;
          std::cout << std::endl<< "plzinput newdata";
          std::cin >> msg_cmdz;

    telagram  cmd_telagram(0,this->ID(), destation_id, 1, msg_cmdz);
    this->Handle_telagram(cmd_telagram);

    }
    else {std::cout << "no vaild cmd try againz 1 for cmd issue" << std::endl;}


    std::cout << "somedata:" << "for obejct_id" << this->ID() << "recivedata"<< reciveddata ;
  }
