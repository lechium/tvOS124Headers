/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIAnimationFenceCoordinating.h>

@protocol _UIContextBinderDelegate, _UICanvasLifecycleStateMonitoring, _UIContextBinding;
@class NSPointerArray, NSMutableOrderedSet, NSMutableArray, NSArray, NSString;

@interface _UIContextBinder : NSObject <_UIAnimationFenceCoordinating> {

	id<_UIContextBinderDelegate> _delegate;
	NSPointerArray* _enrolledBindables;
	NSPointerArray* _attachedBindables;
	NSMutableOrderedSet* _contexts;
	id<_UICanvasLifecycleStateMonitoring> _lifecycleMonitor;
	BOOL __registeredPreCommitHandler;
	NSMutableArray* __preCommitHandlers;
	/*^block*/id __realPreCommitHandler;
	/*^block*/id __realPostCommitHandler;
	id<_UIContextBinding> _substrate;
	long long _contextManagementPolicy;

}

@property (assign,nonatomic,__weak) id<_UIContextBinderDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<_UIContextBinding> substrate;                                            //@synthesize substrate=_substrate - In the implementation block
@property (nonatomic,__weak,readonly) id<_UICanvasLifecycleStateMonitoring> lifecycleMonitor;              //@synthesize lifecycleMonitor=_lifecycleMonitor - In the implementation block
@property (assign,nonatomic) long long contextManagementPolicy;                                            //@synthesize contextManagementPolicy=_contextManagementPolicy - In the implementation block
@property (nonatomic,readonly) NSArray * enrolledBindables; 
@property (nonatomic,readonly) NSArray * attachedBindables; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createContextForBindable:(id)arg1 withSubstrate:(id)arg2 ;
-(void)setDelegate:(id<_UIContextBinderDelegate>)arg1 ;
-(id<_UIContextBinderDelegate>)delegate;
-(void)expellBindable:(id)arg1 ;
-(void)detachBindable:(id)arg1 ;
-(void)purgeContextsWithPurgeAction:(/*^block*/id)arg1 ;
-(void)createContextsWithTest:(/*^block*/id)arg1 creationAction:(/*^block*/id)arg2 ;
-(long long)contextManagementPolicy;
-(NSArray *)enrolledBindables;
-(void)updateBindableOrderWithTest:(/*^block*/id)arg1 ;
-(void)updateBindableOrderWithTest:(/*^block*/id)arg1 force:(BOOL)arg2 ;
-(NSArray *)attachedBindables;
-(BOOL)bindableEnrolled:(id)arg1 ;
-(id<_UIContextBinding>)substrate;
-(void)_synchronizeDrawingWithPreCommitHandler:(/*^block*/id)arg1 ;
-(void)_synchronizeDrawingWithFence:(id)arg1 preCommitHandler:(/*^block*/id)arg2 ;
-(id)_synchronizedDrawingFence;
-(void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned)arg1 withPreCommitHandler:(/*^block*/id)arg2 ;
-(void)_synchronizeDrawing;
-(void)_synchronizeDrawingWithFence:(id)arg1 ;
-(id)initWithSubstrate:(id)arg1 stateMonitor:(id)arg2 ;
-(void)enrollBindable:(id)arg1 ;
-(void)attachBindable:(id)arg1 ;
-(void)updateBindable:(id)arg1 ;
-(void)setContextManagementPolicy:(long long)arg1 ;
-(id)_attachedBindablePointersAsCopy:(BOOL)arg1 ;
-(id)_enrolledBindablePointersAsCopy:(BOOL)arg1 ;
-(BOOL)bindableIsTopmostAttached:(id)arg1 ;
-(void)recreateContextForBindable:(id)arg1 ;
-(BOOL)permitContextCreationForBindable:(id)arg1 ;
-(id)_contextForBindable:(id)arg1 ;
-(unsigned)_synchronizeDrawingAcrossProcesses;
-(void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned)arg1 ;
-(id<_UICanvasLifecycleStateMonitoring>)lifecycleMonitor;
@end

