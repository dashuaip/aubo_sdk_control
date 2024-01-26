#ifndef EXAMPLE_6_H
#define EXAMPLE_6_H



class Example_6
{
public:
    /**
     * @brief demo
     *
     * Move to the target position in the form of joint or linear motion
     */
    static void demo(char SERVER_HOST[]);

    static void example_MoveLtoPosition(char SERVER_HOST[]);

    static void example_MoveJtoPosition(char SERVER_HOST[]);
};

#endif // EXAMPLE_6_H
