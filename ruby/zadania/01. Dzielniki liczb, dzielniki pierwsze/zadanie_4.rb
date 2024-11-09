n = gets.to_i
ilosc = 0

for i in 1..n do
  if n % i == 0
    ilosc += 1
  end
end

puts ilosc