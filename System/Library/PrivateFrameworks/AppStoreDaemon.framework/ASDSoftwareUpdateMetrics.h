/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface ASDSoftwareUpdateMetrics : NSObject <NSCopying, NSSecureCoding> {

	BOOL _usingModernUpdatesCheck;
	NSDate* _lastUpdateCheck;
	NSDate* _nextUpdateCheck;

}

@property (nonatomic,copy) NSDate * lastUpdateCheck;                    //@synthesize lastUpdateCheck=_lastUpdateCheck - In the implementation block
@property (nonatomic,copy) NSDate * nextUpdateCheck;                    //@synthesize nextUpdateCheck=_nextUpdateCheck - In the implementation block
@property (assign,nonatomic) BOOL usingModernUpdatesCheck;              //@synthesize usingModernUpdatesCheck=_usingModernUpdatesCheck - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)lastUpdateCheck;
-(void)setLastUpdateCheck:(NSDate *)arg1 ;
-(NSDate *)nextUpdateCheck;
-(void)setNextUpdateCheck:(NSDate *)arg1 ;
-(BOOL)usingModernUpdatesCheck;
-(void)setUsingModernUpdatesCheck:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

