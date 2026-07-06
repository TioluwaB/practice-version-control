namespace targets {
// TODO: Insert the code for the alien class here
  class Alien {
    public:
      Alien(int x, int y){
        x_coordinate = x;
        y_coordinate = y;
      }
      int get_health(){
        return health;
      }
      int hit(){
        return --health;
      }
      bool is_alive(){
        bool ret = true;
        if(health <= 0){
          ret = false;
          health = 0;
        }
        return ret;
      }
      bool teleport(int x_new, int y_new){
        x_coordinate = x_new;
        y_coordinate = y_new;
        return true;
      }
      bool collision_detection(Alien other_alien){
          return other_alien.x_coordinate == x_coordinate && other_alien.y_coordinate == y_coordinate;
      }
      int x_coordinate;
      int y_coordinate;
    private:
      int health{3};
  };
}  // namespace targets
