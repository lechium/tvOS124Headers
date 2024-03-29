/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ADFlags : NSObject <NSCopying> {

	unsigned long long _flags;

}

@property (assign) unsigned long long flags;              //@synthesize flags=_flags - In the implementation block
+(id)initWithFlags:(unsigned long long)arg1 ;
-(unsigned long long)flags;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)set:(unsigned long long)arg1 ;
-(unsigned long long)anySet:(unsigned long long)arg1 ;
-(BOOL)allSet:(unsigned long long)arg1 ;
-(void)unset:(unsigned long long)arg1 ;
-(BOOL)isSet:(unsigned long long)arg1 ;
-(BOOL)noneSet;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
@end

