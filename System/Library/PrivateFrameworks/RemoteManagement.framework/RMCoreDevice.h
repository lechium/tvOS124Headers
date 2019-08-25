/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/RMSyncableSubObject.h>

@class NSString, RMUserDeviceState, NSSet;

@interface RMCoreDevice : NSManagedObject <RMSyncableSubObject>

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) RMUserDeviceState * localUserDeviceState; 
@property (nonatomic,retain) NSSet * userDeviceStates; 
@property (nonatomic,retain) NSSet * usages; 
@property (nonatomic,retain) NSSet * userDeviceAddresses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchOrCreateDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchOrCreateLocalDeviceInContext:(id)arg1 error:(id*)arg2 ;
-(id)syncableRootObject;
@end

