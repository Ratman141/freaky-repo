#include "vehicle_purchase.h"

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    if(kind == "car" || kind == "truck"){
        return true;
    }
    return false;
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    // TODO: Return the final decision in a sentence.
    if(option1 < option2){
        return option1 + " is clearly the better choice.";
    }
    else {
        return option2 + " is clearly the better choice.";
         }
}

// calc how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    // TODO: Return the age-corrected resell price.
    if(age < 3){
        return original_price * 8/10;
    }
    else if(age>=3 && age<10){
        return original_price * 7/10;
    }
    else{
        return original_price * 5/10;
    }
}

}  // namespace vehicle_purchase
