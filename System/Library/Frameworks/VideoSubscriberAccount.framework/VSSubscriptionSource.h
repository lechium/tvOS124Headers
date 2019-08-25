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

@class NSString;

@interface VSSubscriptionSource : NSObject <NSCopying, NSSecureCoding> {

	long long _kind;
	NSString* _identifier;

}

@property (assign,nonatomic) long long kind;                   //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)subscriptionSourceForAppWithBundleID:(id)arg1 ;
+(id)subscriptionSourceForWebsiteWithDomainName:(id)arg1 ;
+(id)subscriptionSourceForWebsiteWithURL:(id)arg1 ;
+(id)currentSource;
+(BOOL)supportsSecureCoding;
-(void)setKind:(long long)arg1 ;
-(id)init;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)kind;
@end
