#include "renderer.h"

int main()
{
    renderer r;
    r.set_render_fps_limit(60);
    r.set_physics_fps_limit(30);
    r.run();
}
