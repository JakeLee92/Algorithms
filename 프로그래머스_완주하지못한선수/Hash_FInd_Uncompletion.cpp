{\rtf1\ansi\ansicpg1252\cocoartf2511
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
#include <string>\
#include <vector>\
#include <map>\
\
\
using namespace std;\
string solution(vector<string> participant, vector<string> completion) \
\{\
	string strAnwser;\
	\
	map<string , int> mapParticipant ;\
	\
	// INSERT Participant(vector) to MAP\
	for(auto pc : participant)\
	\{\
		if(mapParticipant.find(pc) != mapParticipant.end())\
		\{\
			mapParticipant[pc]++;\
		\}\
		else\
		\{\
			mapParticipant.insert(make_pair(pc , 1));	\
		\}\
		\
	\}\
	\
	// FIND Completion\
	for(auto cn : completion)\
	\{\
		if(mapParticipant.find(cn) != mapParticipant.end())\
		\{\
			mapParticipant[cn]--;\
			\
			if(mapParticipant[cn] <= 0) mapParticipant.erase(cn);\
		\}\
	\}\
	\
	if(mapParticipant.size() > 0) strAnwser = mapParticipant.begin()->first;\
	\
	\
	return strAnwser ;\
\}\
}