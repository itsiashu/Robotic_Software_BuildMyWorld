#include<gazebo/gazebo.hh>

namespace gazebo
{
class WorldPluginProject1 : public WorldPlugin
{
public:
	WorldPluginProject1() : WorldPlugin() 
	{
		std::cout << "Wecome to my Home Office! \n";
	}

	void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf){}
};

GZ_REGISTER_WORLD_PLUGIN(WorldPluginProject1);
}
