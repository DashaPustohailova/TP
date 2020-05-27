#include "Director.h"

Aviation* Director::createAviation(AviationBuilder& builder)
{
	builder.createAviation();
	return(builder.getAviation());
}

void Director::add(AviationBuilder& builder, int type)
{
	if (type == 1)
	{
		builder.createPassPlane();
	}
	else if (type == 2)
	{
		cout << '1';
		builder.createBattlePlane();
		cout << '2';
	}
	else if (type == 3)
	{
		builder.createHelicopter();
	}
	else if (type == 4)
	{
		builder.createQuadrocopter();
	}
}

void Director::add(AviationBuilder& builder, ifstream& in, string& type)
{
	if (type == "Passenger plane")
	{
		builder.createPassPlane(in);
	}
	else if (type == "Battle plane")
	{
		builder.createBattlePlane(in);
	}
	else if (type == "Helicopter")
	{
		builder.createHelicopter(in);
	}
	else if (type == "Quadrocopter")
	{
		builder.createQuadrocopter(in);
	}
}

void Director::change(Aviation* avia, string& name, int param, int data)
{
	for (int i = 0; i < avia->vp.size(); i++)
	{
		if (avia->vp[i].name == name)
		{
			if (param == 2)
			{
				avia->vp[i].weight = data;
			}
			else if (param == 4)
			{
				avia->vp[i].num_of_engine = data;
			}
			else if (param == 5)
			{
				avia->vp[i].num_of_wing = data;
			}
			else if (param == 8)
			{
				avia->vp[i].speed_of_flight = data;
			}
			else if (param == 11)
			{
				avia->vp[i].crew = data;
			}
			return;
		}
	}
	for (int i = 0; i < avia->vb.size(); i++)
	{
		if (avia->vb[i].name == name)
		{
			if (param == 2)
			{
				avia->vb[i].weight = data;
			}
			else if (param == 4)
			{
				avia->vb[i].num_of_engine = data;
			}
			else if (param == 5)
			{
				avia->vb[i].num_of_wing = data;
			}
			else if (param == 8)
			{
				avia->vb[i].speed_of_flight = data;
			}
			else if (param == 11)
			{
				avia->vb[i].crew = data;
			}
			return;
		}
	}
	for (int i = 0; i < avia->vh.size(); i++)
	{
		if (avia->vh[i].name == name)
		{
			if (param == 2)
			{
				avia->vh[i].weight = data;
			}
			else if (param == 4)
			{
				avia->vh[i].num_of_engine = data;
			}
			else if (param == 5)
			{
				avia->vh[i].num_of_wing = data;
			}
			else if (param == 8)
			{
				avia->vh[i].speed_of_flight = data;
			}
			else if (param == 11)
			{
				avia->vh[i].crew = data;
			}
			return;
		}
	}
	for (int i = 0; i < avia->vq.size(); i++)
	{
		if (avia->vq[i].name == name)
		{
			if (param == 2)
			{
				avia->vq[i].weight = data;
			}
			else if (param == 4)
			{
				avia->vq[i].num_of_engine = data;
			}
			else if (param == 5)
			{
				avia->vq[i].num_of_wing = data;
			}
			else if (param == 8)
			{
				avia->vq[i].speed_of_flight = data;
			}
			else if (param == 11)
			{
				avia->vq[i].crew = data;
			}
			return;
		}
	}
}

