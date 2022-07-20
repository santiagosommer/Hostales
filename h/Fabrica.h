#pragma once

class Fabrica{
    public:
        virtual IReloj getIReloj() = 0;
        virtual IUsuarios getIUsuarios() = 0;
        virtual IReloj getIReservas() = 0;
        virtual IHostales getIHostales() = 0;
}