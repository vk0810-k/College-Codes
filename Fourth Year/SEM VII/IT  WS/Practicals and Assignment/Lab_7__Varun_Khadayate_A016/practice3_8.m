row = [1.2 1.4 1.8 1.3];
col = [2.2 2.5 1.7 2.9];
mat = [row;col]
% Save the matrix as an ASCII file.
save salesfigs.dat mat -ascii
% Load .dat file
load salesfigs.dat
x=salesfigs(1,:)
y=salesfigs(2,:)
plot(1:numel(x),x,'o')
hold on
plot(1:numel(y),y,'.','MarkerSize',20)
ylabel('Sales(billion)')
title('ABC corporation Sales:2013')
legend('Division A','Division B')
hold off