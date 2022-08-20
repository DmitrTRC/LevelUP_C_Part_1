//
// Created by Dmitry Morozov on 21/8/22.
//

#ifndef LEVELUP_C_PARTI_FEATURE_PROJECT_STRUCTURE_TASK2_HPP
#define LEVELUP_C_PARTI_FEATURE_PROJECT_STRUCTURE_TASK2_HPP

#include <tuple>


namespace task2 {
    class Solution {
    public:

        auto solution (std::tuple<long, long> &) -> std::tuple<long, long, long, long>;

        void run ();

    private:
        long readInt (const char *);
    };
}
#endif //LEVELUP_C_PARTI_FEATURE_PROJECT_STRUCTURE_TASK2_HPP
