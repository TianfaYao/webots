function wb_joystick_set_constant_force(level)
% Usage: wb_joystick_set_constant_force(level)
% Matlab API for Webots
% Online documentation is available <a href="https://www.cyberbotics.com/doc/reference/joystick">here</a>

calllib('libController', 'wb_joystick_set_constant_force', level);
