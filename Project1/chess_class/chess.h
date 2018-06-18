﻿#pragma once
//#include "main.h"
#include "../model.h"

class Chess
{
public:
	Chess(const int init_cor_x, const int init_cor_y, int id, int init_team, string const &path, const bool gamma = false);
	virtual ~Chess() = default;
	virtual void show(Shader &input_shader) = 0;
	virtual void get_model(glm::mat4& model);
	bool check_live_status() const;
	Model chess_model_;
	int _if_explode;


private:
	glm::vec3 pos_;
	glm::vec3 rotation_;
	glm::vec3 scale_;

	int chess_id_;
	bool if_die_;  // need to be initialize
	int cor_x_;
	int cor_y_;
	int player_;
};

const float vertice_coordinate [19][11][3] = { 0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.433f,0.136f,-4.500f,0.433f,0.136f,-4.500f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,-2.454f,0.000f,-4.000f,-1.732f,0.136f,-3.750f,-0.722f,0.000f,-4.000f,-0.144f,0.000f,-4.000f,1.010f,0.000f,-4.000f,1.588f,0.000f,-4.000f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,-2.598f,0.136f,-3.250f,-1.732f,0.136f,-3.750f,-1.010f,0.000f,-3.500f,0.144f,0.000f,-3.500f,0.722f,0.000f,-3.500f,1.876f,0.000f,-3.500f,2.454f,0.000f,-3.500f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,-2.598f,0.136f,-3.250f,-1.876f,0.000f,-3.000f,-0.433f,0.136f,-3.000f,-0.433f,0.136f,-3.000f,1.010f,0.000f,-3.000f,1.588f,0.000f,-3.000f,2.742f,0.000f,-3.000f,3.320f,0.000f,-3.000f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,-3.320f,0.000f,-2.500f,-2.742f,0.000f,-2.500f,-1.299f,0.136f,-2.500f,-1.299f,0.136f,-2.500f,0.144f,0.000f,-2.500f,0.722f,0.000f,-2.500f,1.876f,0.000f,-2.500f,2.454f,0.000f,-2.500f,3.608f,0.000f,-2.500f,0.0f,0.0f,0.0f,-4.186f,0.000f,-2.000f,-3.608f,0.000f,-2.000f,-2.598f,0.136f,-1.750f,-1.876f,0.000f,-2.000f,-0.722f,0.000f,-2.000f,-0.000f,0.136f,-1.750f,1.299f,0.136f,-2.000f,1.299f,0.136f,-2.000f,2.742f,0.000f,-2.000f,3.320f,0.000f,-2.000f,0.0f,0.0f,0.0f,-4.474f,0.000f,-1.500f,-3.320f,0.000f,-1.500f,-2.598f,0.136f,-1.750f,-1.588f,0.000f,-1.500f,-0.866f,0.136f,-1.250f,-0.000f,0.136f,-1.750f,0.722f,0.000f,-1.500f,1.876f,0.000f,-1.500f,2.598f,0.136f,-1.250f,3.608f,0.000f,-1.500f,0.0f,0.0f,0.0f,-4.186f,0.000f,-1.000f,-3.608f,0.000f,-1.000f,-2.454f,0.000f,-1.000f,-1.732f,0.136f,-0.750f,-0.866f,0.136f,-1.250f,-0.144f,0.236f,-1.000f,1.299f,0.136f,-1.000f,1.299f,0.136f,-1.000f,2.598f,0.136f,-1.250f,3.320f,0.000f,-1.000f,0.0f,0.0f,0.0f,-4.474f,0.000f,-0.500f,-3.320f,0.000f,-0.500f,-2.598f,0.136f,-0.250f,-1.732f,0.136f,-0.750f,-1.010f,0.236f,-0.500f,0.0f,0.0f,0.0f,0.722f,0.236f,-0.500f,1.876f,0.000f,-0.500f,2.454f,0.000f,-0.500f,3.897f,0.136f,-0.500f,3.897f,0.136f,-0.500f,-4.186f,0.000f,-0.000f,-3.608f,0.000f,-0.000f,-2.598f,0.136f,-0.250f,-1.876f,0.000f,-0.000f,0.0f,0.0f,0.0f,-0.144f,0.336f,-0.000f,1.299f,0.136f,-0.000f,1.299f,0.136f,-0.000f,2.598f,0.136f,0.250f,3.320f,0.000f,-0.000f,4.474f,0.000f,-0.000f,-4.474f,0.000f,0.500f,-3.320f,0.000f,0.500f,-2.742f,0.000f,0.500f,-1.732f,0.136f,0.750f,-1.010f,0.236f,0.500f,0.0f,0.0f,0.0f,0.722f,0.236f,0.500f,1.876f,0.000f,0.500f,2.598f,0.136f,0.250f,3.897f,0.136f,0.500f,3.897f,0.136f,0.500f,-4.186f,0.000f,1.000f,-3.608f,0.000f,1.000f,-2.454f,0.000f,1.000f,-1.732f,0.136f,0.750f,-0.866f,0.136f,1.250f,-0.144f,0.236f,1.000f,1.299f,0.136f,1.000f,1.299f,0.136f,1.000f,2.598f,0.136f,1.250f,3.320f,0.000f,1.000f,0.0f,0.0f,0.0f,-4.330f,0.136f,1.750f,-3.320f,0.000f,1.500f,0.0f,0.0f,0.0f,-1.588f,0.000f,1.500f,-0.866f,0.136f,1.250f,-0.000f,0.136f,1.750f,0.722f,0.000f,1.500f,1.876f,0.000f,1.500f,2.598f,0.136f,1.250f,3.608f,0.000f,1.500f,0.0f,0.0f,0.0f,-4.330f,0.136f,1.750f,-3.608f,0.000f,2.000f,-2.598f,0.136f,1.750f,-1.732f,0.136f,2.250f,-0.722f,0.000f,2.000f,-0.000f,0.136f,1.750f,0.866f,0.136f,2.250f,1.588f,0.000f,2.000f,2.742f,0.000f,2.000f,3.320f,0.000f,2.000f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,-3.320f,0.000f,2.500f,-2.742f,0.000f,2.500f,-1.732f,0.136f,2.250f,-1.010f,0.000f,2.500f,0.144f,0.000f,2.500f,0.866f,0.136f,2.250f,1.876f,0.000f,2.500f,2.454f,0.000f,2.500f,3.464f,0.136f,2.750f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,-2.598f,0.136f,1.750f,-1.876f,0.000f,3.000f,-0.433f,0.136f,3.000f,-0.433f,0.136f,3.000f,1.010f,0.000f,3.000f,1.588f,0.000f,3.000f,2.742f,0.000f,3.000f,3.464f,0.136f,2.750f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,-2.598f,0.136f,3.250f,-1.732f,0.136f,3.750f,-1.010f,0.000f,3.500f,0.144f,0.000f,3.500f,0.722f,0.000f,3.500f,1.876f,0.000f,3.500f,2.454f,0.000f,3.500f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,-2.454f,0.000f,4.000f,-1.732f,0.136f,3.750f,-0.722f,0.000f,4.000f,-0.144f,0.000f,4.000f,1.010f,0.000f,4.000f,1.588f,0.000f,4.000f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.144f,0.000f,4.500f,0.722f,0.000f,4.500f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f };
