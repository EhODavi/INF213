#include "Agenda.h"

ItemAgenda::ItemAgenda() {}

ItemAgenda::ItemAgenda(const string &desc, const Data &dt, const Horario &hr): descricao(desc), d(dt), h(hr) {}

ItemAgenda::ItemAgenda(const ItemAgenda &it): descricao(it.getDesc()), d(it.getData()), h(it.getHorario()) {}

void ItemAgenda::setDesc(const string &des) {
    this->descricao = des;
}

void ItemAgenda::setData(const Data &dt) {
    this->d = dt;
}

void ItemAgenda::setHorario(const Horario &hr) {
    this->h = hr;
}

const string & ItemAgenda::getDesc() const {
    return this->descricao;
}

const Data & ItemAgenda::getData() const {
    return this->d;
}

const Horario & ItemAgenda::getHorario() const {
    return this->h;
}

Agenda::Agenda(): qtdItens(0) {}

void Agenda::inserirItem(const ItemAgenda &it) {
    this->itens[qtdItens] = it;
    this->qtdItens++;
}

void Agenda::compromissosData(const Data &d) const {
    for (int i = 0; i < this->qtdItens; i++) {
        if (this->itens[i].getData().difDias(d) == 0) {
            this->itens[i].getHorario().imprime();
            cout << " " << itens[i].getDesc() << endl;
        }
    }
}