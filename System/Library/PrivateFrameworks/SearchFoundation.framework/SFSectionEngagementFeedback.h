/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFResultSection;

@interface SFSectionEngagementFeedback : SFFeedback <NSCopying> {

	SFResultSection* _section;
	unsigned long long _triggerEvent;

}

@property (nonatomic,copy) SFResultSection * section;                      //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) unsigned long long triggerEvent;              //@synthesize triggerEvent=_triggerEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithSection:(id)arg1 triggerEvent:(unsigned long long)arg2 ;
-(void)setTriggerEvent:(unsigned long long)arg1 ;
-(unsigned long long)triggerEvent;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SFResultSection *)section;
-(void)setSection:(SFResultSection *)arg1 ;
@end

