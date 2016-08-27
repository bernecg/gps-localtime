class GpsData {
   public:
    GpsData(float _lat, float _long) : gps_lat_(_lat), gps_long_(_long){};

   private:
    float gps_lat_;
    float gps_long_;
};
