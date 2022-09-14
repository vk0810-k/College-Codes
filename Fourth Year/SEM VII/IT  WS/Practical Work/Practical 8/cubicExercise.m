% Create a script M-file called cubicExercise.m that contains the following five cells with code that:
    % a) plots myCubic(x) between the values of [-5, 5],
         A = plot(myCubic(x))
    % b) finds a local minimum of myCubic(x), located between 0 and 5,
         B = islocalmin(myCubic(x))
    % c) finds the all three roots of myCubic(x) using appropriate intervals [a,b]
         x = [0:4];
         y = myCubic(x);
         roots([1 2 -5 -8])
    % d) finds the value of the definite integral of myCubic(x) between -5 and 5.
         qadl(@myCubic,-5,5)