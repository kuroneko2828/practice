DEBUG = false

amari = 12 % 3
if amari != 0 then
    puts("割り切れませんでした")
else
    puts("割り切れました")
end

puts("-----")

puts(1==1)
if true
    puts("true")
end

puts("-----")

city = "Nagoya"
if city == "Tokyo"
    puts("Tokyo")
elsif city == "Osaka"
    puts("Osaka")
elsif city == "Nagoya"
    puts("Nagoya")
else
    puts("Other City")
end

unless city == "Tokyo"
    puts("not Tokyo")
else
    puts("Tokyo")
end

puts("-----")

price = 0
product = "Strawberry"
puts(product)
case product
when "Melon", "Banana"
    price += 500
when "Apple", "Lemon", "Orange"
    price += 150
else
    price += 100
end
puts(price)

puts("-----")

result = 80
flag = result > 60 ? "合格":"不合格"
puts(flag)

puts("-----")

puts("debug") if DEBUG
puts("not debug") unless DEBUG