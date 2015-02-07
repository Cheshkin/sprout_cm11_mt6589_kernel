/*
* Copyright (C) 2011-2014 MediaTek Inc.
* 
* This program is free software: you can redistribute it and/or modify it under the terms of the 
* GNU General Public License version 2 as published by the Free Software Foundation.
* 
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with this program.
* If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SEC_CCCI_LIB_H
#define SEC_CCCI_LIB_H

int masp_ccci_signfmt_verify_file(char *file_path, unsigned int *data_offset, unsigned int *data_sec_len);
int masp_ccci_version_info(void);
int sec_ccci_file_open(char *file_path);
int sec_ccci_file_close(int fp_id);
int masp_ccci_is_cipherfmt(int fp_id, unsigned int start_off, unsigned int *img_len);
int masp_ccci_decrypt_cipherfmt(int fp_id, unsigned int start_off, char *buf, unsigned int buf_len, unsigned int *data_offset);

#endif /* SEC_CCCI_LIB_H */

