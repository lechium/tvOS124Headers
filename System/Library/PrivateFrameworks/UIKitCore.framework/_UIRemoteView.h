/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILayerHostView.h>
#import <UIKit/UIStatusBarTinting.h>

@class UIColor, _UIHostedWindowHostingHandle, NSString;

@interface _UIRemoteView : _UILayerHostView <UIStatusBarTinting> {

	BOOL _actsAsTintView;
	UIColor* _statusBarTintColor;
	_UIHostedWindowHostingHandle* _hostedWindowHostingHandle;
	/*^block*/id _tintColorDidChangeHandler;

}

@property (assign,setter=_setActsAsTintView:,nonatomic) BOOL _actsAsTintView;                           //@synthesize actsAsTintView=_actsAsTintView - In the implementation block
@property (setter=_setStatusBarTintColor:,nonatomic,retain) UIColor * _statusBarTintColor;              //@synthesize statusBarTintColor=_statusBarTintColor - In the implementation block
@property (nonatomic,copy) id tintColorDidChangeHandler;                                                //@synthesize tintColorDidChangeHandler=_tintColorDidChangeHandler - In the implementation block
@property (assign,setter=_setInheritsSecurity:,nonatomic) BOOL _inheritsSecurity; 
@property (nonatomic,retain) _UIHostedWindowHostingHandle * hostedWindowHostingHandle;                  //@synthesize hostedWindowHostingHandle=_hostedWindowHostingHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
+(id)viewWithHostedWindowHostingHandle:(id)arg1 ;
+(BOOL)_requiresWindowTouches;
+(id)viewWithRemoteContextID:(unsigned)arg1 ;
-(void)tintColorDidChange;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(UIColor *)_statusBarTintColor;
-(void)_setStatusBarTintColor:(id)arg1 ;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(void)setHostedWindowHostingHandle:(_UIHostedWindowHostingHandle *)arg1 ;
-(void)applyTransformUndoingRemoteRootLayerTransform:(CGAffineTransform)arg1 frame:(CGRect)arg2 ;
-(id)tintColorDidChangeHandler;
-(void)_setStatusBarTintColor:(id)arg1 duration:(double)arg2 ;
-(void)_setInheritsSecurity:(BOOL)arg1 ;
-(BOOL)_inheritsSecurity;
-(void)_setActsAsTintView:(BOOL)arg1 ;
-(BOOL)_actsAsTintView;
-(_UIHostedWindowHostingHandle *)hostedWindowHostingHandle;
-(void)setTintColorDidChangeHandler:(id)arg1 ;
@end

