% T = readtable(modern-renewable-energy-consumption.csv,PreserveVariableNames,true)

% whos

h = heatmap(T,Entity,Code,Year,Hydropower (terawatt-hours),Solar (terawatt-hours),Wind (terawatt-hours),Other renewables (terawatt-hours))