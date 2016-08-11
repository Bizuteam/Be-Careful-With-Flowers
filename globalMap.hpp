#ifndef DEF_GMAP
#define DEF_GMAP

#include <map>

#include "map.hpp"

class GlobalMap {

	private:
		Map currentMap;
		std::map<std::string, Map> maps;
		std::string lastMapName;

	public:
		GlobalMap(std::string mode);

		void reload(std::string mapName);

		void setCurrentMap();
		void setMaps();
		void setLastMapName();

		Map getMap(std::string mapName);
		Map getCurrentMap();
		std::map<std::string, Map> getMaps();
		std::string getLastMapName();

		std::string toString();
};

#endif
