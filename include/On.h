class On : public State {

    protected:
        On();

    private:
        /**
         * "Forbidden" copy constructor. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the copy constructor.
         */
        On(const On &);

        /**
         * "Forbidden" assignment operator. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the assignment operator.
         */
        On& operator=(const On &);

    public:
        virtual ~On();

        virtual void on(ParkingMachine * m);

        virtual bool off(ParkingMachine * m);
};