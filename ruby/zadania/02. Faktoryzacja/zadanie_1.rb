def factorization(n)
  factor = 2
  while n > 1
    while n % factor == 0
      puts factor
      n /= factor
    end
    factor += 1
  end
end

n = gets.to_i
factorization(n)