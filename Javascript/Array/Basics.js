let arr = [1, 2, 3, 4, 5, 6, 7];

console.log(typeof arr.length);

arr.length = 11;

console.log(arr.length);
console.log(arr[100]);
console.log(arr);

let str = "ketan suthar was here!";

for (let entry of str)
{
	console.log(`${entry}`);
}