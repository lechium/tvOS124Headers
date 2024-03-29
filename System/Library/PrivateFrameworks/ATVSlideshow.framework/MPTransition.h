/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface MPTransition : NSObject <NSCoding, NSCopying> {

	NSMutableDictionary* _attributes;
	id _parent;
	NSString* _transitionID;
	NSString* _presetID;
	double _duration;
	BOOL _isRandom;
	long long _randomSeed;

}

@property (nonatomic,copy) NSString * transitionID;              //@synthesize transitionID=_transitionID - In the implementation block
@property (nonatomic,copy) NSString * presetID;                  //@synthesize presetID=_presetID - In the implementation block
@property (assign,nonatomic) double duration;                    //@synthesize duration=_duration - In the implementation block
+(id)transitionWithTransitionID:(id)arg1 ;
-(void)dump;
-(id)parentContainer;
-(long long)randomSeed;
-(void)setRandomSeed:(long long)arg1 ;
-(void)setParent:(id)arg1 ;
-(id)parentDocument;
-(void)setTransitionAttributes:(id)arg1 ;
-(void)setTransitionID:(NSString *)arg1 ;
-(id)transitionAttributeForKey:(id)arg1 ;
-(id)transitionAttributes;
-(NSString *)transitionID;
-(id)_transitionAttributes;
-(void)copyVars:(id)arg1 ;
-(id)convertMPAttributeToMCAttribute:(id)arg1 withKey:(id)arg2 ;
-(id)fullDebugLog;
-(NSString *)presetID;
-(void)setPresetID:(NSString *)arg1 ;
-(id)transitionPresetID;
-(void)setTransitionAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)applyFormattedAttributes;
-(id)formattedAttributes;
-(id)initWithTransitionID:(id)arg1 ;
-(void)copyAttribures:(id)arg1 ;
-(void)setIsRandom:(BOOL)arg1 ;
-(double)findMaxDuration;
-(BOOL)isRandom;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(id)parent;
@end

