

#include "InputManager.hpp"


bool InputManager::IsVectorArrayClicked (sf::VectorArray* Vect_arry_prt_objkt,sf::Mouse::Button button1,
sf::RenderWindow &window);
{
    if (sf::Mouse::isButtonPressed (button1))
        {  sf::IntRect tempRect (Vect_arry_prt_objkt->getPosition().x, Vect_arry_prt_objkt->getPosition().y
            , Vect_arry_prt_objkt.getGlobalBounds().width, Vect_arry_prt_objkt.getGlobalBound(.hight);

            if ( tempRect.contains(sf::Mouse::getPosition( window)))
              {
                return true;
              }
          }
          return false;
        }


      /*bool InputManager::IsMenuItemClicked (Menu obj_menu, sf::Mouse Button Button1,

      if (sf::Mouse::isButtonPressed (button1))
          {  sf::IntRect tempRect (obj_menu .getPosition().x, obj_menu.getPosition().y
              , obj_menu.getGlobalBounds().width, obj_menu.getGlobalBound(.hight);

              if ( tempRect.contains(sf::Mouse::getPosition( window)))
                {
                  return true;
                }
            }
            return false;
          }

      */

sf::Vector2i InputManager::GetMousePostion(sf:: Renderwindow & window)
{
return sf::Mouse::getPosition(window);

}
