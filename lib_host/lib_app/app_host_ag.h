
/*
 * Copyright 2016-2021, Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation.  All rights reserved.
 *
 * This software, including source code, documentation and related
 * materials ("Software") is owned by Cypress Semiconductor Corporation
 * or one of its affiliates ("Cypress") and is protected by and subject to
 * worldwide patent protection (United States and foreign),
 * United States copyright laws and international treaty provisions.
 * Therefore, you may use this Software only as provided in the license
 * agreement accompanying the software package from which you
 * obtained this Software ("EULA").
 * If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
 * non-transferable license to copy, modify, and compile the Software
 * source code solely for use in connection with Cypress's
 * integrated circuit products.  Any reproduction, modification, translation,
 * compilation, or representation of this Software except as specified
 * above is prohibited without the express written permission of Cypress.
 *
 * Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
 * reserves the right to make changes to the Software without notice. Cypress
 * does not assume any liability arising out of the application or use of the
 * Software or any product or circuit described in the Software. Cypress does
 * not authorize its products for use in any products where a malfunction or
 * failure of the Cypress product may reasonably be expected to result in
 * significant property damage, injury or death ("High Risk Product"). By
 * including Cypress's product in a High Risk Product, the manufacturer
 * of such system or application assumes all risk of such use and in doing
 * so agrees to indemnify Cypress against all liability.
 */


#ifndef APP_HOST_AG_H
#define APP_HOST_AG_H

// Audio Gateway commands
bool app_host_ag_connect(uint8_t bda[BDA_LEN]);
bool app_host_ag_disconnect(uint8_t bda[BDA_LEN]);
bool app_host_ag_audio_open(uint8_t bda[BDA_LEN]);
bool app_host_ag_audio_close(uint8_t bda[BDA_LEN]);
bool app_host_ag_send_clcc_response(uint8_t bda[6], uint8_t *call_id_list, uint8_t num_item);
bool app_host_ag_update_cind(char *cind, uint8_t length);
bool app_host_ag_send_callsetup_status(uint8_t bda[6], uint8_t status);
bool app_host_ag_send_ciev(uint8_t bda[6], char *ciev, uint8_t length);
bool app_host_ag_send_ring_cmd(uint8_t bda[6]);
bool app_host_ag_send_clip_cmd(uint8_t bda[6]);
bool app_host_ag_send_ccwa_cmd(uint8_t bda[6]);
bool app_host_ag_send_ok_cmd(uint8_t bda[6]);
bool app_host_ag_send_error_cmd(uint8_t bda[6]);
bool app_host_ag_send_spk_vol_cmd(uint8_t bda[6], int vol);
bool app_host_ag_send_mic_vol_cmd(uint8_t bda[6], int vol);
// Audio Gateway events
void app_host_ag_event(uint16_t opcode, uint8_t * p_data, uint32_t len);


#endif
