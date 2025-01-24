/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_record(lv_ui *ui)
{
    //Write codes record
    ui->record = lv_obj_create(NULL);
    lv_obj_set_size(ui->record, 720, 1280);
    lv_obj_set_scrollbar_mode(ui->record, LV_SCROLLBAR_MODE_OFF);

    //Write style for record, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->record, 252, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->record, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->record, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes record_label_ODO_num
    ui->record_label_ODO_num = lv_label_create(ui->record);
    lv_label_set_text(ui->record_label_ODO_num, "300");
    lv_label_set_long_mode(ui->record_label_ODO_num, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->record_label_ODO_num, 89, 833);
    lv_obj_set_size(ui->record_label_ODO_num, 124, 164);

    //Write style for record_label_ODO_num, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->record_label_ODO_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->record_label_ODO_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->record_label_ODO_num, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->record_label_ODO_num, &lv_font_Antonio_Regular_48, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->record_label_ODO_num, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->record_label_ODO_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->record_label_ODO_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->record_label_ODO_num, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->record_label_ODO_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->record_label_ODO_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->record_label_ODO_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->record_label_ODO_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->record_label_ODO_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->record_label_ODO_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes record_label_power_num
    ui->record_label_power_num = lv_label_create(ui->record);
    lv_label_set_text(ui->record_label_power_num, "3000");
    lv_label_set_long_mode(ui->record_label_power_num, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->record_label_power_num, 518, 845);
    lv_obj_set_size(ui->record_label_power_num, 121, 164);

    //Write style for record_label_power_num, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->record_label_power_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->record_label_power_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->record_label_power_num, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->record_label_power_num, &lv_font_Antonio_Regular_48, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->record_label_power_num, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->record_label_power_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->record_label_power_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->record_label_power_num, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->record_label_power_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->record_label_power_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->record_label_power_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->record_label_power_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->record_label_power_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->record_label_power_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes record_chart_1
    ui->record_chart_1 = lv_chart_create(ui->record);
    lv_chart_set_type(ui->record_chart_1, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->record_chart_1, 3, 5);
    lv_chart_set_point_count(ui->record_chart_1, 129);
    lv_chart_set_range(ui->record_chart_1, LV_CHART_AXIS_PRIMARY_Y, 0, 150);
    lv_chart_set_range(ui->record_chart_1, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_zoom_x(ui->record_chart_1, 256);
    lv_chart_set_zoom_y(ui->record_chart_1, 256);
    ui->record_chart_1_0 = lv_chart_add_series(ui->record_chart_1, lv_color_hex(0xbedf14), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
    lv_chart_set_next_value(ui->record_chart_1, ui->record_chart_1_0, 0);
#endif
    lv_obj_set_pos(ui->record_chart_1, 201, 176);
    lv_obj_set_size(ui->record_chart_1, 357, 424);
    lv_obj_set_scrollbar_mode(ui->record_chart_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for record_chart_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->record_chart_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->record_chart_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->record_chart_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->record_chart_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->record_chart_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->record_chart_1, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->record_chart_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->record_chart_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->record_chart_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->record_chart_1, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->record_chart_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->record_chart_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for record_chart_1, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->record_chart_1, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->record_chart_1, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->record_chart_1, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->record_chart_1, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->record_chart_1, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->record_chart_1, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write codes record_btn_1
    ui->record_btn_1 = lv_btn_create(ui->record);
    ui->record_btn_1_label = lv_label_create(ui->record_btn_1);
    lv_label_set_text(ui->record_btn_1_label, "" LV_SYMBOL_HOME "");
    lv_label_set_long_mode(ui->record_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->record_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->record_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->record_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->record_btn_1, 329, 660);
    lv_obj_set_size(ui->record_btn_1, 100, 50);

    //Write style for record_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->record_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->record_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->record_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->record_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->record_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->record_btn_1, &lv_font_montserratMedium_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->record_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->record_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of record.


    //Update current screen layout.
    lv_obj_update_layout(ui->record);

    //Init events for screen.
    events_init_record(ui);
}
