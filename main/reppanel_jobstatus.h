//
// Copyright (c) 2020 Wolfgang Christl
// Licensed under Apache License, Version 2.0 - https://opensource.org/licenses/Apache-2.0

#ifndef REPPANEL_ESP32_REPPANEL_JOBSTATUS_H
#define REPPANEL_ESP32_REPPANEL_JOBSTATUS_H

#include <lvgl/src/lv_core/lv_obj.h>

extern lv_obj_t *label_job_progress_percent;
extern lv_obj_t *label_job_elapsed_time;
extern lv_obj_t *label_job_remaining_time;
extern lv_obj_t *label_job_layer_status;
extern lv_obj_t *label_job_filename;

void draw_jobstatus(lv_obj_t *parent_screen);

void update_print_job_status_ui();

#endif //REPPANEL_ESP32_REPPANEL_JOBSTATUS_H
