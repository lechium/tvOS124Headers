/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSceneAction.h>
#import <libobjc.A.dylib/FBSSceneSnapshotRequestDelegate.h>

@class NSMutableArray, FBSSceneSnapshotRequestHandle, BSSettings, NSString;

@interface FBSSceneSnapshotAction : FBSSceneAction <FBSSceneSnapshotRequestDelegate> {

	NSMutableArray* _requests;
	/*^block*/id _requestHandler;
	/*^block*/id _completionHandler;
	FBSSceneSnapshotRequestHandle* _outgoingRequestHandle;
	int _expired;
	BSSettings* _clientExtendedData;

}

@property (nonatomic,copy) id requestHandler;                            //@synthesize requestHandler=_requestHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (getter=isExpired,readonly) BOOL expired; 
@property (nonatomic,readonly) double expirationInterval; 
@property (nonatomic,copy) BSSettings * clientExtendedData;              //@synthesize clientExtendedData=_clientExtendedData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)snapshotRequestAllowSnapshot:(id)arg1 ;
-(BOOL)snapshotRequest:(id)arg1 performWithContext:(id)arg2 ;
-(void)_executeNextRequest;
-(BOOL)_remainsActionable;
-(void)_finishAllRequests;
-(void)setExpired:(BOOL)arg1 ;
-(double)expirationInterval;
-(BSSettings *)clientExtendedData;
-(void)setClientExtendedData:(BSSettings *)arg1 ;
-(id)initWithRequests:(id)arg1 expirationInterval:(double)arg2 responseHandler:(/*^block*/id)arg3 ;
-(BOOL)isExpired;
-(id)completionHandler;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(Class)fallbackXPCEncodableClass;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)executeRequestsWithHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 expirationHandler:(/*^block*/id)arg3 ;
-(void)setRequestHandler:(id)arg1 ;
-(id)requestHandler;
@end

