module Person = {
  type details = {
    name: string,
    age: int,
  };

  let person = {name: "Adam", age: 31};
  let make = () => person;
  let greet = details =>
    "Hello. My name is "
    ++ details.name
    ++ " and I am "
    ++ string_of_int(details.age)
    ++ " years old.";
};

let adam = Person.make();

Js.log("module");
Js.log(adam);
Js.log(" ");

let greet: string = Person.greet(adam);

Js.log("string");
Js.log(greet);
Js.log(" ");

let list: list(int) = [1, 2, 3, 4, 5];

Js.log("list(int)");
Js.log(list);
Js.log(" ");

let nestedList: list(Person.details) = [
  {name: "foo", age: 23},
  {name: "bar", age: 28},
  {name: "baz", age: 14},
  {name: "lors", age: 98},
  {name: "crup", age: 11},
];

Js.log("list(Person.details)");
Js.log(nestedList);
Js.log(" ");

let arr: array(string) = [|"a", "b"|];

Js.log("array(string)");
Js.log(arr);
Js.log(" ");

let tuple: (int, int) = (1, 2);

Js.log("(int, int)");
Js.log(tuple);
Js.log(" ");

type obj = {. color: string};

let car: obj = {pub color = "Red"};

Js.log("record");
Js.log(car);
Js.log(" ");

type myResponseVariant =
  | Yes
  | No
  | PrettyMuch;

let areYouCrushingIt = Yes;

Js.log("Variant");
Js.log(areYouCrushingIt);
Js.log(" ");
