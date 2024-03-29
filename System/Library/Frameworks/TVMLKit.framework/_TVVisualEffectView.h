/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIVisualEffectView.h>

@class UIView;

@interface _TVVisualEffectView : UIVisualEffectView {

	UIView* _hostView;

}

@property (assign,nonatomic,__weak) UIView * hostView;              //@synthesize hostView=_hostView - In the implementation block
+(id)hostViewDisablements;
+(void)addHostView:(id)arg1 ;
+(void)removeHostView:(id)arg1 ;
+(void)enableForHostView:(id)arg1 ;
+(void)disableForHostView:(id)arg1 ;
-(void)setHostView:(UIView *)arg1 ;
-(void)_setDisabled:(BOOL)arg1 ;
-(void)_disablement:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(UIView *)hostView;
@end

