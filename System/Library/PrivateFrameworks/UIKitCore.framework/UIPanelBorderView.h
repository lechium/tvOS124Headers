/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIPanelBorderReplicatingView, NSString;

@interface UIPanelBorderView : UIView {

	BOOL _observesTime;
	long long _statusBarAvoidance;
	UIPanelBorderReplicatingView* _replicatingView;
	NSString* _backdropGroupName;

}

@property (nonatomic,retain) UIPanelBorderReplicatingView * replicatingView;              //@synthesize replicatingView=_replicatingView - In the implementation block
@property (assign,nonatomic) BOOL observesTime;                                           //@synthesize observesTime=_observesTime - In the implementation block
@property (nonatomic,retain) NSString * backdropGroupName;                                //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) long long statusBarAvoidance;                                //@synthesize statusBarAvoidance=_statusBarAvoidance - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setCenter:(CGPoint)arg1 ;
-(void)didMoveToWindow;
-(BOOL)observesTime;
-(void)_updateObservationOfTime;
-(long long)statusBarAvoidance;
-(void)setObservesTime:(BOOL)arg1 ;
-(void)_statusBarTimeDidChange:(id)arg1 ;
-(UIPanelBorderReplicatingView *)replicatingView;
-(void)setReplicatingView:(UIPanelBorderReplicatingView *)arg1 ;
-(id)_cachedBackdropGroupName;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)setStatusBarAvoidance:(long long)arg1 ;
@end

