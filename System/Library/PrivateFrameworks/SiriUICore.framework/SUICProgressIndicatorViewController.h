/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SUICProgressStateMachineObserving.h>

@protocol SUICProgressIndicatorViewControllerDataSource;
@class SUICProgressIndicatorView, NSString;

@interface SUICProgressIndicatorViewController : UIViewController <SUICProgressStateMachineObserving> {

	SUICProgressIndicatorView* _progressIndicatorView;
	id<SUICProgressIndicatorViewControllerDataSource> _dataSource;

}

@property (setter=_setProgressIndicatorView:,getter=_progressIndicatorView,nonatomic,retain) SUICProgressIndicatorView * progressIndicatorView;              //@synthesize progressIndicatorView=_progressIndicatorView - In the implementation block
@property (assign,nonatomic,__weak) id<SUICProgressIndicatorViewControllerDataSource> dataSource;                                                            //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_stateMachine;
-(BOOL)_shouldAcceptEventsFromStateMachine:(id)arg1 ;
-(void)progressStateMachine:(id)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4 ;
-(void)progressStateMachine:(id)arg1 ignoredEvent:(unsigned long long)arg2 ;
-(id)_progressIndicatorView;
-(void)_setProgressIndicatorView:(id)arg1 ;
-(void)loadView;
-(id<SUICProgressIndicatorViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<SUICProgressIndicatorViewControllerDataSource>)arg1 ;
@end