void Director::change(Aviation* avia, string& name, int param, string& data)
{
	for (int i = 0; i < avia->vp.size(); i++)
	{
		if (avia->vp[i].name == name)
		{
			if (param == 1)
			{
				avia->vp[i].name = data;
			}
			else if (param == 3)
			{
				avia->vp[i].type_of_engine = data;
			}
			else if (param == 6)
			{
				avia->vp[i].type_of_wing = data;
			}
			else if (param == 7)
			{
				avia->vp[i].type_of_chassis = data;
			}
			else if (param == 9)
			{
				avia->vp[i].type_of_takeoff = data;
			}
			else if (param == 10)
			{
				avia->vp[i].type_of_control_method = data;
			}
			else if (param == 12)
			{
				avia->vp[i].year_of_prod = data;
			}
			else if (param == 13)
			{
				avia->vp[i].type_of_weapon = data;
			}
			return;
		}
	}
	for (int i = 0; i < avia->vb.size(); i++)
	{
		if (avia->vb[i].name == name)
		{
			if (param == 1)
			{
				avia->vb[i].name = data;
			}
			else if (param == 3)
			{
				avia->vb[i].type_of_engine = data;
			}
			else if (param == 6)
			{
				avia->vb[i].type_of_wing = data;
			}
			else if (param == 7)
			{
				avia->vb[i].type_of_chassis = data;
			}
			else if (param == 9)
			{
				avia->vb[i].type_of_takeoff = data;
			}
			else if (param == 10)
			{
				avia->vb[i].type_of_control_method = data;
			}
			else if (param == 12)
			{
				avia->vb[i].year_of_prod = data;
			}
			else if (param == 13)
			{
				avia->vb[i].type_of_weapon = data;
			}
			return;
		}
	}
	for (int i = 0; i < avia->vh.size(); i++)
	{
		if (avia->vh[i].name == name)
		{
			if (param == 1)
			{
				avia->vh[i].name = data;
			}
			else if (param == 3)
			{
				avia->vh[i].type_of_engine = data;
			}
			else if (param == 6)
			{
				avia->vh[i].type_of_wing = data;
			}
			else if (param == 7)
			{
				avia->vh[i].type_of_chassis = data;
			}
			else if (param == 9)
			{
				avia->vh[i].type_of_takeoff = data;
			}
			else if (param == 10)
			{
				avia->vh[i].type_of_control_method = data;
			}
			else if (param == 12)
			{
				avia->vh[i].year_of_prod = data;
			}
			else if (param == 13)
			{
				avia->vh[i].type_of_weapon = data;
			}
			return;
		}
	}
	for (int i = 0; i < avia->vq.size(); i++)
	{
		if (avia->vq[i].name == name)
		{
			if (param == 1)
			{
				avia->vq[i].name = data;
			}
			else if (param == 3)
			{
				avia->vq[i].type_of_engine = data;
			}
			else if (param == 6)
			{
				avia->vq[i].type_of_wing = data;
			}
			else if (param == 7)
			{
				avia->vq[i].type_of_chassis = data;
			}
			else if (param == 9)
			{
				avia->vq[i].type_of_takeoff = data;
			}
			else if (param == 10)
			{
				avia->vq[i].type_of_control_method = data;
			}
			else if (param == 12)
			{
				avia->vq[i].year_of_prod = data;
			}
			else if (param == 13)
			{
				avia->vq[i].type_of_weapon = data;
			}
			return;
		}
	}
}

void Director::del(Aviation* avia, string& name)
{
	int tmp = -1;
	for (int i = 0; i < avia->vp.size(); i++)
	{
		if (avia->vp[i].name == name)
		{
			tmp = i;
			break;
		}
	}
	if (tmp != -1)
	{
		avia->vp.erase(avia->vp.begin() + tmp);
		return;
	}
	for (int i = 0; i < avia->vb.size(); i++)
	{
		if (avia->vb[i].name == name)
		{
			tmp = i;
			break;
		}
	}
	if (tmp != -1)
	{
		avia->vb.erase(avia->vb.begin() + tmp);
		return;
	}
	for (int i = 0; i < avia->vh.size(); i++)
	{
		if (avia->vh[i].name == name)
		{
			tmp = i;
			break;
		}
	}
	if (tmp != -1)
	{
		avia->vh.erase(avia->vh.begin() + tmp);
		return;
	}
	for (int i = 0; i < avia->vq.size(); i++)
	{
		if (avia->vq[i].name == name)
		{
			tmp = i;
			break;
		}
	}
	if (tmp != -1)
	{
		avia->vq.erase(avia->vq.begin() + tmp);
		return;
	}
}