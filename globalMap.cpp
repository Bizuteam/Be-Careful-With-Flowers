#include "globalMap.hpp"

GlobalMap::GlobalMap(std::string mode) {

}

void reload(std::string mapName) {
	
}

void GlobalMap::setCurrentMap() {

}

void GlobalMap::setMaps() {

}

void GlobalMap::setLastMapName() {

}

Map getMap(std::string mapName) {
	return NULL;
}

Map GlobalMap::getCurrentMap() {
	return currentMap;
}

std::map<std::string, Map> GlobalMap::getMaps() {
	return maps;
}

std::string GlobalMap::getLastMapName() {
	return lastMapName;
}

std::string GlobalMap::toString() {
	return "notyet";
}
