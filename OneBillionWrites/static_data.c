//
//  weather_stations.c
//  OneBillionWrites
//
//  Created by Badger on 18/8/2024.
//

#include "static_data.h"

name_and_length static_weather_station_names[NUM_OF_STATIC_WEATHER_STATIONS] = {
    {5, "Abha;"},
    {8, "Abidjan;"},
    {7, "Abeche;"},
    {6, "Accra;"},
    {12, "Addis Ababa;"},
    {9, "Adelaide;"},
    {5, "Aden;"},
    {6, "Ahvaz;"},
    {12, "Albuquerque;"},
    {10, "Alexandra;"},
    {11, "Alexandria;"},
    {8, "Algiers;"},
    {14, "Alice Springs;"},
    {7, "Almaty;"},
    {10, "Amsterdam;"},
    {7, "Anadyr;"},
    {10, "Anchorage;"},
    {17, "Andorra la Vella;"},
    {7, "Ankara;"},
    {13, "Antananarivo;"},
    {12, "Antsiranana;"},
    {12, "Arkhangelsk;"},
    {9, "Ashgabat;"},
    {7, "Asmara;"},
    {6, "Assab;"},
    {7, "Astana;"},
    {7, "Athens;"},
    {8, "Atlanta;"},
    {9, "Auckland;"},
    {7, "Austin;"},
    {8, "Baghdad;"},
    {7, "Baguio;"},
    {5, "Baku;"},
    {10, "Baltimore;"},
    {7, "Bamako;"},
    {8, "Bangkok;"},
    {7, "Bangui;"},
    {7, "Banjul;"},
    {10, "Barcelona;"},
    {5, "Bata;"},
    {7, "Batumi;"},
    {8, "Beijing;"},
    {7, "Beirut;"},
    {9, "Belgrade;"},
    {12, "Belize City;"},
    {9, "Benghazi;"},
    {7, "Bergen;"},
    {7, "Berlin;"},
    {7, "Bilbao;"},
    {6, "Birao;"},
    {8, "Bishkek;"},
    {7, "Bissau;"},
    {9, "Blantyre;"},
    {13, "Bloemfontein;"},
    {6, "Boise;"},
    {9, "Bordeaux;"},
    {7, "Bosaso;"},
    {7, "Boston;"},
    {7, "Bouake;"},
    {11, "Bratislava;"},
    {12, "Brazzaville;"},
    {11, "Bridgetown;"},
    {9, "Brisbane;"},
    {9, "Brussels;"},
    {10, "Bucharest;"},
    {9, "Budapest;"},
    {10, "Bujumbura;"},
    {9, "Bulawayo;"},
    {7, "Burnie;"},
    {6, "Busan;"},
    {15, "Cabo San Lucas;"},
    {7, "Cairns;"},
    {6, "Cairo;"},
    {8, "Calgary;"},
    {9, "Canberra;"},
    {10, "Cape Town;"},
    {9, "Changsha;"},
    {10, "Charlotte;"},
    {11, "Chiang Mai;"},
    {8, "Chicago;"},
    {10, "Chihuahua;"},
    {9, "Chișinău;"},
    {11, "Chittagong;"},
    {10, "Chongqing;"},
    {13, "Christchurch;"},
    {19, "City of San Marino;"},
    {8, "Colombo;"},
    {9, "Columbus;"},
    {8, "Conakry;"},
    {11, "Copenhagen;"},
    {8, "Cotonou;"},
    {7, "Cracow;"},
    {7, "Da Lat;"},
    {8, "Da Nang;"},
    {6, "Dakar;"},
    {7, "Dallas;"},
    {9, "Damascus;"},
    {8, "Dampier;"},
    {14, "Dar es Salaam;"},
    {7, "Darwin;"},
    {9, "Denpasar;"},
    {7, "Denver;"},
    {8, "Detroit;"},
    {6, "Dhaka;"},
    {7, "Dikson;"},
    {5, "Dili;"},
    {9, "Djibouti;"},
    {7, "Dodoma;"},
    {8, "Dolisie;"},
    {7, "Douala;"},
    {6, "Dubai;"},
    {7, "Dublin;"},
    {8, "Dunedin;"},
    {7, "Durban;"},
    {9, "Dushanbe;"},
    {10, "Edinburgh;"},
    {9, "Edmonton;"},
    {8, "El Paso;"},
    {8, "Entebbe;"},
    {6, "Erbil;"},
    {8, "Erzurum;"},
    {10, "Fairbanks;"},
    {13, "Fianarantsoa;"},
    {15, "Flores,  Peten;"},
    {10, "Frankfurt;"},
    {7, "Fresno;"},
    {8, "Fukuoka;"},
    {6, "Gabès;"},
    {9, "Gaborone;"},
    {7, "Gagnoa;"},
    {8, "Gangtok;"},
    {8, "Garissa;"},
    {7, "Garoua;"},
    {12, "George Town;"},
    {7, "Ghanzi;"},
    {11, "Gjoa Haven;"},
    {12, "Guadalajara;"},
    {10, "Guangzhou;"},
    {15, "Guatemala City;"},
    {8, "Halifax;"},
    {8, "Hamburg;"},
    {9, "Hamilton;"},
    {10, "Hanga Roa;"},
    {6, "Hanoi;"},
    {7, "Harare;"},
    {7, "Harbin;"},
    {9, "Hargeisa;"},
    {8, "Hat Yai;"},
    {7, "Havana;"},
    {9, "Helsinki;"},
    {10, "Heraklion;"},
    {10, "Hiroshima;"},
    {17, "Ho Chi Minh City;"},
    {7, "Hobart;"},
    {10, "Hong Kong;"},
    {8, "Honiara;"},
    {9, "Honolulu;"},
    {8, "Houston;"},
    {7, "Ifrane;"},
    {13, "Indianapolis;"},
    {8, "Iqaluit;"},
    {8, "Irkutsk;"},
    {9, "Istanbul;"},
    {6, "Izmir;"},
    {13, "Jacksonville;"},
    {8, "Jakarta;"},
    {9, "Jayapura;"},
    {10, "Jerusalem;"},
    {13, "Johannesburg;"},
    {4, "Jos;"},
    {5, "Juba;"},
    {6, "Kabul;"},
    {8, "Kampala;"},
    {6, "Kandi;"},
    {7, "Kankan;"},
    {5, "Kano;"},
    {12, "Kansas City;"},
    {8, "Karachi;"},
    {8, "Karonga;"},
    {10, "Kathmandu;"},
    {9, "Khartoum;"},
    {9, "Kingston;"},
    {9, "Kinshasa;"},
    {8, "Kolkata;"},
    {13, "Kuala Lumpur;"},
    {7, "Kumasi;"},
    {8, "Kunming;"},
    {7, "Kuopio;"},
    {12, "Kuwait City;"},
    {5, "Kyiv;"},
    {6, "Kyoto;"},
    {9, "La Ceiba;"},
    {7, "La Paz;"},
    {6, "Lagos;"},
    {7, "Lahore;"},
    {17, "Lake Havasu City;"},
    {12, "Lake Tekapo;"},
    {27, "Las Palmas de Gran Canaria;"},
    {10, "Las Vegas;"},
    {11, "Launceston;"},
    {6, "Lhasa;"},
    {11, "Libreville;"},
    {7, "Lisbon;"},
    {12, "Livingstone;"},
    {10, "Ljubljana;"},
    {7, "Lodwar;"},
    {5, "Lome;"},
    {7, "London;"},
    {12, "Los Angeles;"},
    {11, "Louisville;"},
    {7, "Luanda;"},
    {11, "Lubumbashi;"},
    {7, "Lusaka;"},
    {16, "Luxembourg City;"},
    {5, "Lviv;"},
    {5, "Lyon;"},
    {7, "Madrid;"},
    {10, "Mahajanga;"},
    {9, "Makassar;"},
    {8, "Makurdi;"},
    {7, "Malabo;"},
    {5, "Male;"},
    {8, "Managua;"},
    {7, "Manama;"},
    {9, "Mandalay;"},
    {6, "Mango;"},
    {7, "Manila;"},
    {7, "Maputo;"},
    {10, "Marrakesh;"},
    {10, "Marseille;"},
    {5, "Maun;"},
    {6, "Medan;"},
    {8, "Mek'ele;"},
    {10, "Melbourne;"},
    {8, "Memphis;"},
    {9, "Mexicali;"},
    {12, "Mexico City;"},
    {6, "Miami;"},
    {6, "Milan;"},
    {10, "Milwaukee;"},
    {12, "Minneapolis;"},
    {6, "Minsk;"},
    {10, "Mogadishu;"},
    {8, "Mombasa;"},
    {7, "Monaco;"},
    {8, "Moncton;"},
    {10, "Monterrey;"},
    {9, "Montreal;"},
    {7, "Moscow;"},
    {7, "Mumbai;"},
    {9, "Murmansk;"},
    {7, "Muscat;"},
    {6, "Mzuzu;"},
    {10, "N'Djamena;"},
    {5, "Naha;"},
    {8, "Nairobi;"},
    {18, "Nakhon Ratchasima;"},
    {7, "Napier;"},
    {7, "Napoli;"},
    {10, "Nashville;"},
    {7, "Nassau;"},
    {6, "Ndola;"},
    {10, "New Delhi;"},
    {12, "New Orleans;"},
    {14, "New York City;"},
    {11, "Ngaoundere;"},
    {7, "Niamey;"},
    {8, "Nicosia;"},
    {8, "Niigata;"},
    {11, "Nouadhibou;"},
    {11, "Nouakchott;"},
    {12, "Novosibirsk;"},
    {5, "Nuuk;"},
    {6, "Odesa;"},
    {8, "Odienne;"},
    {14, "Oklahoma City;"},
    {6, "Omaha;"},
    {11, "Oranjestad;"},
    {5, "Oslo;"},
    {7, "Ottawa;"},
    {12, "Ouagadougou;"},
    {11, "Ouahigouya;"},
    {11, "Ouarzazate;"},
    {5, "Oulu;"},
    {10, "Palembang;"},
    {8, "Palermo;"},
    {13, "Palm Springs;"},
    {17, "Palmerston North;"},
    {12, "Panama City;"},
    {8, "Parakou;"},
    {6, "Paris;"},
    {6, "Perth;"},
    {25, "Petropavlovsk-Kamchatsky;"},
    {13, "Philadelphia;"},
    {11, "Phnom Penh;"},
    {8, "Phoenix;"},
    {11, "Pittsburgh;"},
    {10, "Podgorica;"},
    {13, "Pointe-Noire;"},
    {10, "Pontianak;"},
    {13, "Port Moresby;"},
    {11, "Port Sudan;"},
    {10, "Port Vila;"},
    {12, "Port-Gentil;"},
    {14, "Portland (OR);"},
    {6, "Porto;"},
    {7, "Prague;"},
    {6, "Praia;"},
    {9, "Pretoria;"},
    {10, "Pyongyang;"},
    {6, "Rabat;"},
    {8, "Rangpur;"},
    {8, "Reggane;"},
    {10, "Reykjavík;"},
    {5, "Riga;"},
    {7, "Riyadh;"},
    {5, "Rome;"},
    {7, "Roseau;"},
    {14, "Rostov-on-Don;"},
    {11, "Sacramento;"},
    {17, "Saint Petersburg;"},
    {13, "Saint-Pierre;"},
    {15, "Salt Lake City;"},
    {12, "San Antonio;"},
    {10, "San Diego;"},
    {14, "San Francisco;"},
    {9, "San Jose;"},
    {9, "San Jose;"},
    {9, "San Juan;"},
    {13, "San Salvador;"},
    {7, "Sana'a;"},
    {14, "Santo Domingo;"},
    {8, "Sapporo;"},
    {9, "Sarajevo;"},
    {10, "Saskatoon;"},
    {8, "Seattle;"},
    {6, "Segou;"},
    {6, "Seoul;"},
    {8, "Seville;"},
    {9, "Shanghai;"},
    {10, "Singapore;"},
    {7, "Skopje;"},
    {6, "Sochi;"},
    {6, "Sofia;"},
    {7, "Sokoto;"},
    {6, "Split;"},
    {11, "St. John's;"},
    {10, "St. Louis;"},
    {10, "Stockholm;"},
    {9, "Surabaya;"},
    {5, "Suva;"},
    {8, "Suwalki;"},
    {7, "Sydney;"},
    {7, "Tabora;"},
    {7, "Tabriz;"},
    {7, "Taipei;"},
    {8, "Tallinn;"},
    {7, "Tamale;"},
    {12, "Tamanrasset;"},
    {6, "Tampa;"},
    {9, "Tashkent;"},
    {9, "Tauranga;"},
    {8, "Tbilisi;"},
    {12, "Tegucigalpa;"},
    {7, "Tehran;"},
    {9, "Tel Aviv;"},
    {13, "Thessaloniki;"},
    {6, "Thiès;"},
    {8, "Tijuana;"},
    {9, "Timbuktu;"},
    {7, "Tirana;"},
    {10, "Toamasina;"},
    {6, "Tokyo;"},
    {8, "Toliara;"},
    {7, "Toluca;"},
    {8, "Toronto;"},
    {8, "Tripoli;"},
    {7, "Tromsø;"},
    {7, "Tucson;"},
    {6, "Tunis;"},
    {12, "Ulaanbaatar;"},
    {9, "Upington;"},
    {7, "urumqi;"},
    {6, "Vaduz;"},
    {9, "Valencia;"},
    {9, "Valletta;"},
    {10, "Vancouver;"},
    {9, "Veracruz;"},
    {7, "Vienna;"},
    {10, "Vientiane;"},
    {13, "Villahermosa;"},
    {8, "Vilnius;"},
    {15, "Virginia Beach;"},
    {12, "Vladivostok;"},
    {7, "Warsaw;"},
    {17, "Washington, D.C.;"},
    {4, "Wau;"},
    {11, "Wellington;"},
    {11, "Whitehorse;"},
    {8, "Wichita;"},
    {11, "Willemstad;"},
    {9, "Winnipeg;"},
    {8, "Wroclaw;"},
    {6, "Xi'an;"},
    {8, "Yakutsk;"},
    {7, "Yangon;"},
    {8, "Yaounde;"},
    {12, "Yellowknife;"},
    {8, "Yerevan;"},
    {9, "Yinchuan;"},
    {7, "Zagreb;"},
    {14, "Zanzibar City;"},
    {7, "Zurich;"}
};

