/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CalMeCard : NSObject <NSSecureCoding> {

	NSString* _displayName;
	NSArray* _emailAddresses;
	NSString* _uniqueID;
	NSString* _likenessString;
	long long _version;

}

@property (assign) long long version;                              //@synthesize version=_version - In the implementation block
@property (retain) NSString * likenessString;                      //@synthesize likenessString=_likenessString - In the implementation block
@property (retain,readonly) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
@property (retain,readonly) NSArray * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (retain,readonly) NSString * uniqueID;                   //@synthesize uniqueID=_uniqueID - In the implementation block
+(id)cardFromPath:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSString *)uniqueID;
-(NSString *)likenessString;
-(BOOL)isEqualToMeCard:(id)arg1 ;
-(id)initWithDisplayName:(id)arg1 emailAddresses:(id)arg2 uniqueID:(id)arg3 likenessString:(id)arg4 ;
-(void)setLikenessString:(NSString *)arg1 ;
-(id)preferredEmailAddress;
-(BOOL)writeToPath:(id)arg1 ;
-(NSArray *)emailAddresses;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(NSString *)displayName;
@end

