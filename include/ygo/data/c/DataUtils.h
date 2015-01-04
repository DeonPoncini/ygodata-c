#ifndef YGO_DATA_C_DATAUTILS_H
#define YGO_DATA_C_DATAUTILS_H

#include <ygo/data/c/DataTypes.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ygo_data_StaticCardData_CPP ygo_data_StaticCardData_CPP;

#define SCD_CAST(x) (ygo_data_StaticCardData_CPP*)(x)

ygo_data_StaticCardData*
ygo_data_static_card_data_to_c(ygo_data_StaticCardData_CPP* c);

void ygo_data_delete_static_card_data(ygo_data_StaticCardData* c);

#ifdef __cplusplus
}
#endif


#endif
