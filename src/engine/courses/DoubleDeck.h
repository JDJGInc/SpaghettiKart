#pragma once

#include <libultraship.h>
#include "Course.h"

extern "C" {
    #include "assets/double_deck_vertices.h"
    #include "assets/double_deck_displaylists.h"
    #include "assets/double_deck_data.h"
    #include "course_offsets.h"
    #include "camera.h"
    #include "data/some_data.h"
    #include "objects.h"
    #include "path_spawn_metadata.h"
    extern const course_texture double_deck_textures[];
}

class DoubleDeck : public Course {
public:
    virtual ~DoubleDeck() = default;  // Virtual destructor for proper cleanup in derived classes

    // Constructor
    explicit DoubleDeck();

//    virtual void Load(const char* courseVtx, 
//                  course_texture* textures, const char* displaylists, size_t dlSize);
    virtual void Load() override;
    virtual void LoadTextures() override;
    virtual void BeginPlay() override;
    virtual void InitCourseObjects() override;
    virtual void SomeSounds() override;
    virtual void WhatDoesThisDo(Player* player, int8_t playerId) override;
    virtual void WhatDoesThisDoAI(Player* player, int8_t playerId) override;
    virtual void Render(struct UnkStruct_800DC5EC*) override;
    virtual void RenderCredits() override;    
    virtual void Waypoints(Player* player, int8_t playerId) override;
    virtual void Destroy() override;
};
