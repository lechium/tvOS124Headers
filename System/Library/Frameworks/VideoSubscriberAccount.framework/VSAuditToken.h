/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface VSAuditToken : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSData* _tokenBytes;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSData * tokenBytes;                      //@synthesize tokenBytes=_tokenBytes - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)tokenBytes;
-(void)setTokenBytes:(NSData *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

