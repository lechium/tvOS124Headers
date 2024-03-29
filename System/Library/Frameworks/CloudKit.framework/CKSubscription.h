/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKNotificationInfo, CKRecordZoneID, NSPredicate;

@interface CKSubscription : NSObject <NSSecureCoding, NSCopying> {

	NSString* _subscriptionID;
	long long _subscriptionType;
	CKNotificationInfo* _notificationInfo;
	CKRecordZoneID* _zoneID;
	NSString* _recordType;
	NSPredicate* _predicate;
	unsigned long long _subscriptionOptions;

}

@property (nonatomic,copy) CKRecordZoneID * zoneID;                               //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,copy) NSString * recordType;                                 //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy) NSPredicate * predicate;                               //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSString * subscriptionID;                             //@synthesize subscriptionID=_subscriptionID - In the implementation block
@property (assign,nonatomic) long long subscriptionType;                          //@synthesize subscriptionType=_subscriptionType - In the implementation block
@property (assign,nonatomic) unsigned long long subscriptionOptions;              //@synthesize subscriptionOptions=_subscriptionOptions - In the implementation block
@property (nonatomic,copy) CKNotificationInfo * notificationInfo;                 //@synthesize notificationInfo=_notificationInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSubscriptionID:(NSString *)arg1 ;
-(id)_initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4 ;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3 ;
-(id)_initWithZoneID:(id)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3 ;
-(id)_initWithSubscriptionType:(long long)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3 ;
-(unsigned long long)subscriptionOptions;
-(void)_validateSubscriptionOptions:(unsigned long long)arg1 ;
-(id)initWithZoneID:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setSubscriptionOptions:(unsigned long long)arg1 ;
-(void)setSubscriptionType:(long long)arg1 ;
-(void)setRecordType:(NSString *)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(id)CKPropertiesDescription;
-(id)_initBare;
-(long long)subscriptionType;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4 ;
-(unsigned long long)_subscriptionOptions;
-(CKRecordZoneID *)zoneID;
-(NSString *)subscriptionID;
-(NSString *)recordType;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(CKNotificationInfo *)notificationInfo;
-(void)setNotificationInfo:(CKNotificationInfo *)arg1 ;
@end

