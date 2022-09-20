% This script plots one point (time, temp) from data
% acquired from the user.
% Ask the user for the data to plot and store in the
% variables time and temp
time = input('Enter the time in hours: ');

temp = input('Enter the temperature in degrees C: ');
plot(time,temp,"*")

% Adjust the x and y axis limits

axis([time-2 time+2 temp-3 temp+3]);

% Label the axis
xlabel("Time (hours)")

ylabel("Temperature (C)")
% Add a title
title("Time vs Temperature for Just One Point!")
