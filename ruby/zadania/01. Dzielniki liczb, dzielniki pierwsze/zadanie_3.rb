n = gets.to_i
suma = 0
for i in 1..n do
  if n % i == 0
    suma += i
  end
end
puts suma