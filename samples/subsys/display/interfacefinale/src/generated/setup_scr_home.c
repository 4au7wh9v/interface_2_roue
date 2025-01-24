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



void setup_scr_home(lv_ui *ui)
{
    //Write codes home
    ui->home = lv_obj_create(NULL);
    lv_obj_set_size(ui->home, 720, 1280);
    lv_obj_set_scrollbar_mode(ui->home, LV_SCROLLBAR_MODE_OFF);

    //Write style for home, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->home, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->home, lv_color_hex(0x070707), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->home, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes home_meter_board
    ui->home_meter_board = lv_meter_create(ui->home);
    // add scale ui->home_meter_board_scale_0
    ui->home_meter_board_scale_0 = lv_meter_add_scale(ui->home_meter_board);
    lv_meter_set_scale_ticks(ui->home_meter_board, ui->home_meter_board_scale_0, 41, 2, 6, lv_color_hex(0xc8b8b8));
    lv_meter_set_scale_major_ticks(ui->home_meter_board, ui->home_meter_board_scale_0, 5, 2, 10, lv_color_hex(0x00a7c5), 15);
    lv_meter_set_scale_range(ui->home_meter_board, ui->home_meter_board_scale_0, 0, 200, 275, 135);

    // add scale line for ui->home_meter_board_scale_0
    ui->home_meter_board_scale_0_scaleline_0 = lv_meter_add_scale_lines(ui->home_meter_board, ui->home_meter_board_scale_0, lv_color_hex(0x00ff47), lv_color_hex(0x01b51b), true, 0);
    lv_meter_set_indicator_start_value(ui->home_meter_board, ui->home_meter_board_scale_0_scaleline_0, 0);
    lv_meter_set_indicator_end_value(ui->home_meter_board, ui->home_meter_board_scale_0_scaleline_0, 60);

    // add scale line for ui->home_meter_board_scale_0
    ui->home_meter_board_scale_0_scaleline_1 = lv_meter_add_scale_lines(ui->home_meter_board, ui->home_meter_board_scale_0, lv_color_hex(0xffff00), lv_color_hex(0xbc9c00), true, 0);
    lv_meter_set_indicator_start_value(ui->home_meter_board, ui->home_meter_board_scale_0_scaleline_1, 60);
    lv_meter_set_indicator_end_value(ui->home_meter_board, ui->home_meter_board_scale_0_scaleline_1, 120);

    // add scale line for ui->home_meter_board_scale_0
    ui->home_meter_board_scale_0_scaleline_2 = lv_meter_add_scale_lines(ui->home_meter_board, ui->home_meter_board_scale_0, lv_color_hex(0xd8c500), lv_color_hex(0xd80021), true, 0);
    lv_meter_set_indicator_start_value(ui->home_meter_board, ui->home_meter_board_scale_0_scaleline_2, 120);
    lv_meter_set_indicator_end_value(ui->home_meter_board, ui->home_meter_board_scale_0_scaleline_2, 200);

    // add needle line for ui->home_meter_board_scale_0.
    ui->home_meter_board_scale_0_ndline_0 = lv_meter_add_needle_line(ui->home_meter_board, ui->home_meter_board_scale_0, 4, lv_color_hex(0xfdfdfd), -8);
    lv_meter_set_indicator_value(ui->home_meter_board, ui->home_meter_board_scale_0_ndline_0, 39);
    lv_obj_set_pos(ui->home_meter_board, 495, 351);
    lv_obj_set_size(ui->home_meter_board, 146, 146);

    //Write style for home_meter_board, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->home_meter_board, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_meter_board, 468, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->home_meter_board, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->home_meter_board, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->home_meter_board, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->home_meter_board, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->home_meter_board, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->home_meter_board, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for home_meter_board, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->home_meter_board, lv_color_hex(0xf7f7f7), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->home_meter_board, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->home_meter_board, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write style for home_meter_board, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->home_meter_board, 128, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->home_meter_board, lv_color_hex(0x555554), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->home_meter_board, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes home_label_digit
    ui->home_label_digit = lv_label_create(ui->home);
    lv_label_set_text(ui->home_label_digit, "40");
    lv_label_set_long_mode(ui->home_label_digit, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->home_label_digit, 214, 306);
    lv_obj_set_size(ui->home_label_digit, 295, 277);

    //Write style for home_label_digit, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->home_label_digit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_label_digit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->home_label_digit, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->home_label_digit, &lv_font_Antonio_Regular_123, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->home_label_digit, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->home_label_digit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->home_label_digit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->home_label_digit, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->home_label_digit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->home_label_digit, 40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->home_label_digit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->home_label_digit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->home_label_digit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->home_label_digit, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes home_bar_battery
    ui->home_bar_battery = lv_bar_create(ui->home);
    lv_obj_set_style_anim_time(ui->home_bar_battery, 1000, 0);
    lv_bar_set_mode(ui->home_bar_battery, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->home_bar_battery, 0, 100);
    lv_bar_set_value(ui->home_bar_battery, 90, LV_ANIM_OFF);
    lv_obj_set_pos(ui->home_bar_battery, 663, 43);
    lv_obj_set_size(ui->home_bar_battery, 25, 20);

    //Write style for home_bar_battery, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->home_bar_battery, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_bar_battery, 44, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->home_bar_battery, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui->home_bar_battery, &_battery_bak_25x20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui->home_bar_battery, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui->home_bar_battery, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for home_bar_battery, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->home_bar_battery, 0, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_bar_battery, 44, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui->home_bar_battery, &_battery_ind_25x20, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui->home_bar_battery, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui->home_bar_battery, 0, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes home_label_WIFI
    ui->home_label_WIFI = lv_label_create(ui->home);
    lv_label_set_text(ui->home_label_WIFI, "" LV_SYMBOL_WIFI "");
    lv_label_set_long_mode(ui->home_label_WIFI, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->home_label_WIFI, 538, 43);
    lv_obj_set_size(ui->home_label_WIFI, 61, 92);

    //Write style for home_label_WIFI, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->home_label_WIFI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_label_WIFI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->home_label_WIFI, lv_color_hex(0xf8fdf8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->home_label_WIFI, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->home_label_WIFI, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->home_label_WIFI, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->home_label_WIFI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->home_label_WIFI, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->home_label_WIFI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->home_label_WIFI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->home_label_WIFI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->home_label_WIFI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->home_label_WIFI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->home_label_WIFI, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes home_label_BT
    ui->home_label_BT = lv_label_create(ui->home);
    lv_label_set_text(ui->home_label_BT, "" LV_SYMBOL_BLUETOOTH " ");
    lv_label_set_long_mode(ui->home_label_BT, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->home_label_BT, 598, 43);
    lv_obj_set_size(ui->home_label_BT, 61, 92);

    //Write style for home_label_BT, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->home_label_BT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_label_BT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->home_label_BT, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->home_label_BT, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->home_label_BT, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->home_label_BT, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->home_label_BT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->home_label_BT, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->home_label_BT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->home_label_BT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->home_label_BT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->home_label_BT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->home_label_BT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->home_label_BT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes home_img_high_light
    ui->home_img_high_light = lv_img_create(ui->home);
    lv_img_set_src(ui->home_img_high_light, &_high_beam_alpha_42x42);
    lv_img_set_pivot(ui->home_img_high_light, 50,50);
    lv_img_set_angle(ui->home_img_high_light, 0);
    lv_obj_set_pos(ui->home_img_high_light, 618, 552);
    lv_obj_set_size(ui->home_img_high_light, 42, 42);
    lv_obj_add_flag(ui->home_img_high_light, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->home_img_high_light, LV_OBJ_FLAG_CLICKABLE);

    //Write style for home_img_high_light, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->home_img_high_light, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->home_img_high_light, lv_color_hex(0x00d7fd), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->home_img_high_light, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_img_high_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->home_img_high_light, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes home_label_2
    ui->home_label_2 = lv_label_create(ui->home);
    lv_label_set_text(ui->home_label_2, "Km/h");
    lv_label_set_long_mode(ui->home_label_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->home_label_2, 249, 503);
    lv_obj_set_size(ui->home_label_2, 245, 89);

    //Write style for home_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->home_label_2, lv_color_hex(0xfafafa), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->home_label_2, &lv_font_montserratMedium_63, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->home_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->home_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->home_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes home_label_3
    ui->home_label_3 = lv_label_create(ui->home);
    lv_label_set_text(ui->home_label_3, "" LV_SYMBOL_SETTINGS "");
    lv_label_set_long_mode(ui->home_label_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->home_label_3, 472, 43);
    lv_obj_set_size(ui->home_label_3, 100, 32);

    //Write style for home_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->home_label_3, lv_color_hex(0xfafafa), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->home_label_3, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->home_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->home_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->home_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes home_Distance
    ui->home_Distance = lv_label_create(ui->home);
    lv_label_set_text(ui->home_Distance, "Distance");
    lv_label_set_long_mode(ui->home_Distance, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->home_Distance, 0, 49);
    lv_obj_set_size(ui->home_Distance, 196, 32);

    //Write style for home_Distance, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->home_Distance, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_Distance, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->home_Distance, lv_color_hex(0xf7f7f7), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->home_Distance, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->home_Distance, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->home_Distance, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->home_Distance, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->home_Distance, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->home_Distance, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->home_Distance, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->home_Distance, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->home_Distance, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->home_Distance, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->home_Distance, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes home_img_1
    ui->home_img_1 = lv_img_create(ui->home);
    lv_obj_add_flag(ui->home_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->home_img_1, &_dis__alpha_57x38);
    lv_img_set_pivot(ui->home_img_1, 50,50);
    lv_img_set_angle(ui->home_img_1, 0);
    lv_obj_set_pos(ui->home_img_1, 176, 43);
    lv_obj_set_size(ui->home_img_1, 57, 38);

    //Write style for home_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->home_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->home_img_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->home_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->home_img_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes home_label_trip_num
    ui->home_label_trip_num = lv_label_create(ui->home);
    lv_label_set_text(ui->home_label_trip_num, "12");
    lv_label_set_long_mode(ui->home_label_trip_num, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->home_label_trip_num, -12, 84);
    lv_obj_set_size(ui->home_label_trip_num, 136, 52);

    //Write style for home_label_trip_num, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->home_label_trip_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_label_trip_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->home_label_trip_num, lv_color_hex(0xf6f6f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->home_label_trip_num, &lv_font_montserratMedium_33, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->home_label_trip_num, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->home_label_trip_num, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->home_label_trip_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->home_label_trip_num, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->home_label_trip_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->home_label_trip_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->home_label_trip_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->home_label_trip_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->home_label_trip_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->home_label_trip_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes home_label_6
    ui->home_label_6 = lv_label_create(ui->home);
    lv_label_set_text(ui->home_label_6, "Km");
    lv_label_set_long_mode(ui->home_label_6, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->home_label_6, 70, 84);
    lv_obj_set_size(ui->home_label_6, 100, 32);

    //Write style for home_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->home_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->home_label_6, lv_color_hex(0xfafafa), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->home_label_6, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->home_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->home_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->home_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->home_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->home_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->home_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->home_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->home_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->home_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->home_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes home_img_2
    ui->home_img_2 = lv_img_create(ui->home);
    lv_obj_add_flag(ui->home_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->home_img_2, &_ra_alpha_100x100);
    lv_img_set_pivot(ui->home_img_2, 50,50);
    lv_img_set_angle(ui->home_img_2, 0);
    lv_obj_set_pos(ui->home_img_2, 78, 734);
    lv_obj_set_size(ui->home_img_2, 100, 100);

    //Write style for home_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->home_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->home_img_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->home_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->home_img_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes home_img_3
    ui->home_img_3 = lv_img_create(ui->home);
    lv_obj_add_flag(ui->home_img_3, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->home_img_3, &_telephone_alpha_100x100);
    lv_img_set_pivot(ui->home_img_3, 50,50);
    lv_img_set_angle(ui->home_img_3, 0);
    lv_obj_set_pos(ui->home_img_3, 308, 734);
    lv_obj_set_size(ui->home_img_3, 100, 100);

    //Write style for home_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->home_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->home_img_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->home_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->home_img_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes home_right
    ui->home_right = lv_img_create(ui->home);
    lv_obj_add_flag(ui->home_right, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->home_right, &_direction_alpha_96x97);
    lv_img_set_pivot(ui->home_right, 50,50);
    lv_img_set_angle(ui->home_right, 0);
    lv_obj_set_pos(ui->home_right, 384, 140);
    lv_obj_set_size(ui->home_right, 96, 97);

    //Write style for home_right, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->home_right, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->home_right, lv_color_hex(0x00ff24), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->home_right, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->home_right, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes home_left
    ui->home_left = lv_img_create(ui->home);
    lv_obj_add_flag(ui->home_left, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->home_left, &_direction_alpha_94x102);
    lv_img_set_pivot(ui->home_left, 50,50);
    lv_img_set_angle(ui->home_left, 1800);
    lv_obj_set_pos(ui->home_left, 245, 140);
    lv_obj_set_size(ui->home_left, 94, 102);

    //Write style for home_left, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->home_left, 252, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->home_left, lv_color_hex(0x1bff00), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->home_left, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_left, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->home_left, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes home_img_4
    ui->home_img_4 = lv_img_create(ui->home);
    lv_obj_add_flag(ui->home_img_4, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->home_img_4, &_stats__alpha_100x100);
    lv_img_set_pivot(ui->home_img_4, 50,50);
    lv_img_set_angle(ui->home_img_4, 0);
    lv_obj_set_pos(ui->home_img_4, 509, 734);
    lv_obj_set_size(ui->home_img_4, 100, 100);

    //Write style for home_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->home_img_4, 248, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui->home_img_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->home_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->home_img_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->home_img_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of home.


    //Update current screen layout.
    lv_obj_update_layout(ui->home);

    //Init events for screen.
    events_init_home(ui);
}
