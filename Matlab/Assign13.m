syms p q real
p0 = 1
pf = sqrt(8)
f = @(p, q) p^2/p0^2 + q^2/p^2 + pf^2/q^2 - 3
p, q = solve(f, p) 