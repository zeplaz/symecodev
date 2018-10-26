class SM {

Handlemsg(tela&):bool;
if

(currentstate->Onmessage(Owner, msg))
{
return true;
}
if (globalstae->OnMessage(Owner, msg)

{return true}
return false;


};

class entity
{
int enityid;

//return SM->handlemsg(msg);

};

class port {
int portdrection; //0-360
bool active = false;
bool transmit;
bool recive;
struct
{ int x;
int y;
}

};

class unit
{
};

int update()
{


}

class GameObject
{
public:
  Component *GetComponent( id );
  void AddComponent( Component *comp );
  bool HasComponent( id );

private:
  std::vector<Component *> m_components;
};


class System
{
public:
  // All systems must update each game loop
  virtual void Update( float dt ) = 0;

  // It's good practice to separate the construction and initialization code.
  virtual void Init( void ) = 0;

  // This recieves any messages sent to the core engine in Engine.cpp
  virtual void SendMessage( Message *msg ) = 0;

  ///All systems need a virtual destructor to have their destructor called
  virtual ~System( ) {}
};



class Engine
{
public:
  void Update( float dt );
  void MainLoop( void );
  void Add( System *sys );

private:
  std::vector<System> m_systems;
};


void SomeSystem::Update( float dt, GameObjectList objects )
{
  while(objects)
  {getlissners()
    SomeComponent *comp = objects->GetComponent( id );
    comp->DoStuff( dt );
    // ...

    objects = objects->next;
  }
}

lissnerlist x = entityx->getlissners();
for (auto *begin = 1; 1; 1;=1->next)
if 1->id == "MessageType")
1->funPtr();


typedef ActorComponent *(*ActorComponentCreator)(void);
typedef std::map<std::string, ActorComponentCreator> ActorComponentCreatorMap;
// some actor typedefs to make our life easier
typdef unsigned long ActorId;
typedef shared_ptr<Actor> StrongActorPtr;
typedef shared_ptr<ActorComponent> StrongActorComponentPtr;
class ActorFactory
{
ActorId m_lastActorId;
Creating Actors and Components   161
protected:
ActorComponentCreatorMap m_actorComponentCreators;
public:
ActorFactory(void);
StrongActorPtr CreateActor(const char* actorResource);
protected:
virtual StrongActorComponentPtr CreateComponent(TiXmlElement* pData);
private:
ActorId GetNextActorId(void) { ++m_lastActorId; return m_lastActorId; }
};


StrongActorPtr ActorFactory::CreateActor(const char* actorResource)
{
// Grab the root XML node
TiXmlElement* pRoot =
XmlResourceLoader::LoadAndReturnRootXmlElement(actorResource);
if (!pRoot)
{
GCC_ERROR(
“
Failed to create actor from resource:
”
+
std::string(actorResource));
return StrongActorPtr();
}
// create the actor instance
StrongActorPtr pActor(GCC_NEW Actor(GetNextActorId()));
if (!pActor->Init(pRoot))
{
GCC_ERROR(
“
Failed to initialize actor:
”
+ std::string(actorResource));
return StrongActorPtr();
}
// Loop through each child element and load the component
for (TiXmlElement* pNode = pRoot->FirstChildElement(); pNode;
pNode = pNode->NextSiblingElement())
162   Chapter 6
n
Game Actors and Component Architecture
{
StrongActorComponentPtr pComponent(CreateComponent(pNode));
if (pComponent)
{
pActor->AddComponent(pComponent);
pComponent->SetOwner(pActor);
}
else
{
return StrongActorPtr();
}
}
// Now that the actor has been fully created, run the post init phase
pActor->PostInit();
return pActor;
}


StrongActorComponentPtr ActorFactory::CreateComponent(TiXmlElement* pData)
{
Creating Actors and Components   163
std::string name(pData->Value());
StrongActorComponentPtr pComponent;
auto findIt = m_actorComponentCreators.find(name);
if (findIt != m_actorComponentCreators.end())
{
ActorComponentCreator creator = findIt->second;
pComponent.reset(creator());
}
else
{
GCC_ERROR(
“
Couldn
’
t find ActorComponent named
”
+ name);
return StrongActorComponentPtr(); // fail
}
// initialize the component if we found one
if (pComponent)
{
if (!pComponent->Init(pData))
{
GCC_ERROR(
“
Component failed to initialize:
”
+ name);
return StrongActorComponentPtr();
}
}


ActorComponent* CreateCubePhysicsComponent()
{
return GCC_NEW BoxPhysicsComponent;
}


weak_ptr<Pickup> pWeakPickup =
pActor->GetComponent<Pickup>(Pickup::COMPONENT_ID);
shared_ptr<Pickup> pPickup = MakeStrongPtr(pWeakPickup);

template <class Type>
shared_ptr<Type> MakeStrongPtr(weak_ptr<Type> pWeakPtr)
{
if (!pWeakPtr.expired())
return shared_ptr<Type>(pWeakPtr);
else
return shared_ptr<Type>();
}




class PrimeSearch
{
    int skip;
    int currentPosition;
    int maxElements;
    int     *currentPrime;
    int searches;


public:
PrimeSearch(int elements);
int GetNext(bool restart=false);
bool Done() { return (searches==*currentPrime); }
void Restart() { currentPosition=0; searches=0; }
};
I’ll show you a trivial example to make a point.
void FadeToBlack(Screen *screen)
{
int w = screen.GetWidth();
int h = screen.GetHeight();
int pixels = w * h;
PrimeSearch search(pixels);
int p;
while((p=search.GetNext())!=-1)
{
int x = p % w;
int y = h / p;
screen.SetPixel(x, y, BLACK);
}
}



class GCCRandom
{
private:
// DATA
unsigned int rseed;
unsigned int rseed_sp;
unsigned long mt[CMATH_N]; /* the array for the state vector */
int mti; /* mti==N+1 means mt[N] is not initialized */
// FUNCTIONS
public:
GCCRandom(void);
unsigned int Random( unsigned int n );
float Random( );
void SetRandomSeed(unsigned int n);
unsigned int GetRandomSeed(void);
void Randomize(void);
};
