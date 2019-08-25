/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/RPVideoOverlayButton.h>

@interface RPFlatVideoOverlayButton : UIButton <RPVideoOverlayButton> {

	long long _style;
	id _target;
	SEL _action;

}

@property (assign,nonatomic,__weak) id target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
-(id)_normalButtonImage;
-(id)_highlightedButtonImage;
-(id)_createOverlayImageWithBackgroundWhite:(double)arg1 backgroundAlpha:(double)arg2 glyphAlpha:(double)arg3 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(long long)style;
-(SEL)action;
-(id)initWithStyle:(long long)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)_handleTap:(id)arg1 ;
@end

