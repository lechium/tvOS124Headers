/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBRemoteDataProviderClientProxy.h>

@protocol BBRemoteDataProvider, OS_dispatch_queue, BBRemoteDataProviderServerProxy;
@class NSObject, BBDataProviderIdentity, NSString;

@interface BBDataProviderProxy : NSObject <BBRemoteDataProviderClientProxy> {

	id<BBRemoteDataProvider> _dataProvider;
	NSObject*<OS_dispatch_queue> _clientCalloutQueue;
	BBDataProviderIdentity* _identity;
	BOOL _dataProviderDidLoad;
	NSObject*<OS_dispatch_queue> _proxyQueue;
	id<BBRemoteDataProviderServerProxy> _serverProxy;
	BOOL _connected;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) BBDataProviderIdentity * identity;               //@synthesize identity=_identity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deliverBulletinActionResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)getPNGDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 sizeConstraints:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)getAspectRatioForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)withdrawBulletinsWithRecordID:(id)arg1 ;
-(void)setServerProxy:(id)arg1 ;
-(void)updateIdentity:(/*^block*/id)arg1 ;
-(id)initWithDataProvider:(id)arg1 clientReplyQueue:(id)arg2 ;
-(void)_makeClientRequest:(/*^block*/id)arg1 ;
-(void)_makeServerRequest:(/*^block*/id)arg1 ;
-(void)updateSectionInfoWithHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addBulletin:(id)arg1 interrupt:(BOOL)arg2 ;
-(void)updateClearedInfoWithHandler:(/*^block*/id)arg1 ;
-(void)updateSectionInfoWithHandler:(/*^block*/id)arg1 ;
-(void)reloadSectionParameters;
-(void)invalidateBulletins;
-(void)reloadDefaultSectionInfo;
-(void)modifyBulletin:(id)arg1 ;
-(void)withdrawBulletinWithPublisherBulletinID:(id)arg1 ;
-(void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2 ;
-(void)dataProviderDidLoad;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(BBDataProviderIdentity *)identity;
-(void)setIdentity:(BBDataProviderIdentity *)arg1 ;
@end

