#include "fw/src/mgos_hal.h"
#include "fw/src/mgos_sys_config.h"
#include "fw/src/mgos_mongoose.h"

bool mgos_invoke_cb(mgos_cb_t cb, void *arg) {
  /* TODO(alashkin): implement */
  (void) cb;
  (void) arg;
}

void mgos_system_restart(int exit_code) {
  /* TODO(alashkin): implement */
  (void) exit_code;
}

void device_get_mac_address(uint8_t mac[6]) {
  /* TODO(alashkin): implement */
  memset(mac, 0, 6);
}

void mgos_wdt_feed(void) {
  /* TODO(alashkin): implement */
}

void mgos_wdt_set_timeout(int secs) {
  /* TODO(alashkin): implement */
  (void) secs;
}

void mongoose_schedule_poll(void) {
  /* TODO(alashkin): implement */
}

size_t mgos_get_min_free_heap_size(void) {
  /* TODO(alashkin): implement */
  return 0;
}

size_t mgos_get_free_heap_size(void) {
  /* TODO(alashkin): implement */
  return 0;
}

enum mgos_init_result mgos_sys_config_init_platform(struct sys_config *cfg) {
  return MGOS_INIT_OK;
}

void mg_lwip_mgr_schedule_poll(struct mg_mgr *mgr) {
}