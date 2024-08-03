#ifndef RESOURCES_H_
#define RESOURCES_H_

#include <stdint.h>

extern "C" {
    extern const uint8_t RESOURCES_PACKAGE[];
    extern int RESOURCES_CUBE_OFFSET;
    extern int RESOURCES_CUBE_SIZE;
    extern int RESOURCES_CLEAR_COAT_OFFSET;
    extern int RESOURCES_CLEAR_COAT_SIZE;
    extern int RESOURCES_SHADOW_PLANE_OFFSET;
    extern int RESOURCES_SHADOW_PLANE_SIZE;
    extern int RESOURCES_CAMERA_FEED_OFFSET;
    extern int RESOURCES_CAMERA_FEED_SIZE;
    extern int RESOURCES_VENETIAN_CROSSROADS_2K_IBL_OFFSET;
    extern int RESOURCES_VENETIAN_CROSSROADS_2K_IBL_SIZE;
}
#define RESOURCES_CUBE_DATA (RESOURCES_PACKAGE + RESOURCES_CUBE_OFFSET)
#define RESOURCES_CLEAR_COAT_DATA (RESOURCES_PACKAGE + RESOURCES_CLEAR_COAT_OFFSET)
#define RESOURCES_SHADOW_PLANE_DATA (RESOURCES_PACKAGE + RESOURCES_SHADOW_PLANE_OFFSET)
#define RESOURCES_CAMERA_FEED_DATA (RESOURCES_PACKAGE + RESOURCES_CAMERA_FEED_OFFSET)
#define RESOURCES_VENETIAN_CROSSROADS_2K_IBL_DATA (RESOURCES_PACKAGE + RESOURCES_VENETIAN_CROSSROADS_2K_IBL_OFFSET)

#endif
