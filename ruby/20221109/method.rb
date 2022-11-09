puts(self.to_s)
puts(self.class.to_s)

puts("-----")

def printName(name)
    puts("Hello "+name)
end
printName("Ishikawa")

puts("-----")

def printMsg(msg, *name)
    puts(msg+name.to_s)
end
printMsg("Hello")
printMsg("Hi", "Ishikawa", "Yamada")

puts("-----")

def myMax(n1, n2)
    if n1 > n2
        return n1
    else
        return n2
    end
end
puts(myMax(1,10))

puts("-----")

def calc(n1, n2)
    return n1+n2, n1-n2
end
plus, minus = calc(5, 10)
puts(plus, minus)