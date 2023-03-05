/*
** Project          : Boids
** File description : Json Class Description
** Creator          : Tom Bariteau-Peter
** Created on       : 23/05/2022
*/

#pragma once

#include <vector>
#include <string>

namespace json_type {
    union select_type {
        std::int32_t nb;
        std::string str;
    };

    struct elements {
        std::string name;
        select_type value;
    };

    class json {
        public :
            json(std::string name);
            select_type get_element_by_name(std::string name);
            json get_obj_by_name(std::string name);

        private :
            std::string name;
            std::vector<elements> _elements;
            std::vector<json> _obj;
    };
}
