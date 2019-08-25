/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestResponse.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface ASDPurgeableAppResponse : ASDRequestResponse <NSCopying, NSSecureCoding> {

	long long _purgeableSize;
	NSArray* _purgeableApps;

}

@property (nonatomic,readonly) long long purgeableSize;              //@synthesize purgeableSize=_purgeableSize - In the implementation block
@property (nonatomic,readonly) NSArray * purgeableApps;              //@synthesize purgeableApps=_purgeableApps - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)purgeableSize;
-(id)initWithPurgeableSize:(long long)arg1 purgeableApps:(id)arg2 ;
-(NSArray *)purgeableApps;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

