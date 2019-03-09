/*
 * ====================== MapTexture.cpp =======================
 *                          -- tpr --
 *                                        CREATE -- 2019.01.06
 *                                        MODIFY -- 
 * ----------------------------------------------------------
 *    texture for map sys
 * ----------------------------
 */
#include "MapTexture.h" 

//------------------- C --------------------//
#include <cassert>

//------------------- Engine --------------------//
#include "RGBA.h"
#include "create_texNames.h"


namespace{//----------- namespace ---------------//

    IntVec2  pixWH { PIXES_PER_CHUNK, PIXES_PER_CHUNK };

}//-------------- namespace : end ---------------//


/* ===========================================================
 *                        init
 * -----------------------------------------------------------
 * -- before calling init(). 
 * -- Please bind MapTexture::mapBuilder FIRST
 */
void MapTexture::creat_texName(){

    //---------------------------------------//
    //            mapTex build
    //---------------------------------------//
    //texBuf.resize( pixSize.x * pixSize.y );
    //assert( MapTexture::mapBuilder != nullptr );
    
    
    //---------------------------------------//
    //        gl --> texName
    //---------------------------------------//
    texName = create_a_texName( pixWH, (GLvoid*)&(texBuf.at(0)) );

    //-- 可以选择性释放 texBuf 资源 ---
    // 未定...
}



