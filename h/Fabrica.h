#pragma once

class IReloj;
class IUsuarios;
class IReservas;
class IHostales;

class Fabrica{
    public:
        virtual IReloj getIReloj() = 0;
        virtual IUsuarios getIUsuarios() = 0;
        virtual IReservas getIReservas() = 0;
        virtual IHostales getIHostales() = 0;
}