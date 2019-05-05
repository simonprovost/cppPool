/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef POOL_WARPSYSTEM_HPP
#define POOL_WARPSYSTEM_HPP


namespace WarpSystem {

    class QuantumReactor {
        public:
        QuantumReactor();
        virtual ~QuantumReactor();
        bool isStable () ;
        void setStability(bool stability);

        private:
        bool _stability;

    };

    class Core {
        public:
        Core(QuantumReactor *reac);
        QuantumReactor *checkReactor();

        private:
        QuantumReactor *_coreReactor;
    };
}
#endif //POOL_WARPSYSTEM_HPP
