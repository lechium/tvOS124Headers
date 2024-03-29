/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHomeSharingServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface TVHSRentalItem : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSNumber* _rentalKeyID;
	NSNumber* _userID;
	NSNumber* _DAAPPersistentItemID;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSNumber * rentalKeyID;                       //@synthesize rentalKeyID=_rentalKeyID - In the implementation block
@property (nonatomic,copy) NSNumber * userID;                            //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSNumber * DAAPPersistentItemID;              //@synthesize DAAPPersistentItemID=_DAAPPersistentItemID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)userID;
-(void)setUserID:(NSNumber *)arg1 ;
-(void)setRentalKeyID:(NSNumber *)arg1 ;
-(void)setDAAPPersistentItemID:(NSNumber *)arg1 ;
-(NSNumber *)rentalKeyID;
-(NSNumber *)DAAPPersistentItemID;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

