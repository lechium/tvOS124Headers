/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/GKRandom.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GKRandomSource : NSObject <GKRandom, NSSecureCoding, NSCopying>
+(id)sharedRandom;
+(id)systemRandom;
+(BOOL)supportsSecureCoding;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(long long)nextInt;
-(float)nextUniform;
-(BOOL)nextBool;
-(id)arrayByShufflingObjectsInArray:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
