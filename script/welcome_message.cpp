#include<gazebo/gazebo.hh>

namespace gazebo
{
class BuildMyWorld : public WorldPlugin
{
public:
	BuildMyWorld() : WorldPlugin() 
	{
		std::cout << "Wecome to Ashutosh's World!\n";
		std::cout << "This is my Home Office.\n";
	}

	void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf){}
};

GZ_REGISTER_WORLD_PLUGIN(BuildMyWorld);
}
