/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKSubscription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPredicate, CKRecordZoneID;

@interface CKQuerySubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (nonatomic,copy,readonly) NSString * recordType; 
@property (nonatomic,copy,readonly) NSPredicate * predicate; 
@property (nonatomic,copy) CKRecordZoneID * zoneID; 
@property (nonatomic,readonly) unsigned long long querySubscriptionOptions; 
-(unsigned long long)querySubscriptionOptions;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
