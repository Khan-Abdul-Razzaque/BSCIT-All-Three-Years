disp("To find: (i) number of people watch all the three games, (ii) number of people watch exactly one of the three games")
T = 550 // Total number of T.V watchers
F = 285 // watch football
H = 195 // watch hockey
B = 115 // watch baseball
F_and_B = 45 // watch football and baseball
F_and_H = 70 // watch football and hockey
H_and_B = 50 // watch hockey and baseball
N = 100 // do not watch any game
G = T - N // watch at least one of the three games
ans_i = G - F - H - B + F_and_B + F_and_H + H_and_B // watch all the three games
disp(ans_i, "The number of T.V watchers watch all the three games is:")

ans_ii = F + H + B - 2 * (H_and_B + F_and_H + H_and_B) + 3 * ans_i
disp(ans_ii, "The number of T.V watchers watch exactly one of the three games is:")