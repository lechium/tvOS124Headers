/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCAction, NSInvocation, MRLayer, NSMutableDictionary;

@interface MRAction : NSObject {

	MCAction* mMCAction;
	NSInvocation* mInvocation;
	id mSender;
	MRLayer* mResolvedTarget;
	NSMutableDictionary* mStates;
	double mTime;
	id mSpecificObject;

}

@property (readonly) MCAction * action; 
@property (nonatomic,retain) id sender; 
@property (retain) MRLayer * resolvedTarget; 
@property (retain) NSMutableDictionary * states; 
@property (assign,nonatomic) double time; 
@property (retain) id specificObject; 
-(void)setStates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)states;
-(double)time;
-(void)setTime:(double)arg1 ;
-(id)initWithAction:(id)arg1 inRenderer:(id)arg2 ;
-(id)specificObject;
-(MRLayer *)resolvedTarget;
-(id)initWithSelector:(SEL)arg1 sender:(id)arg2 andTargetPath:(id)arg3 inRenderer:(id)arg4 ;
-(void)setSpecificObject:(id)arg1 ;
-(id)initWithAction:(id)arg1 andTarget:(id)arg2 ;
-(void)setResolvedTarget:(MRLayer *)arg1 ;
-(void)_resolveTargetPath:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(double)invoke;
-(MCAction *)action;
-(id)sender;
-(void)setSender:(id)arg1 ;
@end

