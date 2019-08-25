/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMSoftwareUpdateDelegate;
@class HMFUnfairLock, NSUUID, HMSoftwareUpdateDocumentationMetadata, HMSoftwareUpdateDocumentation, HMFSoftwareVersion, _HMContext, HMAccessory, NSString;

@interface HMSoftwareUpdate : NSObject <HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {

	HMFUnfairLock* _lock;
	NSUUID* _identifier;
	NSUUID* _uniqueIdentifier;
	long long _state;
	HMSoftwareUpdateDocumentationMetadata* _documentationMetadata;
	HMSoftwareUpdateDocumentation* _documentation;
	id<HMSoftwareUpdateDelegate> _delegate;
	HMFSoftwareVersion* _version;
	unsigned long long _downloadSize;
	_HMContext* _context;
	HMAccessory* _accessory;

}

@property (nonatomic,retain) _HMContext * context;                                               //@synthesize context=_context - In the implementation block
@property (__weak) HMAccessory * accessory;                                                      //@synthesize accessory=_accessory - In the implementation block
@property (copy) NSUUID * identifier;                                                            //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMSoftwareUpdateDocumentationMetadata * documentationMetadata;              //@synthesize documentationMetadata=_documentationMetadata - In the implementation block
@property (__weak) id<HMSoftwareUpdateDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (copy,readonly) HMFSoftwareVersion * version;                                          //@synthesize version=_version - In the implementation block
@property (readonly) long long state;                                                            //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long downloadSize;                                            //@synthesize downloadSize=_downloadSize - In the implementation block
@property (getter=isDocumentationAvailable,readonly) BOOL documentationAvailable; 
@property (readonly) HMSoftwareUpdateDocumentation * documentation;                              //@synthesize documentation=_documentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)configureWithContext:(id)arg1 ;
-(id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3 ;
-(id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3 documentationMetadata:(id)arg4 ;
-(void)_handleUpdatedState:(id)arg1 ;
-(void)_handleUpdatedDocumentationMetadata:(id)arg1 ;
-(void)_handleUpdatedDocumentation:(id)arg1 ;
-(void)requestDocumentation;
-(void)setDocumentation:(HMSoftwareUpdateDocumentation *)arg1 ;
-(id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 ;
-(void)updateState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateDocumentationMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isDocumentationAvailable;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(HMAccessory *)accessory;
-(void)_registerNotificationHandlers;
-(id)messageDestination;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(unsigned long long)downloadSize;
-(HMSoftwareUpdateDocumentationMetadata *)documentationMetadata;
-(void)setDocumentationMetadata:(HMSoftwareUpdateDocumentationMetadata *)arg1 ;
-(HMSoftwareUpdateDocumentation *)documentation;
-(id)init;
-(void)dealloc;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setDelegate:(id<HMSoftwareUpdateDelegate>)arg1 ;
-(long long)state;
-(id<HMSoftwareUpdateDelegate>)delegate;
-(void)setContext:(_HMContext *)arg1 ;
-(_HMContext *)context;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setState:(long long)arg1 ;
-(HMFSoftwareVersion *)version;
-(NSUUID *)uniqueIdentifier;
@end

