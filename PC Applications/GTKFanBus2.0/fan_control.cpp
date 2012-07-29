#include "fan_control.h"

fan_control::fan_control()
{
	speed = 0;
	
	//Set Frame Label
	set_label("Fan Speed");

	//Add Table to Frame
	add(table);

	//Set Table to 2x2
	table.resize(2, 2);

	//Set up slider objects
	slider_fan.set_size_request(85, 20);
	slider_fan.set_draw_value(false);
	slider_fan.set_range(0, 255);
	slider_fan.set_increments(1, 5);

	table.attach(slider_fan, 0, 2, 0, 1);
}
