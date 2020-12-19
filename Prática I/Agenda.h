#ifndef AGENDA_H
#define AGENDA_H

#include "Data.h"
#include "Horario.h"

class ItemAgenda {
    public:
        ItemAgenda();
        ItemAgenda(const string &desc, const Data &dt, const Horario &hr);
        ItemAgenda(const ItemAgenda &it);
        void setDesc(const string &des);
        void setData(const Data &dt);
        void setHorario(const Horario &hr);
        const string & getDesc() const;
        const Data & getData() const;
        const Horario & getHorario() const;
    private:
        string descricao;
        Data d;
        Horario h;
};

class Agenda {
    public:
        Agenda();
        void inserirItem(const ItemAgenda &it);
        void compromissosData(const Data &d) const;
    private:
        ItemAgenda itens[1000];
        int qtdItens;
};

#endif