//
// Created by Abhishek_old on 22-08-2021.
//

#ifndef INC_4_OPERATOR_INT_CLASS_4_H
#define INC_4_OPERATOR_INT_CLASS_4_H

struct string
        {
        private:
            char str[10];
        public:
            explicit string(const char*);
            explicit operator int();
            void display(void);
        };


#endif //INC_4_OPERATOR_INT_CLASS_4_H
