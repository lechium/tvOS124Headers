/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PVEffect, NSMutableDictionary, NSString;

@interface ClipBackground : NSObject <NSCopying> {

	PVEffect* _effect;
	int _type;
	NSMutableDictionary* _backgroundEffectSettings;

}

@property (assign,nonatomic) int type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * backgroundEffectSettings;              //@synthesize backgroundEffectSettings=_backgroundEffectSettings - In the implementation block
@property (nonatomic,readonly) NSString * effectID; 
@property (nonatomic,readonly) PVEffect * backgroundEffect; 
-(NSString *)effectID;
-(void)setBackgroundEffectSettings:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)backgroundEffectSettings;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(PVEffect *)backgroundEffect;
@end

