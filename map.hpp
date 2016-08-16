#ifndef DEF_MAP
#define DEF_MAP

#include <vector>
#include <iostream>

class Map {

	private:
		std::vector< std::vector<std::string> > mapElems;
		//std::vector<WarpPoint> warpPoints;
		std::vector<std::string> possibleMonsters;
		//std::vector<Monster> invokedMonsters;


	public:
		Map();
		Map(std::string mapName);

		void reload();

		void setMapElems();
		void setWarpPoints();
		void setPossibleMonsters();
		void setInvokedMonsters();

		std::vector< std::vector<std::string> > getMapElems();
		//std::vector<WarpPoint> getWarpPoints();
		//std::vector<Monster> getInvokedMonsters();

		std::string toString();
};

#endif
