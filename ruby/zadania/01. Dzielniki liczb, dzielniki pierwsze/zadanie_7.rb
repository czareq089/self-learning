n = gets.to_i

suma = 0
for i in 1..n-1
  if n % i == 0
    suma += i
  end
end

if suma == n
  puts "tak"
else
  puts "nie"
end