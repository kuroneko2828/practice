sum = 0
for i in 1..3
    sum += i
end
puts(sum)

puts("-----")
s = "a".."e"
puts(s)

puts("-----")

(1..4).each{|n|
    puts(n)
}

puts("-----")

3.times{
    puts("Hello")
}
3.upto(7){|n|
    puts(n)
}
7.downto(3){|n|
    puts(n)
}

puts("-----")

2.4.step(5.3, 0.8){|n|
    puts(n)
}

puts("-----")

num = 1
loop{
    puts(num)
    num += 1
    break if num > 3
}

puts("-----")

(0..9).each{|n|
    next if n % 3 != 0
    puts(n)
}

puts("-----")

3.times{
    num = rand(9)
    puts(num)
    redo if num % 2 == 0
}

puts("-----")

num = 1
num *= 2 while num < 1000
puts(num)