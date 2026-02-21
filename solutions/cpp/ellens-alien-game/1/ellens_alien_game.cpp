namespace targets {
// TODO: Insert the code for the alien class here
    class Alien{
        private:
            int health = 3;
        public:
            int x_coordinate;
            int y_coordinate;
            int get_health(){
                return health;
            }
            bool is_alive(){
                if(health>0){
                    return true;
                }
                else return false;
            }
            bool hit(){
                if(health>0){
                    health--;
                    return true;
                }
                return false;
            }
            bool teleport(int  x, int y){
                x_coordinate = x;
                y_coordinate = y;
                return true;
            }
            bool collision_detection(Alien& z){
                if(x_coordinate == z.x_coordinate && y_coordinate == z.y_coordinate){
                    return true;
                }
                else return false;
            }
            Alien(int x, int y) : x_coordinate(x), y_coordinate(y) {}
    };
}  // namespace targets
