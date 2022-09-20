function [ A ] = calcrectarea( L,W )
% CALRECTAREA Finds the area of a rectangle rounded up to
% the nearest integer.
% Format of call: calRectArea(L,W)
% Returns rectangle area rounded up to the nearest integer
% Compute the area and round the result up to the nearest integer.
A = ceil( L * W );
end
