
#include <pthread.h>

typedef struct s_philo
{
    int id;
    pthread_mutex_t *left_fork;
    pthread_mutex_t *right_fork;
    int meals_eaten;
    long last_meal_time;
    pthread_t thread;
    

}t_philo;