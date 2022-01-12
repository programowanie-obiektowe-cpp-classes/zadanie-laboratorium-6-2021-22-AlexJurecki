#pragma once

#include "Human.hpp"
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    // Twoja implementacja tutaj
   
    //std::transform(ret_v.begin(), ret_v.end(), ret_v.begin(),people.birthday());
   // int j = people.size();
   // std::cout << "size avdsssssfaaaa  " << j << std::endl;
   // std::vector< char > aux;
    std::for_each(people.begin(), people.end(), [](Human &arg) {
        arg.birthday();
        std::cout << "BDAY" << std::endl;
    });

    std::transform(people.rbegin(), people.rend(), ret_v.begin(),[&](Human& arg) {
        std::cout << arg.isMonster() << std::endl;
        if (arg.isMonster() == true) {
           
            return 'n';
        }
        else{
            return 'y';}
    });
   
    for (int i = 0; i < ret_v.size(); ++i) {
        std::cout << ret_v[i] << std::endl;
    }
   
    return ret_v;
}


