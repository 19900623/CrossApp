//
//  CASegmentedControl.h
//  cocos2dx
//
//  Created by juguanhui on 14-6-3.
//  Copyright (c) 2014年 cocos2d-x. All rights reserved.
//

#ifndef cocos2dx_CASegmentedControl_h
#define cocos2dx_CASegmentedControl_h

#include "CAControl.h"
#include <vector>

NS_CC_BEGIN

class CAButton;
class CAImage;

class CC_DLL CASegmentedControl : public CAControl
{
public:
    CASegmentedControl();
    virtual ~CASegmentedControl();
    
    virtual void onExitTransitionDidStart();
    
    virtual void onEnterTransitionDidFinish();
    
    static CASegmentedControl* create(const CCRect& rect,
                                      std::vector<CAImage *> items,
                                      int selectedIndex = 0);
    
public:
    bool init(const CCRect& rect,
              std::vector<CAImage *> items,
              int selectedIndex);
    
    virtual void insertSegmentWithTitle(const char* title, int index);
    virtual void insertSegmentWithImage(CAImage *image, int index);
    virtual void removeSegmentAtIndex(int index);
    virtual void removeAllSegments();
    
    virtual void setTitleAtIndex(const char* title, int index);
    virtual void setImageAtIndex(CAImage *image, int index);
    
protected:
    std::vector<CAButton *> m_segments;
    int m_selectedIndex;
};

NS_CC_END


#endif
