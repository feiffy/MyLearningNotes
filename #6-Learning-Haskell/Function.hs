f :: Num a => a -> a
f x = 4 * x + 1

fxy :: Num a => a -> a -> a
fxy x y = 4*x + 5*y + 7

lambda :: Num a => a -> a -> a
lambda = \x -> \y -> 4*x + 5*y + 7