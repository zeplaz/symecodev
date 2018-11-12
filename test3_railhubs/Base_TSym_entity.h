
//Base_TSym_entity.h

#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include "messaging/telagram.h"

class Base_TSym_entity

{
  private:

  int be_id;
   static int be_NextValidID;

//testz the id.
void set_id(int val);

public :

Base_TSym_entity(int id)

    {setID(id)}

virtual ~Base_TSym_entity(){}

virtual void update()=0;

virtual void bool Handle_telagram(const telagram& msg)=0;

int ID()const{return be_ID;}
};
#endif
