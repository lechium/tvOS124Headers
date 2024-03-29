/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMUniquedManagedObject.h>
#import <libobjc.A.dylib/RMReconcilableObject.h>

@class NSString, NSData, NSNumber, NSUUID, RMCloudOrganization, NSSet;

@interface RMCloudUser : RMUniquedManagedObject <RMReconcilableObject>

@property (assign,nonatomic) BOOL isMe; 
@property (assign,nonatomic) BOOL isOrganizer; 
@property (assign,nonatomic) short role; 
@property (nonatomic,copy) NSString * ckRecordID; 
@property (nonatomic,retain) NSData * ckRecordSystemFields; 
@property (nonatomic,copy) NSNumber * dsid; 
@property (nonatomic,copy) NSString * memberType; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSUUID * sortKey; 
@property (nonatomic,copy) NSString * uri; 
@property (nonatomic,retain) RMCloudOrganization * organization; 
@property (nonatomic,retain) NSSet * userDevicePairs; 
+(id)fetchRequest;
+(BOOL)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id*)arg3 ;
-(id)computeUniqueIdentifier;
-(void)didChangeValueForKey:(id)arg1 ;
@end

