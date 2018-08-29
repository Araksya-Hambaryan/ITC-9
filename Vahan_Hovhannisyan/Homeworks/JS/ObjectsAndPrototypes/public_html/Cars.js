function Car(model, horsePower, color) {
    this.model = model,
    this.horsePower = horsePower,
    this.color = color;
}

Car.prototype.wheels = 4;
var Car1 = new Car("Ferrari", 500, "Red");
var Car2 = new Car("Bentley", 300, "Grey");

console.log(Car1.wheels);
console.log(Car2.wheels);
console.log(Car1);
console.log(Car2);