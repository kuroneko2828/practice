h = {"Yamada"=>34, "Katou"=>28, "Endou"=>18}
puts(h["Yamada"])
puts(h["Ishikawa"])
puts(h.fetch("Ishikawa", "不明"))
h2 = Hash.new{|hash, key| hash[key]="none"}
puts(h2["Ishikawa"])
p(h2)
h3 = Hash.new{"none"}
puts(h3["Ishikawa"])
p(h3)
puts(h.fetch("Ishikawa", "none"))
h.default = "none"
puts(h["Ishikawa"])

puts("-----")

h = {"Lemon"=>100, "Orange"=>150}
h["Orange"] = 100
p(h)
h.store("Apple", 200)
p(h)
h["Banana"] = 50
p(h)

puts("-----")

p(h)
puts(h.length)
puts(h.size)

puts("-----")

h = {"Lemon"=>100, "Orange"=>150}
h.each{|key, value|
    puts(key, value)
}
h.each_key{|key|
    puts(key)
}
h.each_value{|value|
    puts(value)
}

puts("-----")

p(h.keys)
p(h.values)
p(h.to_a)