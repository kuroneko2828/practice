class Car
    def initialize(carname)
        @name = carname
    end
    def setName(name)
        @name = name
    end
    def dispName
        puts(@name)
    end
    def dispClassname
        puts(self.class)
    end
    def dispStirnng(msg)
        puts(msg)
    end
end
car = Car.new("crown")
car.dispName
car2 = Car.new("civic")
car2.dispName

puts("-----")

car.dispClassname
car.dispStirnng("Hello")
car.setName("crown2")
car.dispName

puts("-----")

class Car
    def initialize(carname)
        @name = carname
    end
    attr_accessor :name
end

car = Car.new("civic")
puts(car.name)
car.name = "lexus"
puts(car.name)

puts("-----")

class Reji
    SHOUHIZEI = 0.1
    def initialize(init = 0)
        @sum = init
    end
    def kounyuu(kingaku)
        @sum += kingaku
    end
    def goukei
        return @sum *= (1+SHOUHIZEI)
    end
end

reji = Reji.new(0)
reji.kounyuu(100)
reji.kounyuu(80)
puts(reji.goukei)
puts(Reji::SHOUHIZEI)

puts("-----")

class Car
    @@count = 0
    def initialize(carname="未定義")
        @name=carname
        @@count += 1
    end
    def getCount()
        return @@count
    end
end
car1 = Car.new()
car2 = Car.new()
puts(car1.getCount())