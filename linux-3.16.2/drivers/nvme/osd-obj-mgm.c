/*
 * osd-obj-mgm.c
 *
 *  Created on: Nov 25, 2015
 *      Author: datos



   1) Create new object on OSD device

      $ echo  "1234 5678 98765 /dev/osd1" > /sys/class/osddev/add_object

      The columns in order are:
      - OSD object partition id
      - OSD object id
      - OSD object size in bytes
      - OSD device

    2) Remove existing object from the OSD  device

      $ echo  "1234 5678 /dev/osd1" > /sys/class/osddev/remove_object

      The columns in order are:
      - OSD object partition id
      - OSD object id
      - OSD device

    3)  List all objects on the OSD  device

      $ cat /sys/class/osddev/list_objects /dev/osd1
      1234 5678   123456
      1994 897123 987654

      The columns in order are:
      - OSD object partition id
      - OSD object id
      - OSD object size

*/
