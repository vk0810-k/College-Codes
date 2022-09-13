function y = myRand(minRand , maxRand)
scale = maxRand - minRand;
offset = minRand;
y = offset+scale*rand;
    % Description: find the outputs a random number between the inputted values of minRand and maxRand 
    % Inputs: 2 number -> minRand, maxRand
    % Output: 1 number -> y, a random number with value between minRand & maxRand