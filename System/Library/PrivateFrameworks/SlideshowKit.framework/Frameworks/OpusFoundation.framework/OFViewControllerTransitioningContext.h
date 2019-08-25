/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OFViewControllerTransitioningContext <NSObject>
@property (assign,nonatomic) double progressVelocity; 
@required
-(void)finishInteractiveTransitionWithVelocity:(double)arg1;
-(void)cancelInteractiveTransitionWithVelocity:(double)arg1;
-(void)setProgressVelocity:(double)arg1;
-(void)updateNonInteractiveTransitionWithProgress:(double)arg1;
-(void)makeTransitionInteractiveWithInteractor:(id)arg1 andProgress:(double)arg2;
-(BOOL)isRubberBanding;
-(double)progressVelocity;
-(BOOL)wasCancelled;
-(BOOL)doEaseIn;
-(BOOL)doEaseOut;
-(id)containerView;
-(BOOL)isInteractive;
-(void)completeTransition:(BOOL)arg1;
-(void)updateInteractiveTransition:(double)arg1;
-(void)startInteractiveTransition;
-(id)fromViewController;
-(id)toViewController;
-(BOOL)initiallyInteractive;
-(double)progress;
-(BOOL)isCompleting;

@end
