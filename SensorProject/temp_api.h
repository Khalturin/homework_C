/* 
вывода статистики по каждому месяцу: 
• среднемесячная температура, 
• минимальная температура в текущем месяце, 
• максимальная температура в текущем месяце
вывод статистику за год: 
• среднегодовая температура 
• минимальная температура 
• максимальная температура
*/

#include "sensor.h"

/*
 * @brief возвращает среднюю температуру за месяц
 */
float mid_month_temp(sensor_t *info, int size, uint8_t month);

/*
 * @brief возвращает минимальную температуру за месяц
 */
float min_month_temp(sensor_t *info, int size, uint8_t month);

/*
 * @brief возвращает максимальную температуру за месяц
 */
float max_month_temp(sensor_t *info, int size, uint8_t month);


/*
 * @brief возвращает среднюю температуру за год
 */
float mid_year_temp(sensor_t *info, int size, uint16_t year);

/*
 * @brief возвращает минимальную температуру за год
 */
float min_year_temp(sensor_t *info, int size, uint16_t year);

/*
 * @brief возвращает максимальную температуру за год
 */
float max_year_temp(sensor_t *info, int size, uint16_t year);
