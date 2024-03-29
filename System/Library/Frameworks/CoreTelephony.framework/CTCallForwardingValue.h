/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface CTCallForwardingValue : NSObject <NSCopying, NSSecureCoding> {

	BOOL _enabled;
	int _reason;
	int _clss;
	NSString* _saveNumber;
	NSNumber* _noReplyTime;

}

@property (assign,nonatomic) int reason;                          //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) int clss;                            //@synthesize clss=_clss - In the implementation block
@property (assign,nonatomic) BOOL enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * saveNumber;               //@synthesize saveNumber=_saveNumber - In the implementation block
@property (nonatomic,retain) NSNumber * noReplyTime;              //@synthesize noReplyTime=_noReplyTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)clss;
-(NSString *)saveNumber;
-(NSNumber *)noReplyTime;
-(void)setClss:(int)arg1 ;
-(void)setSaveNumber:(NSString *)arg1 ;
-(void)setNoReplyTime:(NSNumber *)arg1 ;
-(void)setReason:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)reason;
-(BOOL)enabled;
@end

