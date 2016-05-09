class Off : public State {

    protected:
        Off();

    private:
        /**
         * "Forbidden" copy cOffstructor. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the copy cOffstructor.
         */
        Off(const Off &);

        /**
         * "Forbidden" assignment operator. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the assignment operator.
         */
        Off& operator=(const Off &);

    public:
        virtual ~Off();

        virtual void Off(ParkingMachine * m);

        virtual bool off(ParkingMachine * m);
};