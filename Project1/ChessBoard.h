﻿#pragma once
#include "model.h"

#define HIGHLIGHTCOLOR glm::vec3(159.0f/255.0f, 1.0f, 159.0f/255.0f)
#define HIGHLIGHTCOLOR2 glm::vec3(1.0f, 1.0f, 128.0f/255.0f)

class ChessBoard
{
public:
	ChessBoard(string const &path, glm::vec3 color = glm::vec3(0.0f, 0.0f, 0.0f), const bool gamma = false);
	~ChessBoard();
	void show(Shader &input_shader);
	void get_model(glm::mat4& model);
	Model block_model;
	glm::vec3 block_color;
	void reset_color();
private:
	glm::vec3 scale_;
	glm::vec3 origin_color;
};

const int block_coor[19][11] = { 0 ,0 ,0 ,0 ,0 ,70 ,70 ,0 ,0 ,0 ,0 ,0 ,0 ,31 ,43 ,56 ,69 ,87 ,100 ,0 ,0 ,0 ,0 ,0 ,30 ,43 ,55 ,68 ,86 ,99 ,112 ,0 ,0 ,0 ,0 ,30 ,42 ,54 ,54 ,85 ,98 ,111 ,124 ,0 ,0 ,19 ,29 ,41 ,41 ,67 ,84 ,97 ,110 ,123 ,0 ,8 ,18 ,28 ,40 ,53 ,66 ,83 ,83 ,109 ,122 ,0 ,7 ,17 ,28 ,39 ,52 ,66 ,82 ,96 ,108 ,121 ,0 ,6 ,16 ,27 ,38 ,52 ,65 ,81 ,81 ,108 ,120 ,0 ,5 ,15 ,26 ,38 ,51 ,0 ,80 ,95 ,107 ,119 ,119 ,4 ,14 ,26 ,37 ,0 ,64 ,79 ,79 ,106 ,118 ,125 ,3 ,13 ,25 ,36 ,50 ,0 ,78 ,94 ,106 ,117 ,117 ,2 ,12 ,24 ,36 ,49 ,63 ,77 ,77 ,105 ,116 ,0 ,1 ,11 ,23 ,35 ,49 ,62 ,76 ,93 ,105 ,115 ,0 ,1 ,10 ,23 ,34 ,48 ,62 ,75 ,92 ,104 ,114 ,0 ,0 ,9 ,22 ,34 ,47 ,61 ,75 ,91 ,103 ,113 ,0 ,0 ,0 ,21 ,33 ,46 ,46 ,74 ,90 ,102 ,113 ,0 ,0 ,0 ,21 ,32 ,45 ,59 ,73 ,89 ,101 ,0 ,0 ,0 ,0 ,20 ,32 ,44 ,58 ,72 ,88 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,57 ,71 ,0 ,0 ,0 ,0 };