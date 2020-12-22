#ifndef TRADING_Q_H_INCLUDED
#define TRADING_Q_H_INCLUDED
#include "APPCONST.h"
#include "TRADING.C"
#include <stdint.h>
typedef enum {
    QUEUE_OK,
    QUEUE_EMPTY,
    QUEUE_FULL
    QUEUE_STOCK_DETAILS
}QueueStatus;

typedef struct {
    uint32_t size;
    uint32_t count;
    uint32_t rear ;
    uint32_t front;
    int32_t data[Q_LEN];
}Queue;
typedef struct {
int company_stock, ;
 float stock_price, total;
 char name, company_name[20], client_name[20];
 time_t t;
 time(&t);}Queue details
 }

typedef struct {
    int32_t data;
    QueueStatus status;
}QueueResult;

Queue queue_new(uint32_t size);
Queue queue_new(uint32_t size);
Queue queue_lookup( const uint32_t size); // to check for the lookup for trading q

QueueStatus queue_full(Queue* q);
QueueStatus queue_empty(Queue* q);
Queue* queue_add(Queue* q, int32_t ele, QueueResult *result);
Queue* queue_delete(Queue* q, QueueResult *result);
uint32_t queue_length(Queue* q);




#endif // TRADING_Q_H_INCLUDED