char* static_all_possible_numbers[NUMBER_OF_NUMBERS] = {
    "0.0\n",
    "0.1\n",
    "0.2\n",
    "0.3\n",
    "0.4\n",
    "0.5\n",
    "0.6\n",
    "0.7\n",
    "0.8\n",
    "0.9\n",
    "1.0\n",
    "1.1\n",
    "1.2\n",
    "1.3\n",
    "1.4\n",
    "1.5\n",
    "1.6\n",
    "1.7\n",
    "1.8\n",
    "1.9\n",
    "2.0\n",
    "2.1\n",
    "2.2\n",
    "2.3\n",
    "2.4\n",
    "2.5\n",
    "2.6\n",
    "2.7\n",
    "2.8\n",
    "2.9\n",
    "3.0\n",
    "3.1\n",
    "3.2\n",
    "3.3\n",
    "3.4\n",
    "3.5\n",
    "3.6\n",
    "3.7\n",
    "3.8\n",
    "3.9\n",
    "4.0\n",
    "4.1\n",
    "4.2\n",
    "4.3\n",
    "4.4\n",
    "4.5\n",
    "4.6\n",
    "4.7\n",
    "4.8\n",
    "4.9\n",
    "5.0\n",
    "5.1\n",
    "5.2\n",
    "5.3\n",
    "5.4\n",
    "5.5\n",
    "5.6\n",
    "5.7\n",
    "5.8\n",
    "5.9\n",
    "6.0\n",
    "6.1\n",
    "6.2\n",
    "6.3\n",
    "6.4\n",
    "6.5\n",
    "6.6\n",
    "6.7\n",
    "6.8\n",
    "6.9\n",
    "7.0\n",
    "7.1\n",
    "7.2\n",
    "7.3\n",
    "7.4\n",
    "7.5\n",
    "7.6\n",
    "7.7\n",
    "7.8\n",
    "7.9\n",
    "8.0\n",
    "8.1\n",
    "8.2\n",
    "8.3\n",
    "8.4\n",
    "8.5\n",
    "8.6\n",
    "8.7\n",
    "8.8\n",
    "8.9\n",
    "9.0\n",
    "9.1\n",
    "9.2\n",
    "9.3\n",
    "9.4\n",
    "9.5\n",
    "9.6\n",
    "9.7\n",
    "9.8\n",
    "9.9\n",
    "-0.0\n",
    "-0.1\n",
    "-0.2\n",
    "-0.3\n",
    "-0.4\n",
    "-0.5\n",
    "-0.6\n",
    "-0.7\n",
    "-0.8\n",
    "-0.9\n",
    "-1.0\n",
    "-1.1\n",
    "-1.2\n",
    "-1.3\n",
    "-1.4\n",
    "-1.5\n",
    "-1.6\n",
    "-1.7\n",
    "-1.8\n",
    "-1.9\n",
    "-2.0\n",
    "-2.1\n",
    "-2.2\n",
    "-2.3\n",
    "-2.4\n",
    "-2.5\n",
    "-2.6\n",
    "-2.7\n",
    "-2.8\n",
    "-2.9\n",
    "-3.0\n",
    "-3.1\n",
    "-3.2\n",
    "-3.3\n",
    "-3.4\n",
    "-3.5\n",
    "-3.6\n",
    "-3.7\n",
    "-3.8\n",
    "-3.9\n",
    "-4.0\n",
    "-4.1\n",
    "-4.2\n",
    "-4.3\n",
    "-4.4\n",
    "-4.5\n",
    "-4.6\n",
    "-4.7\n",
    "-4.8\n",
    "-4.9\n",
    "-5.0\n",
    "-5.1\n",
    "-5.2\n",
    "-5.3\n",
    "-5.4\n",
    "-5.5\n",
    "-5.6\n",
    "-5.7\n",
    "-5.8\n",
    "-5.9\n",
    "-6.0\n",
    "-6.1\n",
    "-6.2\n",
    "-6.3\n",
    "-6.4\n",
    "-6.5\n",
    "-6.6\n",
    "-6.7\n",
    "-6.8\n",
    "-6.9\n",
    "-7.0\n",
    "-7.1\n",
    "-7.2\n",
    "-7.3\n",
    "-7.4\n",
    "-7.5\n",
    "-7.6\n",
    "-7.7\n",
    "-7.8\n",
    "-7.9\n",
    "-8.0\n",
    "-8.1\n",
    "-8.2\n",
    "-8.3\n",
    "-8.4\n",
    "-8.5\n",
    "-8.6\n",
    "-8.7\n",
    "-8.8\n",
    "-8.9\n",
    "-9.0\n",
    "-9.1\n",
    "-9.2\n",
    "-9.3\n",
    "-9.4\n",
    "-9.5\n",
    "-9.6\n",
    "-9.7\n",
    "-9.8\n",
    "-9.9\n",
    "10.0\n",
    "10.1\n",
    "10.2\n",
    "10.3\n",
    "10.4\n",
    "10.5\n",
    "10.6\n",
    "10.7\n",
    "10.8\n",
    "10.9\n",
    "11.0\n",
    "11.1\n",
    "11.2\n",
    "11.3\n",
    "11.4\n",
    "11.5\n",
    "11.6\n",
    "11.7\n",
    "11.8\n",
    "11.9\n",
    "12.0\n",
    "12.1\n",
    "12.2\n",
    "12.3\n",
    "12.4\n",
    "12.5\n",
    "12.6\n",
    "12.7\n",
    "12.8\n",
    "12.9\n",
    "13.0\n",
    "13.1\n",
    "13.2\n",
    "13.3\n",
    "13.4\n",
    "13.5\n",
    "13.6\n",
    "13.7\n",
    "13.8\n",
    "13.9\n",
    "14.0\n",
    "14.1\n",
    "14.2\n",
    "14.3\n",
    "14.4\n",
    "14.5\n",
    "14.6\n",
    "14.7\n",
    "14.8\n",
    "14.9\n",
    "15.0\n",
    "15.1\n",
    "15.2\n",
    "15.3\n",
    "15.4\n",
    "15.5\n",
    "15.6\n",
    "15.7\n",
    "15.8\n",
    "15.9\n",
    "16.0\n",
    "16.1\n",
    "16.2\n",
    "16.3\n",
    "16.4\n",
    "16.5\n",
    "16.6\n",
    "16.7\n",
    "16.8\n",
    "16.9\n",
    "17.0\n",
    "17.1\n",
    "17.2\n",
    "17.3\n",
    "17.4\n",
    "17.5\n",
    "17.6\n",
    "17.7\n",
    "17.8\n",
    "17.9\n",
    "18.0\n",
    "18.1\n",
    "18.2\n",
    "18.3\n",
    "18.4\n",
    "18.5\n",
    "18.6\n",
    "18.7\n",
    "18.8\n",
    "18.9\n",
    "19.0\n",
    "19.1\n",
    "19.2\n",
    "19.3\n",
    "19.4\n",
    "19.5\n",
    "19.6\n",
    "19.7\n",
    "19.8\n",
    "19.9\n",
    "20.0\n",
    "20.1\n",
    "20.2\n",
    "20.3\n",
    "20.4\n",
    "20.5\n",
    "20.6\n",
    "20.7\n",
    "20.8\n",
    "20.9\n",
    "21.0\n",
    "21.1\n",
    "21.2\n",
    "21.3\n",
    "21.4\n",
    "21.5\n",
    "21.6\n",
    "21.7\n",
    "21.8\n",
    "21.9\n",
    "22.0\n",
    "22.1\n",
    "22.2\n",
    "22.3\n",
    "22.4\n",
    "22.5\n",
    "22.6\n",
    "22.7\n",
    "22.8\n",
    "22.9\n",
    "23.0\n",
    "23.1\n",
    "23.2\n",
    "23.3\n",
    "23.4\n",
    "23.5\n",
    "23.6\n",
    "23.7\n",
    "23.8\n",
    "23.9\n",
    "24.0\n",
    "24.1\n",
    "24.2\n",
    "24.3\n",
    "24.4\n",
    "24.5\n",
    "24.6\n",
    "24.7\n",
    "24.8\n",
    "24.9\n",
    "25.0\n",
    "25.1\n",
    "25.2\n",
    "25.3\n",
    "25.4\n",
    "25.5\n",
    "25.6\n",
    "25.7\n",
    "25.8\n",
    "25.9\n",
    "26.0\n",
    "26.1\n",
    "26.2\n",
    "26.3\n",
    "26.4\n",
    "26.5\n",
    "26.6\n",
    "26.7\n",
    "26.8\n",
    "26.9\n",
    "27.0\n",
    "27.1\n",
    "27.2\n",
    "27.3\n",
    "27.4\n",
    "27.5\n",
    "27.6\n",
    "27.7\n",
    "27.8\n",
    "27.9\n",
    "28.0\n",
    "28.1\n",
    "28.2\n",
    "28.3\n",
    "28.4\n",
    "28.5\n",
    "28.6\n",
    "28.7\n",
    "28.8\n",
    "28.9\n",
    "29.0\n",
    "29.1\n",
    "29.2\n",
    "29.3\n",
    "29.4\n",
    "29.5\n",
    "29.6\n",
    "29.7\n",
    "29.8\n",
    "29.9\n",
    "30.0\n",
    "30.1\n",
    "30.2\n",
    "30.3\n",
    "30.4\n",
    "30.5\n",
    "30.6\n",
    "30.7\n",
    "30.8\n",
    "30.9\n",
    "31.0\n",
    "31.1\n",
    "31.2\n",
    "31.3\n",
    "31.4\n",
    "31.5\n",
    "31.6\n",
    "31.7\n",
    "31.8\n",
    "31.9\n",
    "32.0\n",
    "32.1\n",
    "32.2\n",
    "32.3\n",
    "32.4\n",
    "32.5\n",
    "32.6\n",
    "32.7\n",
    "32.8\n",
    "32.9\n",
    "33.0\n",
    "33.1\n",
    "33.2\n",
    "33.3\n",
    "33.4\n",
    "33.5\n",
    "33.6\n",
    "33.7\n",
    "33.8\n",
    "33.9\n",
    "34.0\n",
    "34.1\n",
    "34.2\n",
    "34.3\n",
    "34.4\n",
    "34.5\n",
    "34.6\n",
    "34.7\n",
    "34.8\n",
    "34.9\n",
    "35.0\n",
    "35.1\n",
    "35.2\n",
    "35.3\n",
    "35.4\n",
    "35.5\n",
    "35.6\n",
    "35.7\n",
    "35.8\n",
    "35.9\n",
    "36.0\n",
    "36.1\n",
    "36.2\n",
    "36.3\n",
    "36.4\n",
    "36.5\n",
    "36.6\n",
    "36.7\n",
    "36.8\n",
    "36.9\n",
    "37.0\n",
    "37.1\n",
    "37.2\n",
    "37.3\n",
    "37.4\n",
    "37.5\n",
    "37.6\n",
    "37.7\n",
    "37.8\n",
    "37.9\n",
    "38.0\n",
    "38.1\n",
    "38.2\n",
    "38.3\n",
    "38.4\n",
    "38.5\n",
    "38.6\n",
    "38.7\n",
    "38.8\n",
    "38.9\n",
    "39.0\n",
    "39.1\n",
    "39.2\n",
    "39.3\n",
    "39.4\n",
    "39.5\n",
    "39.6\n",
    "39.7\n",
    "39.8\n",
    "39.9\n",
    "40.0\n",
    "40.1\n",
    "40.2\n",
    "40.3\n",
    "40.4\n",
    "40.5\n",
    "40.6\n",
    "40.7\n",
    "40.8\n",
    "40.9\n",
    "41.0\n",
    "41.1\n",
    "41.2\n",
    "41.3\n",
    "41.4\n",
    "41.5\n",
    "41.6\n",
    "41.7\n",
    "41.8\n",
    "41.9\n",
    "42.0\n",
    "42.1\n",
    "42.2\n",
    "42.3\n",
    "42.4\n",
    "42.5\n",
    "42.6\n",
    "42.7\n",
    "42.8\n",
    "42.9\n",
    "43.0\n",
    "43.1\n",
    "43.2\n",
    "43.3\n",
    "43.4\n",
    "43.5\n",
    "43.6\n",
    "43.7\n",
    "43.8\n",
    "43.9\n",
    "44.0\n",
    "44.1\n",
    "44.2\n",
    "44.3\n",
    "44.4\n",
    "44.5\n",
    "44.6\n",
    "44.7\n",
    "44.8\n",
    "44.9\n",
    "45.0\n",
    "45.1\n",
    "45.2\n",
    "45.3\n",
    "45.4\n",
    "45.5\n",
    "45.6\n",
    "45.7\n",
    "45.8\n",
    "45.9\n",
    "46.0\n",
    "46.1\n",
    "46.2\n",
    "46.3\n",
    "46.4\n",
    "46.5\n",
    "46.6\n",
    "46.7\n",
    "46.8\n",
    "46.9\n",
    "47.0\n",
    "47.1\n",
    "47.2\n",
    "47.3\n",
    "47.4\n",
    "47.5\n",
    "47.6\n",
    "47.7\n",
    "47.8\n",
    "47.9\n",
    "48.0\n",
    "48.1\n",
    "48.2\n",
    "48.3\n",
    "48.4\n",
    "48.5\n",
    "48.6\n",
    "48.7\n",
    "48.8\n",
    "48.9\n",
    "49.0\n",
    "49.1\n",
    "49.2\n",
    "49.3\n",
    "49.4\n",
    "49.5\n",
    "49.6\n",
    "49.7\n",
    "49.8\n",
    "49.9\n",
    "50.0\n",
    "50.1\n",
    "50.2\n",
    "50.3\n",
    "50.4\n",
    "50.5\n",
    "50.6\n",
    "50.7\n",
    "50.8\n",
    "50.9\n",
    "51.0\n",
    "51.1\n",
    "51.2\n",
    "51.3\n",
    "51.4\n",
    "51.5\n",
    "51.6\n",
    "51.7\n",
    "51.8\n",
    "51.9\n",
    "52.0\n",
    "52.1\n",
    "52.2\n",
    "52.3\n",
    "52.4\n",
    "52.5\n",
    "52.6\n",
    "52.7\n",
    "52.8\n",
    "52.9\n",
    "53.0\n",
    "53.1\n",
    "53.2\n",
    "53.3\n",
    "53.4\n",
    "53.5\n",
    "53.6\n",
    "53.7\n",
    "53.8\n",
    "53.9\n",
    "54.0\n",
    "54.1\n",
    "54.2\n",
    "54.3\n",
    "54.4\n",
    "54.5\n",
    "54.6\n",
    "54.7\n",
    "54.8\n",
    "54.9\n",
    "55.0\n",
    "55.1\n",
    "55.2\n",
    "55.3\n",
    "55.4\n",
    "55.5\n",
    "55.6\n",
    "55.7\n",
    "55.8\n",
    "55.9\n",
    "56.0\n",
    "56.1\n",
    "56.2\n",
    "56.3\n",
    "56.4\n",
    "56.5\n",
    "56.6\n",
    "56.7\n",
    "56.8\n",
    "56.9\n",
    "57.0\n",
    "57.1\n",
    "57.2\n",
    "57.3\n",
    "57.4\n",
    "57.5\n",
    "57.6\n",
    "57.7\n",
    "57.8\n",
    "57.9\n",
    "58.0\n",
    "58.1\n",
    "58.2\n",
    "58.3\n",
    "58.4\n",
    "58.5\n",
    "58.6\n",
    "58.7\n",
    "58.8\n",
    "58.9\n",
    "59.0\n",
    "59.1\n",
    "59.2\n",
    "59.3\n",
    "59.4\n",
    "59.5\n",
    "59.6\n",
    "59.7\n",
    "59.8\n",
    "59.9\n",
    "60.0\n",
    "60.1\n",
    "60.2\n",
    "60.3\n",
    "60.4\n",
    "60.5\n",
    "60.6\n",
    "60.7\n",
    "60.8\n",
    "60.9\n",
    "61.0\n",
    "61.1\n",
    "61.2\n",
    "61.3\n",
    "61.4\n",
    "61.5\n",
    "61.6\n",
    "61.7\n",
    "61.8\n",
    "61.9\n",
    "62.0\n",
    "62.1\n",
    "62.2\n",
    "62.3\n",
    "62.4\n",
    "62.5\n",
    "62.6\n",
    "62.7\n",
    "62.8\n",
    "62.9\n",
    "63.0\n",
    "63.1\n",
    "63.2\n",
    "63.3\n",
    "63.4\n",
    "63.5\n",
    "63.6\n",
    "63.7\n",
    "63.8\n",
    "63.9\n",
    "64.0\n",
    "64.1\n",
    "64.2\n",
    "64.3\n",
    "64.4\n",
    "64.5\n",
    "64.6\n",
    "64.7\n",
    "64.8\n",
    "64.9\n",
    "65.0\n",
    "65.1\n",
    "65.2\n",
    "65.3\n",
    "65.4\n",
    "65.5\n",
    "65.6\n",
    "65.7\n",
    "65.8\n",
    "65.9\n",
    "66.0\n",
    "66.1\n",
    "66.2\n",
    "66.3\n",
    "66.4\n",
    "66.5\n",
    "66.6\n",
    "66.7\n",
    "66.8\n",
    "66.9\n",
    "67.0\n",
    "67.1\n",
    "67.2\n",
    "67.3\n",
    "67.4\n",
    "67.5\n",
    "67.6\n",
    "67.7\n",
    "67.8\n",
    "67.9\n",
    "68.0\n",
    "68.1\n",
    "68.2\n",
    "68.3\n",
    "68.4\n",
    "68.5\n",
    "68.6\n",
    "68.7\n",
    "68.8\n",
    "68.9\n",
    "69.0\n",
    "69.1\n",
    "69.2\n",
    "69.3\n",
    "69.4\n",
    "69.5\n",
    "69.6\n",
    "69.7\n",
    "69.8\n",
    "69.9\n",
    "70.0\n",
    "70.1\n",
    "70.2\n",
    "70.3\n",
    "70.4\n",
    "70.5\n",
    "70.6\n",
    "70.7\n",
    "70.8\n",
    "70.9\n",
    "71.0\n",
    "71.1\n",
    "71.2\n",
    "71.3\n",
    "71.4\n",
    "71.5\n",
    "71.6\n",
    "71.7\n",
    "71.8\n",
    "71.9\n",
    "72.0\n",
    "72.1\n",
    "72.2\n",
    "72.3\n",
    "72.4\n",
    "72.5\n",
    "72.6\n",
    "72.7\n",
    "72.8\n",
    "72.9\n",
    "73.0\n",
    "73.1\n",
    "73.2\n",
    "73.3\n",
    "73.4\n",
    "73.5\n",
    "73.6\n",
    "73.7\n",
    "73.8\n",
    "73.9\n",
    "74.0\n",
    "74.1\n",
    "74.2\n",
    "74.3\n",
    "74.4\n",
    "74.5\n",
    "74.6\n",
    "74.7\n",
    "74.8\n",
    "74.9\n",
    "75.0\n",
    "75.1\n",
    "75.2\n",
    "75.3\n",
    "75.4\n",
    "75.5\n",
    "75.6\n",
    "75.7\n",
    "75.8\n",
    "75.9\n",
    "76.0\n",
    "76.1\n",
    "76.2\n",
    "76.3\n",
    "76.4\n",
    "76.5\n",
    "76.6\n",
    "76.7\n",
    "76.8\n",
    "76.9\n",
    "77.0\n",
    "77.1\n",
    "77.2\n",
    "77.3\n",
    "77.4\n",
    "77.5\n",
    "77.6\n",
    "77.7\n",
    "77.8\n",
    "77.9\n",
    "78.0\n",
    "78.1\n",
    "78.2\n",
    "78.3\n",
    "78.4\n",
    "78.5\n",
    "78.6\n",
    "78.7\n",
    "78.8\n",
    "78.9\n",
    "79.0\n",
    "79.1\n",
    "79.2\n",
    "79.3\n",
    "79.4\n",
    "79.5\n",
    "79.6\n",
    "79.7\n",
    "79.8\n",
    "79.9\n",
    "80.0\n",
    "80.1\n",
    "80.2\n",
    "80.3\n",
    "80.4\n",
    "80.5\n",
    "80.6\n",
    "80.7\n",
    "80.8\n",
    "80.9\n",
    "81.0\n",
    "81.1\n",
    "81.2\n",
    "81.3\n",
    "81.4\n",
    "81.5\n",
    "81.6\n",
    "81.7\n",
    "81.8\n",
    "81.9\n",
    "82.0\n",
    "82.1\n",
    "82.2\n",
    "82.3\n",
    "82.4\n",
    "82.5\n",
    "82.6\n",
    "82.7\n",
    "82.8\n",
    "82.9\n",
    "83.0\n",
    "83.1\n",
    "83.2\n",
    "83.3\n",
    "83.4\n",
    "83.5\n",
    "83.6\n",
    "83.7\n",
    "83.8\n",
    "83.9\n",
    "84.0\n",
    "84.1\n",
    "84.2\n",
    "84.3\n",
    "84.4\n",
    "84.5\n",
    "84.6\n",
    "84.7\n",
    "84.8\n",
    "84.9\n",
    "85.0\n",
    "85.1\n",
    "85.2\n",
    "85.3\n",
    "85.4\n",
    "85.5\n",
    "85.6\n",
    "85.7\n",
    "85.8\n",
    "85.9\n",
    "86.0\n",
    "86.1\n",
    "86.2\n",
    "86.3\n",
    "86.4\n",
    "86.5\n",
    "86.6\n",
    "86.7\n",
    "86.8\n",
    "86.9\n",
    "87.0\n",
    "87.1\n",
    "87.2\n",
    "87.3\n",
    "87.4\n",
    "87.5\n",
    "87.6\n",
    "87.7\n",
    "87.8\n",
    "87.9\n",
    "88.0\n",
    "88.1\n",
    "88.2\n",
    "88.3\n",
    "88.4\n",
    "88.5\n",
    "88.6\n",
    "88.7\n",
    "88.8\n",
    "88.9\n",
    "89.0\n",
    "89.1\n",
    "89.2\n",
    "89.3\n",
    "89.4\n",
    "89.5\n",
    "89.6\n",
    "89.7\n",
    "89.8\n",
    "89.9\n",
    "90.0\n",
    "90.1\n",
    "90.2\n",
    "90.3\n",
    "90.4\n",
    "90.5\n",
    "90.6\n",
    "90.7\n",
    "90.8\n",
    "90.9\n",
    "91.0\n",
    "91.1\n",
    "91.2\n",
    "91.3\n",
    "91.4\n",
    "91.5\n",
    "91.6\n",
    "91.7\n",
    "91.8\n",
    "91.9\n",
    "92.0\n",
    "92.1\n",
    "92.2\n",
    "92.3\n",
    "92.4\n",
    "92.5\n",
    "92.6\n",
    "92.7\n",
    "92.8\n",
    "92.9\n",
    "93.0\n",
    "93.1\n",
    "93.2\n",
    "93.3\n",
    "93.4\n",
    "93.5\n",
    "93.6\n",
    "93.7\n",
    "93.8\n",
    "93.9\n",
    "94.0\n",
    "94.1\n",
    "94.2\n",
    "94.3\n",
    "94.4\n",
    "94.5\n",
    "94.6\n",
    "94.7\n",
    "94.8\n",
    "94.9\n",
    "95.0\n",
    "95.1\n",
    "95.2\n",
    "95.3\n",
    "95.4\n",
    "95.5\n",
    "95.6\n",
    "95.7\n",
    "95.8\n",
    "95.9\n",
    "96.0\n",
    "96.1\n",
    "96.2\n",
    "96.3\n",
    "96.4\n",
    "96.5\n",
    "96.6\n",
    "96.7\n",
    "96.8\n",
    "96.9\n",
    "97.0\n",
    "97.1\n",
    "97.2\n",
    "97.3\n",
    "97.4\n",
    "97.5\n",
    "97.6\n",
    "97.7\n",
    "97.8\n",
    "97.9\n",
    "98.0\n",
    "98.1\n",
    "98.2\n",
    "98.3\n",
    "98.4\n",
    "98.5\n",
    "98.6\n",
    "98.7\n",
    "98.8\n",
    "98.9\n",
    "99.0\n",
    "99.1\n",
    "99.2\n",
    "99.3\n",
    "99.4\n",
    "99.5\n",
    "99.6\n",
    "99.7\n",
    "99.8\n",
    "99.9\n",
    "-10.0\n",
    "-10.1\n",
    "-10.2\n",
    "-10.3\n",
    "-10.4\n",
    "-10.5\n",
    "-10.6\n",
    "-10.7\n",
    "-10.8\n",
    "-10.9\n",
    "-11.0\n",
    "-11.1\n",
    "-11.2\n",
    "-11.3\n",
    "-11.4\n",
    "-11.5\n",
    "-11.6\n",
    "-11.7\n",
    "-11.8\n",
    "-11.9\n",
    "-12.0\n",
    "-12.1\n",
    "-12.2\n",
    "-12.3\n",
    "-12.4\n",
    "-12.5\n",
    "-12.6\n",
    "-12.7\n",
    "-12.8\n",
    "-12.9\n",
    "-13.0\n",
    "-13.1\n",
    "-13.2\n",
    "-13.3\n",
    "-13.4\n",
    "-13.5\n",
    "-13.6\n",
    "-13.7\n",
    "-13.8\n",
    "-13.9\n",
    "-14.0\n",
    "-14.1\n",
    "-14.2\n",
    "-14.3\n",
    "-14.4\n",
    "-14.5\n",
    "-14.6\n",
    "-14.7\n",
    "-14.8\n",
    "-14.9\n",
    "-15.0\n",
    "-15.1\n",
    "-15.2\n",
    "-15.3\n",
    "-15.4\n",
    "-15.5\n",
    "-15.6\n",
    "-15.7\n",
    "-15.8\n",
    "-15.9\n",
    "-16.0\n",
    "-16.1\n",
    "-16.2\n",
    "-16.3\n",
    "-16.4\n",
    "-16.5\n",
    "-16.6\n",
    "-16.7\n",
    "-16.8\n",
    "-16.9\n",
    "-17.0\n",
    "-17.1\n",
    "-17.2\n",
    "-17.3\n",
    "-17.4\n",
    "-17.5\n",
    "-17.6\n",
    "-17.7\n",
    "-17.8\n",
    "-17.9\n",
    "-18.0\n",
    "-18.1\n",
    "-18.2\n",
    "-18.3\n",
    "-18.4\n",
    "-18.5\n",
    "-18.6\n",
    "-18.7\n",
    "-18.8\n",
    "-18.9\n",
    "-19.0\n",
    "-19.1\n",
    "-19.2\n",
    "-19.3\n",
    "-19.4\n",
    "-19.5\n",
    "-19.6\n",
    "-19.7\n",
    "-19.8\n",
    "-19.9\n",
    "-20.0\n",
    "-20.1\n",
    "-20.2\n",
    "-20.3\n",
    "-20.4\n",
    "-20.5\n",
    "-20.6\n",
    "-20.7\n",
    "-20.8\n",
    "-20.9\n",
    "-21.0\n",
    "-21.1\n",
    "-21.2\n",
    "-21.3\n",
    "-21.4\n",
    "-21.5\n",
    "-21.6\n",
    "-21.7\n",
    "-21.8\n",
    "-21.9\n",
    "-22.0\n",
    "-22.1\n",
    "-22.2\n",
    "-22.3\n",
    "-22.4\n",
    "-22.5\n",
    "-22.6\n",
    "-22.7\n",
    "-22.8\n",
    "-22.9\n",
    "-23.0\n",
    "-23.1\n",
    "-23.2\n",
    "-23.3\n",
    "-23.4\n",
    "-23.5\n",
    "-23.6\n",
    "-23.7\n",
    "-23.8\n",
    "-23.9\n",
    "-24.0\n",
    "-24.1\n",
    "-24.2\n",
    "-24.3\n",
    "-24.4\n",
    "-24.5\n",
    "-24.6\n",
    "-24.7\n",
    "-24.8\n",
    "-24.9\n",
    "-25.0\n",
    "-25.1\n",
    "-25.2\n",
    "-25.3\n",
    "-25.4\n",
    "-25.5\n",
    "-25.6\n",
    "-25.7\n",
    "-25.8\n",
    "-25.9\n",
    "-26.0\n",
    "-26.1\n",
    "-26.2\n",
    "-26.3\n",
    "-26.4\n",
    "-26.5\n",
    "-26.6\n",
    "-26.7\n",
    "-26.8\n",
    "-26.9\n",
    "-27.0\n",
    "-27.1\n",
    "-27.2\n",
    "-27.3\n",
    "-27.4\n",
    "-27.5\n",
    "-27.6\n",
    "-27.7\n",
    "-27.8\n",
    "-27.9\n",
    "-28.0\n",
    "-28.1\n",
    "-28.2\n",
    "-28.3\n",
    "-28.4\n",
    "-28.5\n",
    "-28.6\n",
    "-28.7\n",
    "-28.8\n",
    "-28.9\n",
    "-29.0\n",
    "-29.1\n",
    "-29.2\n",
    "-29.3\n",
    "-29.4\n",
    "-29.5\n",
    "-29.6\n",
    "-29.7\n",
    "-29.8\n",
    "-29.9\n",
    "-30.0\n",
    "-30.1\n",
    "-30.2\n",
    "-30.3\n",
    "-30.4\n",
    "-30.5\n",
    "-30.6\n",
    "-30.7\n",
    "-30.8\n",
    "-30.9\n",
    "-31.0\n",
    "-31.1\n",
    "-31.2\n",
    "-31.3\n",
    "-31.4\n",
    "-31.5\n",
    "-31.6\n",
    "-31.7\n",
    "-31.8\n",
    "-31.9\n",
    "-32.0\n",
    "-32.1\n",
    "-32.2\n",
    "-32.3\n",
    "-32.4\n",
    "-32.5\n",
    "-32.6\n",
    "-32.7\n",
    "-32.8\n",
    "-32.9\n",
    "-33.0\n",
    "-33.1\n",
    "-33.2\n",
    "-33.3\n",
    "-33.4\n",
    "-33.5\n",
    "-33.6\n",
    "-33.7\n",
    "-33.8\n",
    "-33.9\n",
    "-34.0\n",
    "-34.1\n",
    "-34.2\n",
    "-34.3\n",
    "-34.4\n",
    "-34.5\n",
    "-34.6\n",
    "-34.7\n",
    "-34.8\n",
    "-34.9\n",
    "-35.0\n",
    "-35.1\n",
    "-35.2\n",
    "-35.3\n",
    "-35.4\n",
    "-35.5\n",
    "-35.6\n",
    "-35.7\n",
    "-35.8\n",
    "-35.9\n",
    "-36.0\n",
    "-36.1\n",
    "-36.2\n",
    "-36.3\n",
    "-36.4\n",
    "-36.5\n",
    "-36.6\n",
    "-36.7\n",
    "-36.8\n",
    "-36.9\n",
    "-37.0\n",
    "-37.1\n",
    "-37.2\n",
    "-37.3\n",
    "-37.4\n",
    "-37.5\n",
    "-37.6\n",
    "-37.7\n",
    "-37.8\n",
    "-37.9\n",
    "-38.0\n",
    "-38.1\n",
    "-38.2\n",
    "-38.3\n",
    "-38.4\n",
    "-38.5\n",
    "-38.6\n",
    "-38.7\n",
    "-38.8\n",
    "-38.9\n",
    "-39.0\n",
    "-39.1\n",
    "-39.2\n",
    "-39.3\n",
    "-39.4\n",
    "-39.5\n",
    "-39.6\n",
    "-39.7\n",
    "-39.8\n",
    "-39.9\n",
    "-40.0\n",
    "-40.1\n",
    "-40.2\n",
    "-40.3\n",
    "-40.4\n",
    "-40.5\n",
    "-40.6\n",
    "-40.7\n",
    "-40.8\n",
    "-40.9\n",
    "-41.0\n",
    "-41.1\n",
    "-41.2\n",
    "-41.3\n",
    "-41.4\n",
    "-41.5\n",
    "-41.6\n",
    "-41.7\n",
    "-41.8\n",
    "-41.9\n",
    "-42.0\n",
    "-42.1\n",
    "-42.2\n",
    "-42.3\n",
    "-42.4\n",
    "-42.5\n",
    "-42.6\n",
    "-42.7\n",
    "-42.8\n",
    "-42.9\n",
    "-43.0\n",
    "-43.1\n",
    "-43.2\n",
    "-43.3\n",
    "-43.4\n",
    "-43.5\n",
    "-43.6\n",
    "-43.7\n",
    "-43.8\n",
    "-43.9\n",
    "-44.0\n",
    "-44.1\n",
    "-44.2\n",
    "-44.3\n",
    "-44.4\n",
    "-44.5\n",
    "-44.6\n",
    "-44.7\n",
    "-44.8\n",
    "-44.9\n",
    "-45.0\n",
    "-45.1\n",
    "-45.2\n",
    "-45.3\n",
    "-45.4\n",
    "-45.5\n",
    "-45.6\n",
    "-45.7\n",
    "-45.8\n",
    "-45.9\n",
    "-46.0\n",
    "-46.1\n",
    "-46.2\n",
    "-46.3\n",
    "-46.4\n",
    "-46.5\n",
    "-46.6\n",
    "-46.7\n",
    "-46.8\n",
    "-46.9\n",
    "-47.0\n",
    "-47.1\n",
    "-47.2\n",
    "-47.3\n",
    "-47.4\n",
    "-47.5\n",
    "-47.6\n",
    "-47.7\n",
    "-47.8\n",
    "-47.9\n",
    "-48.0\n",
    "-48.1\n",
    "-48.2\n",
    "-48.3\n",
    "-48.4\n",
    "-48.5\n",
    "-48.6\n",
    "-48.7\n",
    "-48.8\n",
    "-48.9\n",
    "-49.0\n",
    "-49.1\n",
    "-49.2\n",
    "-49.3\n",
    "-49.4\n",
    "-49.5\n",
    "-49.6\n",
    "-49.7\n",
    "-49.8\n",
    "-49.9\n",
    "-50.0\n",
    "-50.1\n",
    "-50.2\n",
    "-50.3\n",
    "-50.4\n",
    "-50.5\n",
    "-50.6\n",
    "-50.7\n",
    "-50.8\n",
    "-50.9\n",
    "-51.0\n",
    "-51.1\n",
    "-51.2\n",
    "-51.3\n",
    "-51.4\n",
    "-51.5\n",
    "-51.6\n",
    "-51.7\n",
    "-51.8\n",
    "-51.9\n",
    "-52.0\n",
    "-52.1\n",
    "-52.2\n",
    "-52.3\n",
    "-52.4\n",
    "-52.5\n",
    "-52.6\n",
    "-52.7\n",
    "-52.8\n",
    "-52.9\n",
    "-53.0\n",
    "-53.1\n",
    "-53.2\n",
    "-53.3\n",
    "-53.4\n",
    "-53.5\n",
    "-53.6\n",
    "-53.7\n",
    "-53.8\n",
    "-53.9\n",
    "-54.0\n",
    "-54.1\n",
    "-54.2\n",
    "-54.3\n",
    "-54.4\n",
    "-54.5\n",
    "-54.6\n",
    "-54.7\n",
    "-54.8\n",
    "-54.9\n",
    "-55.0\n",
    "-55.1\n",
    "-55.2\n",
    "-55.3\n",
    "-55.4\n",
    "-55.5\n",
    "-55.6\n",
    "-55.7\n",
    "-55.8\n",
    "-55.9\n",
    "-56.0\n",
    "-56.1\n",
    "-56.2\n",
    "-56.3\n",
    "-56.4\n",
    "-56.5\n",
    "-56.6\n",
    "-56.7\n",
    "-56.8\n",
    "-56.9\n",
    "-57.0\n",
    "-57.1\n",
    "-57.2\n",
    "-57.3\n",
    "-57.4\n",
    "-57.5\n",
    "-57.6\n",
    "-57.7\n",
    "-57.8\n",
    "-57.9\n",
    "-58.0\n",
    "-58.1\n",
    "-58.2\n",
    "-58.3\n",
    "-58.4\n",
    "-58.5\n",
    "-58.6\n",
    "-58.7\n",
    "-58.8\n",
    "-58.9\n",
    "-59.0\n",
    "-59.1\n",
    "-59.2\n",
    "-59.3\n",
    "-59.4\n",
    "-59.5\n",
    "-59.6\n",
    "-59.7\n",
    "-59.8\n",
    "-59.9\n",
    "-60.0\n",
    "-60.1\n",
    "-60.2\n",
    "-60.3\n",
    "-60.4\n",
    "-60.5\n",
    "-60.6\n",
    "-60.7\n",
    "-60.8\n",
    "-60.9\n",
    "-61.0\n",
    "-61.1\n",
    "-61.2\n",
    "-61.3\n",
    "-61.4\n",
    "-61.5\n",
    "-61.6\n",
    "-61.7\n",
    "-61.8\n",
    "-61.9\n",
    "-62.0\n",
    "-62.1\n",
    "-62.2\n",
    "-62.3\n",
    "-62.4\n",
    "-62.5\n",
    "-62.6\n",
    "-62.7\n",
    "-62.8\n",
    "-62.9\n",
    "-63.0\n",
    "-63.1\n",
    "-63.2\n",
    "-63.3\n",
    "-63.4\n",
    "-63.5\n",
    "-63.6\n",
    "-63.7\n",
    "-63.8\n",
    "-63.9\n",
    "-64.0\n",
    "-64.1\n",
    "-64.2\n",
    "-64.3\n",
    "-64.4\n",
    "-64.5\n",
    "-64.6\n",
    "-64.7\n",
    "-64.8\n",
    "-64.9\n",
    "-65.0\n",
    "-65.1\n",
    "-65.2\n",
    "-65.3\n",
    "-65.4\n",
    "-65.5\n",
    "-65.6\n",
    "-65.7\n",
    "-65.8\n",
    "-65.9\n",
    "-66.0\n",
    "-66.1\n",
    "-66.2\n",
    "-66.3\n",
    "-66.4\n",
    "-66.5\n",
    "-66.6\n",
    "-66.7\n",
    "-66.8\n",
    "-66.9\n",
    "-67.0\n",
    "-67.1\n",
    "-67.2\n",
    "-67.3\n",
    "-67.4\n",
    "-67.5\n",
    "-67.6\n",
    "-67.7\n",
    "-67.8\n",
    "-67.9\n",
    "-68.0\n",
    "-68.1\n",
    "-68.2\n",
    "-68.3\n",
    "-68.4\n",
    "-68.5\n",
    "-68.6\n",
    "-68.7\n",
    "-68.8\n",
    "-68.9\n",
    "-69.0\n",
    "-69.1\n",
    "-69.2\n",
    "-69.3\n",
    "-69.4\n",
    "-69.5\n",
    "-69.6\n",
    "-69.7\n",
    "-69.8\n",
    "-69.9\n",
    "-70.0\n",
    "-70.1\n",
    "-70.2\n",
    "-70.3\n",
    "-70.4\n",
    "-70.5\n",
    "-70.6\n",
    "-70.7\n",
    "-70.8\n",
    "-70.9\n",
    "-71.0\n",
    "-71.1\n",
    "-71.2\n",
    "-71.3\n",
    "-71.4\n",
    "-71.5\n",
    "-71.6\n",
    "-71.7\n",
    "-71.8\n",
    "-71.9\n",
    "-72.0\n",
    "-72.1\n",
    "-72.2\n",
    "-72.3\n",
    "-72.4\n",
    "-72.5\n",
    "-72.6\n",
    "-72.7\n",
    "-72.8\n",
    "-72.9\n",
    "-73.0\n",
    "-73.1\n",
    "-73.2\n",
    "-73.3\n",
    "-73.4\n",
    "-73.5\n",
    "-73.6\n",
    "-73.7\n",
    "-73.8\n",
    "-73.9\n",
    "-74.0\n",
    "-74.1\n",
    "-74.2\n",
    "-74.3\n",
    "-74.4\n",
    "-74.5\n",
    "-74.6\n",
    "-74.7\n",
    "-74.8\n",
    "-74.9\n",
    "-75.0\n",
    "-75.1\n",
    "-75.2\n",
    "-75.3\n",
    "-75.4\n",
    "-75.5\n",
    "-75.6\n",
    "-75.7\n",
    "-75.8\n",
    "-75.9\n",
    "-76.0\n",
    "-76.1\n",
    "-76.2\n",
    "-76.3\n",
    "-76.4\n",
    "-76.5\n",
    "-76.6\n",
    "-76.7\n",
    "-76.8\n",
    "-76.9\n",
    "-77.0\n",
    "-77.1\n",
    "-77.2\n",
    "-77.3\n",
    "-77.4\n",
    "-77.5\n",
    "-77.6\n",
    "-77.7\n",
    "-77.8\n",
    "-77.9\n",
    "-78.0\n",
    "-78.1\n",
    "-78.2\n",
    "-78.3\n",
    "-78.4\n",
    "-78.5\n",
    "-78.6\n",
    "-78.7\n",
    "-78.8\n",
    "-78.9\n",
    "-79.0\n",
    "-79.1\n",
    "-79.2\n",
    "-79.3\n",
    "-79.4\n",
    "-79.5\n",
    "-79.6\n",
    "-79.7\n",
    "-79.8\n",
    "-79.9\n",
    "-80.0\n",
    "-80.1\n",
    "-80.2\n",
    "-80.3\n",
    "-80.4\n",
    "-80.5\n",
    "-80.6\n",
    "-80.7\n",
    "-80.8\n",
    "-80.9\n",
    "-81.0\n",
    "-81.1\n",
    "-81.2\n",
    "-81.3\n",
    "-81.4\n",
    "-81.5\n",
    "-81.6\n",
    "-81.7\n",
    "-81.8\n",
    "-81.9\n",
    "-82.0\n",
    "-82.1\n",
    "-82.2\n",
    "-82.3\n",
    "-82.4\n",
    "-82.5\n",
    "-82.6\n",
    "-82.7\n",
    "-82.8\n",
    "-82.9\n",
    "-83.0\n",
    "-83.1\n",
    "-83.2\n",
    "-83.3\n",
    "-83.4\n",
    "-83.5\n",
    "-83.6\n",
    "-83.7\n",
    "-83.8\n",
    "-83.9\n",
    "-84.0\n",
    "-84.1\n",
    "-84.2\n",
    "-84.3\n",
    "-84.4\n",
    "-84.5\n",
    "-84.6\n",
    "-84.7\n",
    "-84.8\n",
    "-84.9\n",
    "-85.0\n",
    "-85.1\n",
    "-85.2\n",
    "-85.3\n",
    "-85.4\n",
    "-85.5\n",
    "-85.6\n",
    "-85.7\n",
    "-85.8\n",
    "-85.9\n",
    "-86.0\n",
    "-86.1\n",
    "-86.2\n",
    "-86.3\n",
    "-86.4\n",
    "-86.5\n",
    "-86.6\n",
    "-86.7\n",
    "-86.8\n",
    "-86.9\n",
    "-87.0\n",
    "-87.1\n",
    "-87.2\n",
    "-87.3\n",
    "-87.4\n",
    "-87.5\n",
    "-87.6\n",
    "-87.7\n",
    "-87.8\n",
    "-87.9\n",
    "-88.0\n",
    "-88.1\n",
    "-88.2\n",
    "-88.3\n",
    "-88.4\n",
    "-88.5\n",
    "-88.6\n",
    "-88.7\n",
    "-88.8\n",
    "-88.9\n",
    "-89.0\n",
    "-89.1\n",
    "-89.2\n",
    "-89.3\n",
    "-89.4\n",
    "-89.5\n",
    "-89.6\n",
    "-89.7\n",
    "-89.8\n",
    "-89.9\n",
    "-90.0\n",
    "-90.1\n",
    "-90.2\n",
    "-90.3\n",
    "-90.4\n",
    "-90.5\n",
    "-90.6\n",
    "-90.7\n",
    "-90.8\n",
    "-90.9\n",
    "-91.0\n",
    "-91.1\n",
    "-91.2\n",
    "-91.3\n",
    "-91.4\n",
    "-91.5\n",
    "-91.6\n",
    "-91.7\n",
    "-91.8\n",
    "-91.9\n",
    "-92.0\n",
    "-92.1\n",
    "-92.2\n",
    "-92.3\n",
    "-92.4\n",
    "-92.5\n",
    "-92.6\n",
    "-92.7\n",
    "-92.8\n",
    "-92.9\n",
    "-93.0\n",
    "-93.1\n",
    "-93.2\n",
    "-93.3\n",
    "-93.4\n",
    "-93.5\n",
    "-93.6\n",
    "-93.7\n",
    "-93.8\n",
    "-93.9\n",
    "-94.0\n",
    "-94.1\n",
    "-94.2\n",
    "-94.3\n",
    "-94.4\n",
    "-94.5\n",
    "-94.6\n",
    "-94.7\n",
    "-94.8\n",
    "-94.9\n",
    "-95.0\n",
    "-95.1\n",
    "-95.2\n",
    "-95.3\n",
    "-95.4\n",
    "-95.5\n",
    "-95.6\n",
    "-95.7\n",
    "-95.8\n",
    "-95.9\n",
    "-96.0\n",
    "-96.1\n",
    "-96.2\n",
    "-96.3\n",
    "-96.4\n",
    "-96.5\n",
    "-96.6\n",
    "-96.7\n",
    "-96.8\n",
    "-96.9\n",
    "-97.0\n",
    "-97.1\n",
    "-97.2\n",
    "-97.3\n",
    "-97.4\n",
    "-97.5\n",
    "-97.6\n",
    "-97.7\n",
    "-97.8\n",
    "-97.9\n",
    "-98.0\n",
    "-98.1\n",
    "-98.2\n",
    "-98.3\n",
    "-98.4\n",
    "-98.5\n",
    "-98.6\n",
    "-98.7\n",
    "-98.8\n",
    "-98.9\n",
    "-99.0\n",
    "-99.1\n",
    "-99.2\n",
    "-99.3\n",
    "-99.4\n",
    "-99.5\n",
    "-99.6\n",
    "-99.7\n",
    "-99.8\n",
    "-99.9\n",
};
