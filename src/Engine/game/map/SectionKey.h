/*
 * ====================== SectionKey.h =======================
 *                          -- tpr --
 *                                        创建 -- 2019.01.07
 *                                        修改 -- 2019.01.07
 * ----------------------------------------------------------
 *    mapSection "id":  (int)w + (int)h
 * ----------------------------
 */
#ifndef _TPR_SECTION_KEY_H_
#define _TPR_SECTION_KEY_H_

//------------------- Libs --------------------//
#include "tprDataType.h" 

//-------------------- Engine --------------------//
#include "PixVec.h" 


//-- based on mapEntPos 
class SectionKey{
public:
    SectionKey() = default;

    inline void init_by_key( const u64 _key ){
        key = _key;
        //-------
        int *ptr = (int*)&key;
        mpos.x = *ptr;
        ptr++;
        mpos.y = *ptr;
    }

    inline void init_by_mpos( const PixVec2 &_mpos ){
        mpos = _mpos;
        //--------
        int *ptr = (int*)&key;
        *ptr = mpos.x;
        ptr++;
        *ptr = mpos.y;
    }

    inline const u64 get_key() const {
        return key;
    }
    inline const PixVec2& get_pos() const {
        return mpos;
    }

private:
    u64        key   {0};
    PixVec2    mpos  {0,0};
};


#endif 
