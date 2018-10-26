
//AssetManager_h

#pragma once

#include <map>
#include <SFML/Graphics.hpp>

class AssetManager
{
public:
    AssetManager() {}
    AssetManager(){}

void LoadTexture (std::string name, std::string fileName);
sf::Texture &GetTexture(std::string name);

void LoadFont (std::string name, std::string fileName);
sf::Font &GetFont(std::string name);





void LoadVertex (std::string name, std::string fileName)
sf::Vertex &GetVertex(std::string name);

void LoadVertexArray(std::string name, std::string fileName)
sf::VertexArray* &GetVertexArray(std::string name);

private:
std::map<std::string, sf::Texture> _textures;
std::map<std::string, sf::Font> _fonts;
std::map<std::string, sf::audio> _audio;


std::map<std::string, sf::CircleShape> _cicleshapes;
std::map<std::string, sf::RectangleShape*> _ptrtoreckshaps;
std::map <std::string, sf::Vertex> _vertexzPoint;
std::map <std::string, sf::VertexArray*> _prtvertexarayMapLinez;
}
