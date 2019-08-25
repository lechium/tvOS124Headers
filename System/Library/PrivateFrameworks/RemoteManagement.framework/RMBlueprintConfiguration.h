/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/RMUniquelySerializableManagedObject.h>
#import <libobjc.A.dylib/RMSyncableSubObject.h>

@class NSString, NSData, RMBlueprint;

@interface RMBlueprintConfiguration : NSManagedObject <RMUniquelySerializableManagedObject, RMSyncableSubObject>

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,retain) NSData * payloadPlist; 
@property (nonatomic,retain) RMBlueprint * blueprint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 ;
-(void)delete;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)syncableRootObject;
-(id)dictionaryRepresentation;
@end

