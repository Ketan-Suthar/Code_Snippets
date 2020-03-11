function multiplier(factor) {
return number => number * factor;
}
let twice = multiplier(2);
console.log(twice(5));

let thrice = multiplier(3);
console.log(thrice(5));
// → 10