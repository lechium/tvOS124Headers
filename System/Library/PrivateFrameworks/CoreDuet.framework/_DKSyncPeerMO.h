/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSUUID;

@interface _DKSyncPeerMO : NSManagedObject

@property (nonatomic,copy) NSString * cloudID; 
@property (nonatomic,copy) NSString * deviceID; 
@property (nonatomic,copy) NSDate * lastSeenDate; 
@property (nonatomic,copy) NSString * rapportID; 
@property (nonatomic,copy) NSUUID * uuid; 
+(id)fetchRequest;
@end

