/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, IDSCKContainer, IDSCloudKitKeyValueStore, IDSCloudKitGroupServer, IDSCloudKitTransportLog, IDSCloudKitKeyElectionStore, NSString;

@interface IDSCloudKitContainer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	IDSCKContainer* _container;
	IDSCloudKitKeyValueStore* _keyValueStore;
	IDSCloudKitGroupServer* _publicGroupServer;
	IDSCloudKitGroupServer* _privateGroupServer;
	IDSCloudKitTransportLog* _transportLog;
	IDSCloudKitKeyElectionStore* _keyElectionStore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) IDSCKContainer * container;                                    //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) NSString * containerIdentifier; 
@property (nonatomic,readonly) IDSCloudKitKeyValueStore * keyValueStore;                    //@synthesize keyValueStore=_keyValueStore - In the implementation block
@property (nonatomic,readonly) IDSCloudKitGroupServer * publicGroupServer;                  //@synthesize publicGroupServer=_publicGroupServer - In the implementation block
@property (nonatomic,readonly) IDSCloudKitGroupServer * privateGroupServer;                 //@synthesize privateGroupServer=_privateGroupServer - In the implementation block
@property (nonatomic,readonly) IDSCloudKitTransportLog * transportLog;                      //@synthesize transportLog=_transportLog - In the implementation block
@property (nonatomic,readonly) IDSCloudKitKeyElectionStore * keyElectionStore;              //@synthesize keyElectionStore=_keyElectionStore - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(IDSCloudKitKeyValueStore *)keyValueStore;
-(IDSCloudKitGroupServer *)publicGroupServer;
-(IDSCloudKitGroupServer *)privateGroupServer;
-(IDSCloudKitTransportLog *)transportLog;
-(IDSCloudKitKeyElectionStore *)keyElectionStore;
-(NSString *)containerIdentifier;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 ;
-(IDSCKContainer *)container;
-(void)setContainer:(IDSCKContainer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end

