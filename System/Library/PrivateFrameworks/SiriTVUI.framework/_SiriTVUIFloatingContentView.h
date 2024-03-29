/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/_UIFloatingContentView.h>

@class UIView, UIImage;

@interface _SiriTVUIFloatingContentView : _UIFloatingContentView {

	UIView* _unfocusedShadowView;
	UIImage* _unfocusedShadowImage;
	UIView* _focusedShadowView;
	UIImage* _focusedShadowImage;

}
-(CGRect)_shadowFrameForShadowImage:(id)arg1 ;
-(void)updateShadowOpacityForFocus:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

