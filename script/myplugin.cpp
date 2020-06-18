//
// Created by Mohamed Raessa on 3/22/20.
//

// Basic idea
// a class that inherits WorldPlugn with a public access.
// the constructor of the plugin is called and it can does something useful

#include <gazebo/gazebo.hh>
#include <iostream>
using namespace std;

namespace gazebo{
    class MyWorldPlugin : public WorldPlugin{
    public:
        MyWorldPlugin(){
            cout << "Welcome to Mohamed’s World!" << endl;
        }
    void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
    {
        //
    }
    };
    GZ_REGISTER_WORLD_PLUGIN(MyWorldPlugin);
}
