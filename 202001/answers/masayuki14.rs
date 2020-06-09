use std::io;

fn main() {
    b_shift_only();
}

fn split_input(input: &str) -> Vec<i32> {

    let vec: Vec<&str> = input.split(" ").collect();
    let mut int_vec: Vec<i32> = Vec::new();

    for v in vec {
        //int_vec.push(
        let input_num: i32 = match v.trim().parse() {
            Ok(num) => num ,
            Err(_)  => panic!("input wrong number."),
        };

        int_vec.push(input_num);
    }

    int_vec
}

fn b_shift_only() {

    let mut _n = String::new();
    io::stdin().read_line(&mut _n)
        .expect("Failed to read line")
        ;

    let mut input_str = String::new();
    io::stdin().read_line(&mut input_str)
        .expect("Failed to read line")
        ;

    let input_numbers = split_input(&input_str);


    println!("{}", count_vec(&input_numbers));

}

fn count_vec(numbers: &Vec<i32>) -> i32 {

    let mut all_even = true;
    for n in numbers {
        if n % 2 == 1 {
            all_even = false;
            break;
        }
    }

    if all_even {
        let bisected = bisect(&numbers);
        return 1 + count_vec(&bisected);
    }

    0
}

fn bisect(numbers: &Vec<i32>) -> Vec<i32> {

    let mut new_vec: Vec<i32> = Vec::new();
    for n in numbers {
        new_vec.push( n / 2 );
    }
    new_vec
}

