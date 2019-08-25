/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMDBackingStoreModelBackedObjectProtocol.h>
#import <libobjc.A.dylib/HMDRemoteAddressable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, IDSURI, CNContact, NSString;

@interface HMDAccountHandle : HMFObject <HMFLogging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, HMDRemoteAddressable, NSCopying, NSSecureCoding> {

	BOOL _local;
	BOOL _locallyTracked;
	NSUUID* _modelIdentifier;
	NSUUID* _modelParentIdentifier;
	NSUUID* _identifier;
	IDSURI* _URI;

}

@property (copy,readonly) IDSURI * URI;                                   //@synthesize URI=_URI - In the implementation block
@property (nonatomic,retain) NSUUID * modelParentIdentifier;              //@synthesize modelParentIdentifier=_modelParentIdentifier - In the implementation block
@property (getter=isLocallyTracked) BOOL locallyTracked;                  //@synthesize locallyTracked=_locallyTracked - In the implementation block
@property (readonly) long long type; 
@property (copy,readonly) NSUUID * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (getter=isLocal,readonly) BOOL local;                           //@synthesize local=_local - In the implementation block
@property (copy,readonly) CNContact * contact; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * modelIdentifier;                  //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
+(id)logCategory;
+(id)accountHandleForDestination:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(CNContact *)contact;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(id)logIdentifier;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(IDSURI *)URI;
-(id)initWithURI:(id)arg1 local:(BOOL)arg2 ;
-(id)attributeDescriptions;
-(id)remoteDestinationString;
-(BOOL)isBackingStorageEqual:(id)arg1 ;
-(id)modelBackedObjects;
-(NSUUID *)modelIdentifier;
-(NSUUID *)modelParentIdentifier;
-(void)setModelParentIdentifier:(NSUUID *)arg1 ;
-(id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(BOOL)isLocallyTracked;
-(id)initWithObjectModel:(id)arg1 ;
-(void)setLocallyTracked:(BOOL)arg1 ;
-(id)initWithURI:(id)arg1 ;
-(id)init;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(BOOL)isLocal;
-(id)shortDescription;
@end
