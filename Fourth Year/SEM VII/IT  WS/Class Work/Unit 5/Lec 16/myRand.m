function y = myRand(minRand , maxRand)
scale = maxRand - minRand;
offset = minRand;
y = offset+scale*rand;