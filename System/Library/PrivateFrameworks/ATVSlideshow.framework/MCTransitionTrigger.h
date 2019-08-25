/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCAction.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface MCTransitionTrigger : MCAction {

	NSMutableDictionary* _transitionAttributes;
	NSString* _transitionID;
	double _transitionDuration;
	NSString* _transitionDestinationPlugID;

}

@property (copy) NSString * transitionID;                                    //@synthesize transitionID=_transitionID - In the implementation block
@property (assign,nonatomic) double transitionDuration;                      //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (nonatomic,copy) NSDictionary * transitionAttributes;              //@synthesize transitionAttributes=_transitionAttributes - In the implementation block
@property (copy) NSString * transitionDestinationPlugID;                     //@synthesize transitionDestinationPlugID=_transitionDestinationPlugID - In the implementation block
+(id)transitionForTargetPlugObjectID:(id)arg1 withTransitionID:(id)arg2 ;
-(void)setTransitionAttributes:(NSDictionary *)arg1 ;
-(void)setTransitionID:(NSString *)arg1 ;
-(void)setTransitionDestinationPlugID:(NSString *)arg1 ;
-(NSDictionary *)transitionAttributes;
-(NSString *)transitionID;
-(void)demolish;
-(NSString *)transitionDestinationPlugID;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(id)description;
-(double)transitionDuration;
-(void)setTransitionDuration:(double)arg1 ;
@end

