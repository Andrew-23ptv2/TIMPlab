#pragma once
#include <string>
#include <map>
#include <vector>
#include <stdexcept>
#include <iostream>


class modAlphaCipher {
private:
    std::wstring numAlpha = L"АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ"; /**< Русский алфавит. */
    std::map<wchar_t, int> alphaNum; /**< Карта символов и их индексов. */
    std::vector<int> key; /**< Ключ в числовом формате. */
    std::vector<int> convert(const std::wstring& s);
    std::wstring convert(const std::vector<int>& v);

public:
    modAlphaCipher() = delete; /**< Конструктор по умолчанию запрещен. */
    modAlphaCipher(const std::wstring& skey);
    std::wstring encrypt(const std::wstring& open_text);
    std::wstring decrypt(const std::wstring& cipher_text);
};
