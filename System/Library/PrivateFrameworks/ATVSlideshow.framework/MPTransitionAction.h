/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MPAction.h>

@protocol MPActionableSupport;
@class NSString, NSMutableDictionary, NSObject, NSDictionary;

@interface MPTransitionAction : MPAction {

	NSString* _transitionID;
	double _transitionDuration;
	NSMutableDictionary* _transitionAttributes;
	NSObject*<MPActionableSupport> _transitionDestination;

}

@property (nonatomic,copy) NSDictionary * transitionAttributes;                                 //@synthesize transitionAttributes=_transitionAttributes - In the implementation block
@property (nonatomic,copy) NSString * transitionID;                                             //@synthesize transitionID=_transitionID - In the implementation block
@property (assign,nonatomic) double transitionDuration;                                         //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (nonatomic,retain) NSObject*<MPActionableSupport> transitionDestination;              //@synthesize transitionDestination=_transitionDestination - In the implementation block
+(id)transitionAction;
-(void)configureTarget;
-(void)setTransitionAttributes:(NSDictionary *)arg1 ;
-(void)setTransitionID:(NSString *)arg1 ;
-(void)setTransitionDestination:(NSObject*<MPActionableSupport>)arg1 ;
-(id)transitionAttributeForKey:(id)arg1 ;
-(NSDictionary *)transitionAttributes;
-(NSString *)transitionID;
-(NSObject*<MPActionableSupport>)transitionDestination;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(id)arg1 ;
-(double)transitionDuration;
-(void)setTransitionDuration:(double)arg1 ;
@end

