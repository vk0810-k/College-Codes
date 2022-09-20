% creates two different plots
x=1:5;
y1=[2 11 6 9 3];

y2=[4 5 8 6 2];
%Put a bar chart in Figure 1
figure(1)
bar(x,y1)
9%Change the axis settings
axis([0 6 1 12]);
9%Put plots using different y values on one plot with a legend
figure(2)
plot(x,y1,"k")
hold on
plot(x,y2,'ko')
grid on
legend( 'y1', 'y2')
%Change the axis settings
axis([0 6 1 12]);