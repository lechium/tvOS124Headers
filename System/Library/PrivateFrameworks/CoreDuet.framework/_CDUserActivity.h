/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSDictionary;

@interface _CDUserActivity : NSObject <NSSecureCoding> {

	NSString* _bundleId;
	NSString* _type;
	NSString* _title;
	NSDate* _date;
	NSDictionary* _payload;

}

@property (copy) NSString * bundleId;                 //@synthesize bundleId=_bundleId - In the implementation block
@property (copy) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (copy) NSDate * date;                       //@synthesize date=_date - In the implementation block
@property (copy) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
+(id)createFromUserActivity:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(NSDictionary *)payload;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
@end

