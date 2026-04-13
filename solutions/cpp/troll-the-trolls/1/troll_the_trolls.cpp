namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
enum class AccountStatus{
    troll, guest, user, mod
};
    
// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
enum class Action{
    read, write, remove
};
// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
bool display_post(AccountStatus poster, AccountStatus viewer){
    if(poster == AccountStatus::troll && viewer == AccountStatus::troll) return true;
    else if(poster != AccountStatus::troll) return true;
    else if(poster == AccountStatus::troll && viewer != AccountStatus::troll) return false;
    return false;
}
// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
bool permission_check(Action a, AccountStatus x){
    if(a == Action::read) return true;
    else if(a == Action::write && x != AccountStatus::guest) return true;
    else if(a == Action::remove && x == AccountStatus::mod) return true;
    
    return false;
}
// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
bool valid_player_combination(AccountStatus Player1, AccountStatus Player2){
    if((Player1 == AccountStatus::troll && Player2 != AccountStatus::troll)||(Player1 != AccountStatus::troll && Player2 == AccountStatus::troll)) return false;
    else if(Player1 == AccountStatus::guest || Player2 == AccountStatus::guest) return false;
    return true;
}
// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
bool has_priority(AccountStatus Player1, AccountStatus Player2){
    if(Player1 == Player2) return false;
    if(Player1 == AccountStatus::mod) return true;
    if(Player2 == AccountStatus::mod) return false;
    if(Player1 == AccountStatus::user) return true;
    if(Player2 == AccountStatus::user) return false;
    if(Player1 == AccountStatus::guest)return true;
    return false;
}
}  // namespace hellmath
