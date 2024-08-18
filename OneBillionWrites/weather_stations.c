//
//  weather_stations.c
//  OneBillionWrites
//
//  Created by Badger on 18/8/2024.
//

#include "weather_stations.h"

char* weather_stations[] = {
    "Abha;",
    "Abidjan;",
    "Abéché;",
    "Accra;",
    "Addis Ababa;",
    "Adelaide;",
    "Aden;",
    "Ahvaz;",
    "Albuquerque;",
    "Alexandra;",
    "Alexandria;",
    "Algiers;",
    "Alice Springs;",
    "Almaty;",
    "Amsterdam;",
    "Anadyr;",
    "Anchorage;",
    "Andorra la Vella;",
    "Ankara;",
    "Antananarivo;",
    "Antsiranana;",
    "Arkhangelsk;",
    "Ashgabat;",
    "Asmara;",
    "Assab;",
    "Astana;",
    "Athens;",
    "Atlanta;",
    "Auckland;",
    "Austin;",
    "Baghdad;",
    "Baguio;",
    "Baku;",
    "Baltimore;",
    "Bamako;",
    "Bangkok;",
    "Bangui;",
    "Banjul;",
    "Barcelona;",
    "Bata;",
    "Batumi;",
    "Beijing;",
    "Beirut;",
    "Belgrade;",
    "Belize City;",
    "Benghazi;",
    "Bergen;",
    "Berlin;",
    "Bilbao;",
    "Birao;",
    "Bishkek;",
    "Bissau;",
    "Blantyre;",
    "Bloemfontein;",
    "Boise;",
    "Bordeaux;",
    "Bosaso;",
    "Boston;",
    "Bouaké;",
    "Bratislava;",
    "Brazzaville;",
    "Bridgetown;",
    "Brisbane;",
    "Brussels;",
    "Bucharest;",
    "Budapest;",
    "Bujumbura;",
    "Bulawayo;",
    "Burnie;",
    "Busan;",
    "Cabo San Lucas;",
    "Cairns;",
    "Cairo;",
    "Calgary;",
    "Canberra;",
    "Cape Town;",
    "Changsha;",
    "Charlotte;",
    "Chiang Mai;",
    "Chicago;",
    "Chihuahua;",
    "Chișinău;",
    "Chittagong;",
    "Chongqing;",
    "Christchurch;",
    "City of San Marino;",
    "Colombo;",
    "Columbus;",
    "Conakry;",
    "Copenhagen;",
    "Cotonou;",
    "Cracow;",
    "Da Lat;",
    "Da Nang;",
    "Dakar;",
    "Dallas;",
    "Damascus;",
    "Dampier;",
    "Dar es Salaam;",
    "Darwin;",
    "Denpasar;",
    "Denver;",
    "Detroit;",
    "Dhaka;",
    "Dikson;",
    "Dili;",
    "Djibouti;",
    "Dodoma;",
    "Dolisie;",
    "Douala;",
    "Dubai;",
    "Dublin;",
    "Dunedin;",
    "Durban;",
    "Dushanbe;",
    "Edinburgh;",
    "Edmonton;",
    "El Paso;",
    "Entebbe;",
    "Erbil;",
    "Erzurum;",
    "Fairbanks;",
    "Fianarantsoa;",
    "Flores,  Petén;",
    "Frankfurt;",
    "Fresno;",
    "Fukuoka;",
    "Gabès;",
    "Gaborone;",
    "Gagnoa;",
    "Gangtok;",
    "Garissa;",
    "Garoua;",
    "George Town;",
    "Ghanzi;",
    "Gjoa Haven;",
    "Guadalajara;",
    "Guangzhou;",
    "Guatemala City;",
    "Halifax;",
    "Hamburg;",
    "Hamilton;",
    "Hanga Roa;",
    "Hanoi;",
    "Harare;",
    "Harbin;",
    "Hargeisa;",
    "Hat Yai;",
    "Havana;",
    "Helsinki;",
    "Heraklion;",
    "Hiroshima;",
    "Ho Chi Minh City;",
    "Hobart;",
    "Hong Kong;",
    "Honiara;",
    "Honolulu;",
    "Houston;",
    "Ifrane;",
    "Indianapolis;",
    "Iqaluit;",
    "Irkutsk;",
    "Istanbul;",
    "İzmir;",
    "Jacksonville;",
    "Jakarta;",
    "Jayapura;",
    "Jerusalem;",
    "Johannesburg;",
    "Jos;",
    "Juba;",
    "Kabul;",
    "Kampala;",
    "Kandi;",
    "Kankan;",
    "Kano;",
    "Kansas City;",
    "Karachi;",
    "Karonga;",
    "Kathmandu;",
    "Khartoum;",
    "Kingston;",
    "Kinshasa;",
    "Kolkata;",
    "Kuala Lumpur;",
    "Kumasi;",
    "Kunming;",
    "Kuopio;",
    "Kuwait City;",
    "Kyiv;",
    "Kyoto;",
    "La Ceiba;",
    "La Paz;",
    "Lagos;",
    "Lahore;",
    "Lake Havasu City;",
    "Lake Tekapo;",
    "Las Palmas de Gran Canaria;",
    "Las Vegas;",
    "Launceston;",
    "Lhasa;",
    "Libreville;",
    "Lisbon;",
    "Livingstone;",
    "Ljubljana;",
    "Lodwar;",
    "Lomé;",
    "London;",
    "Los Angeles;",
    "Louisville;",
    "Luanda;",
    "Lubumbashi;",
    "Lusaka;",
    "Luxembourg City;",
    "Lviv;",
    "Lyon;",
    "Madrid;",
    "Mahajanga;",
    "Makassar;",
    "Makurdi;",
    "Malabo;",
    "Malé;",
    "Managua;",
    "Manama;",
    "Mandalay;",
    "Mango;",
    "Manila;",
    "Maputo;",
    "Marrakesh;",
    "Marseille;",
    "Maun;",
    "Medan;",
    "Mek'ele;",
    "Melbourne;",
    "Memphis;",
    "Mexicali;",
    "Mexico City;",
    "Miami;",
    "Milan;",
    "Milwaukee;",
    "Minneapolis;",
    "Minsk;",
    "Mogadishu;",
    "Mombasa;",
    "Monaco;",
    "Moncton;",
    "Monterrey;",
    "Montreal;",
    "Moscow;",
    "Mumbai;",
    "Murmansk;",
    "Muscat;",
    "Mzuzu;",
    "N'Djamena;",
    "Naha;",
    "Nairobi;",
    "Nakhon Ratchasima;",
    "Napier;",
    "Napoli;",
    "Nashville;",
    "Nassau;",
    "Ndola;",
    "New Delhi;",
    "New Orleans;",
    "New York City;",
    "Ngaoundéré;",
    "Niamey;",
    "Nicosia;",
    "Niigata;",
    "Nouadhibou;",
    "Nouakchott;",
    "Novosibirsk;",
    "Nuuk;",
    "Odesa;",
    "Odienné;",
    "Oklahoma City;",
    "Omaha;",
    "Oranjestad;",
    "Oslo;",
    "Ottawa;",
    "Ouagadougou;",
    "Ouahigouya;",
    "Ouarzazate;",
    "Oulu;",
    "Palembang;",
    "Palermo;",
    "Palm Springs;",
    "Palmerston North;",
    "Panama City;",
    "Parakou;",
    "Paris;",
    "Perth;",
    "Petropavlovsk-Kamchatsky;",
    "Philadelphia;",
    "Phnom Penh;",
    "Phoenix;",
    "Pittsburgh;",
    "Podgorica;",
    "Pointe-Noire;",
    "Pontianak;",
    "Port Moresby;",
    "Port Sudan;",
    "Port Vila;",
    "Port-Gentil;",
    "Portland (OR);",
    "Porto;",
    "Prague;",
    "Praia;",
    "Pretoria;",
    "Pyongyang;",
    "Rabat;",
    "Rangpur;",
    "Reggane;",
    "Reykjavík;",
    "Riga;",
    "Riyadh;",
    "Rome;",
    "Roseau;",
    "Rostov-on-Don;",
    "Sacramento;",
    "Saint Petersburg;",
    "Saint-Pierre;",
    "Salt Lake City;",
    "San Antonio;",
    "San Diego;",
    "San Francisco;",
    "San Jose;",
    "San José;",
    "San Juan;",
    "San Salvador;",
    "Sana'a;",
    "Santo Domingo;",
    "Sapporo;",
    "Sarajevo;",
    "Saskatoon;",
    "Seattle;",
    "Ségou;",
    "Seoul;",
    "Seville;",
    "Shanghai;",
    "Singapore;",
    "Skopje;",
    "Sochi;",
    "Sofia;",
    "Sokoto;",
    "Split;",
    "St. John's;",
    "St. Louis;",
    "Stockholm;",
    "Surabaya;",
    "Suva;",
    "Suwałki;",
    "Sydney;",
    "Tabora;",
    "Tabriz;",
    "Taipei;",
    "Tallinn;",
    "Tamale;",
    "Tamanrasset;",
    "Tampa;",
    "Tashkent;",
    "Tauranga;",
    "Tbilisi;",
    "Tegucigalpa;",
    "Tehran;",
    "Tel Aviv;",
    "Thessaloniki;",
    "Thiès;",
    "Tijuana;",
    "Timbuktu;",
    "Tirana;",
    "Toamasina;",
    "Tokyo;",
    "Toliara;",
    "Toluca;",
    "Toronto;",
    "Tripoli;",
    "Tromsø;",
    "Tucson;",
    "Tunis;",
    "Ulaanbaatar;",
    "Upington;",
    "Ürümqi;",
    "Vaduz;",
    "Valencia;",
    "Valletta;",
    "Vancouver;",
    "Veracruz;",
    "Vienna;",
    "Vientiane;",
    "Villahermosa;",
    "Vilnius;",
    "Virginia Beach;",
    "Vladivostok;",
    "Warsaw;",
    "Washington, D.C.;",
    "Wau;",
    "Wellington;",
    "Whitehorse;",
    "Wichita;",
    "Willemstad;",
    "Winnipeg;",
    "Wrocław;",
    "Xi'an;",
    "Yakutsk;",
    "Yangon;",
    "Yaoundé;",
    "Yellowknife;",
    "Yerevan;",
    "Yinchuan;",
    "Zagreb;",
    "Zanzibar City;",
    "Zürich;",
    NULL,
};

char* numbers[NUMBER_OF_NUMBERS] = {
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
