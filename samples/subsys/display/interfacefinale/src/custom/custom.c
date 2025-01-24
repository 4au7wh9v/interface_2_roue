/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/


/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include <stdlib.h>
#include "lvgl.h"
#include "custom.h"

/*********************
 *      DEFINES
 *********************/
#define CHART1_POINTS 100
/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/
static int32_t speed = 39;
static int32_t power = 3000;
static float trip = 12.4;
static int32_t ODO = 288;
static bool is_increase = true;
static int16_t spd_chart[CHART1_POINTS] = {0};
static bool is_up = true;
extern lv_ui guider_ui;
/**
 * Create a demo application
 */

/* set the digital label and steering lamp image style. */
/*static void set_position_x(void * gui, int32_t temp)
{
    lv_obj_set_x(gui, temp);
    if(temp >= 330) {
        lv_obj_set_style_img_recolor_opa(guider_ui.home_img_left, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
        lv_obj_add_flag(guider_ui.home_img_light, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(guider_ui.home_img_high_light, LV_OBJ_FLAG_HIDDEN);
        if(temp % 4 == 0) {
            lv_obj_set_style_img_recolor_opa(guider_ui.home_img_right, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
        } else {
            lv_obj_set_style_img_recolor_opa(guider_ui.home_img_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
        }
    } else {
        lv_obj_set_style_img_recolor_opa(guider_ui.home_img_right, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
        lv_obj_clear_flag(guider_ui.home_img_light, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(guider_ui.home_img_high_light, LV_OBJ_FLAG_HIDDEN);
        if(temp % 4 == 0) {
            lv_obj_set_style_img_recolor_opa(guider_ui.home_img_left, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
        } else {
            lv_obj_set_style_img_recolor_opa(guider_ui.home_img_left, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
        }
    }
}

static void set_position_y(void * gui, int32_t temp)
{
    lv_obj_set_y(gui, temp);
}
*/
void custom_init(lv_ui *ui)
{
     //lv_disp_set_rotation(NULL,-45) ; 
}




void speed_meter_timer_cb(lv_timer_t * t)
{
    //lv_ui * gui = t->user_data;

    static bool toggle = false; // Toggle variable to alternate blinkin
    lv_ui * gui = t->user_data;
 static int counter = 0;         // Counter to control the toggle speed
    const int toggle_interval = 50; // Adjust this to change the blinking speed (higher = slower)

    // Increment the counter
    counter++;

    // Change toggle state only after the counter reaches the toggle interval
    if (counter >= toggle_interval) {
        toggle = !toggle; // Toggle the state
        counter = 0;      // Reset the counter
    }

   
    if (toggle) {
        // Blink main_left on, main_right off
        lv_obj_set_style_img_recolor_opa(guider_ui.home_left, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_img_recolor_opa(guider_ui.home_right, 0, LV_PART_MAIN | LV_STATE_DEFAULT); 
                   if (counter%4==0 ) {  
                      lv_obj_set_style_img_recolor_opa(guider_ui.home_left, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

                   } 
                    else {
                        lv_obj_set_style_img_recolor_opa(guider_ui.home_left, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

                    }
    } else {
        // Blink main_left off, main_right on
        lv_obj_set_style_img_recolor_opa(guider_ui.home_left, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_img_recolor_opa(guider_ui.home_right, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    
                 if (counter%4==0 ) {  
                      lv_obj_set_style_img_recolor_opa(guider_ui.home_right, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

                   } 
                    else {
                        lv_obj_set_style_img_recolor_opa(guider_ui.home_right, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

                    }   
     }

    // Toggle the blinking state for the next call


    if(speed >= 150) { 
        is_increase = false;
        //lv_obj_set_style_img_recolor_opa(guider_ui.main_left, 0, LV_PART_MAIN|LV_STATE_DEFAULT); }
lv_obj_set_style_img_recolor_opa(guider_ui.home_left, 255, LV_PART_MAIN|LV_STATE_DEFAULT);}
  //  if(speed >= 150) is_increase = false;

    //if ( speed >= 10) { lv_led_on(guider_ui.screen_led_1);}

    
    if(speed <= 30) is_increase = true;


    
    lv_meter_set_indicator_value(gui->home_meter_board, gui->home_meter_board_scale_0_ndline_0, speed);
    //lv_obj_set_style_transform_angle(gui->home_meter_board, 900, 0);
   
    lv_label_set_text_fmt(gui->home_label_digit, "%"LV_PRId32, speed);
    // update trip value
    if(trip < 200.0) trip += 0.001;
    //lv_label_set_text_fmt(gui->home_label_trip_num, "%"LV_PRId32, (int)trip);
    
    // update power value
   // lv_label_set_text_fmt(gui->home_label_power_num, "%"LV_PRId32, power + speed);
    // update ODO value
   // lv_label_set_text_fmt(gui->home_label_ODO_num, "%"LV_PRId32, ODO + (int)trip);
    if(is_increase)
    {
        speed += speed / 20;
    }else
    {
        speed -= speed / 10;
    }
  
}

void record_chart_timer_cb(lv_timer_t * t)
{
    lv_obj_t * obj = t->user_data;

    lv_chart_series_t * ser = lv_chart_get_series_next(obj, NULL);
    lv_coord_t * ser_array = lv_chart_get_y_array(obj, ser);


    for(int i = 0; i < CHART1_POINTS - 1; i++)
    {
        spd_chart[i] = spd_chart[i+1];
        ser_array[i] = spd_chart[i];
    }

    if(spd_chart[CHART1_POINTS - 1] > 110) is_up = false;
    if(spd_chart[CHART1_POINTS - 1] < 70) is_up = true;

    if(is_up)
    {
        spd_chart[CHART1_POINTS - 1] += lv_rand(0, 5);
    }else
    {
        spd_chart[CHART1_POINTS - 1] -= lv_rand(0, 5);
    }
    ser_array[CHART1_POINTS - 1] = spd_chart[CHART1_POINTS - 1];
    lv_chart_refresh(obj);
}



