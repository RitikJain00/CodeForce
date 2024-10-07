 let arr = [10,20,30,40];

// let sum = 0;
// // arr.forEach((number) => {
// //     return sum += number;
// // });

// //console.log(sum);

// let ans = arr.reduce((acc,number) =>{
//     return acc += number;
// },0);

// console.log(ans);


// let ans = arr.map((number) => {
//     return number*number;
// })

// console.log(ans);

let obj = {
    name: "Ritik",
    course: "MCA",
    RegNo: "2023CA79",
    mobileNo: 7836086508
}

for(let key in obj)
{
    console.log(key, obj[key]);
}