//test_entity1.h

#pragma once


#include <fstream>
#include <time.h>

#include "Sym_Map.h"
#include "Base_Tsym_entity.h"

#include "etcz/msg_cmdz.h"
#include "etcz/msg_dispatcher.h"

struct telagram;

class test_entity1 : public Base_TSym_entity

{
  private:
  int somedata;



  public:
      int reciveddata = 0;
  test_entity1(int id_e):Base_TSym_entity(id_e){}
~test_entity1();

void update();
//bool OnMessage(test_entity*, const Telegram&);

virtual bool Handle_telagram(const telagram& tela) =0;


int returnsomedata();

void changedata (int x);

};
