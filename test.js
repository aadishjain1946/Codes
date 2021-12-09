function Tool(name, ID, isPower, isCheckedOut) {
    this.name = name;
    this.ID = ID;
    this.isPower = isPower;
    this.isCheckedOut = isCheckedOut;
}

let hammer = new Tool("hammer", 102, false, false)
console.log(hammer);
