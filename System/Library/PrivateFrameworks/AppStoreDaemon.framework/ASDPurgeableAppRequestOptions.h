/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSString;

@interface ASDPurgeableAppRequestOptions : ASDRequestOptions {

	BOOL _performAvailablityCheck;
	long long _urgency;
	NSString* _volume;

}

@property (assign,nonatomic) BOOL performAvailablityCheck;              //@synthesize performAvailablityCheck=_performAvailablityCheck - In the implementation block
@property (assign,nonatomic) long long urgency;                         //@synthesize urgency=_urgency - In the implementation block
@property (nonatomic,copy) NSString * volume;                           //@synthesize volume=_volume - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)urgency;
-(void)setUrgency:(long long)arg1 ;
-(void)setVolume:(NSString *)arg1 ;
-(BOOL)performAvailablityCheck;
-(id)initWithVolume:(id)arg1 urgency:(long long)arg2 ;
-(void)setPerformAvailablityCheck:(BOOL)arg1 ;
-(NSString *)volume;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

