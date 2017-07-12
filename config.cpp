class CfgPatches
{
    class fm
    {
        units[]={"fm_tfw_statue"};
        weapons[]={};
        requiredVersion= 1.00;
        version= 1.00;
fileName = "fm_statue.pbo";
author = "Florian Meier";
    };
};

class CfgVehicles
{
	class Strategic;
	class fm_tfw_statue : Strategic
	{
		scope = 2;
		model = \fm_statue\statue.p3d;
		placement = vertical;
		mapSize = 3;
		displayName = "TFW Statue";

		cost = 0;
		armor = 5000;
	};

};
