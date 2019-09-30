let myAdder = function(num1,num2)
{
    let add= num1+num2;
    console.log(add);
}

let myMultipler = function(num1,num2)
{
    return num1*num2;
}
let user = function(name='user',course=0)
{
    return 'helloo '+name+' your course count is: '+course;
}

console.log(user('ketan',25));