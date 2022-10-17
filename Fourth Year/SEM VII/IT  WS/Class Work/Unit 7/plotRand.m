n = 50;                 % 50 data points
r = rand(n, 1);
plot(r);
% Draw a line from (0, m) to (n, m)
disp('m value')
m = mean(r)
hold on
plot([0, n], [m,m])
hold off
title('Mean of Random Uniform Data')