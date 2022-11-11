class Car
    def accele
        puts("アクセルを踏みました")
        speedChange
    end
    public :accele
    def break
        puts("ブレーキを踏みました")
        speedChange
    end
    public :break
    def speedChange
        puts("スピードが変わりました")
    end
    private :speedChange
end

car = Car.new()
car.accele
car.break

puts("-----")

class Car
    public
    def accele
        puts("アクセルを踏みました")
        speedChange
    end

    def break
        puts("ブレーキを踏みました")
        speedChange
    end

    private

    def speedChange
        puts("スピードが変わりました")
    end

end

car = Car.new()
car.accele
car.break
