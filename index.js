class BankAccount {
    constructor(budget , name){
        this.name = name;
        let newbudget = budget;
        this.getBudget = function (){
            return newbudget;
        };
        this.deposit = function (amount){
            newbudget += amount;
        }
        this.withdraw = function (amount){
            if(amount <= _budget){
                newbudget -= amount;
            }
            else {
                console.log("NOT SUIT TO WITHDRAW!!!"); 
            }
        }  
    } 
}
const newClient = new BankAccount(2300 , "YİĞİT");
newClient.deposit(4600);
console.log(newClient.getBudget());



class Animal {
    constructor(genre,name){
        this.name = name;
        this.genre = genre;
        this.getName = function (){
            return this.name;
        };
        this.getGenre = function (){
            return this.genre;
        };
    }
}
class Dog extends Animal {
    constructor(genre,name){
        super(genre,name);
        this.bark = function (){
          console.log(`${name}:HAVHAVHAVHAVHAVHAVHAVHAV!!!`);
        }
    }
}
const lulu = new Dog ("DOBERMAN","LULU");
lulu.bark();
console.log(lulu.getGenre());
console.log(lulu.getName());


class Person {
    constructor(name,age){
        this.name = name;
        this.age = age;
        this.introduce = function (){
            console.log(`MERHABA İSMİM ${this.name} VE YAŞIM ${this.age}`);
        };
    }
}
const man = new Person ("YİĞİT" , 23);
man.introduce();