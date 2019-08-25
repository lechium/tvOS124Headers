/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, NSMutableDictionary, NSString;

@interface IMTransferAgentIDSInterface : NSObject <IDSServiceDelegate> {

	IDSService* _idsService;
	NSMutableDictionary* _uniqueIDToTransferCompletionBlockMap;
	int _numTransfers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)_sendIDSMessage:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)_sendUploadRequest:(id)arg1 topic:(id)arg2 transferID:(id)arg3 allowReauthorize:(BOOL)arg4 ;
-(void)decrementTransferCount;
-(void)incrementTransferCount;
-(void)_sendUploadResponse:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ownerID:(id)arg4 signature:(id)arg5 requestURLString:(id)arg6 transferID:(id)arg7 ;
-(void)_handleUploadRequest:(id)arg1 ;
-(void)_handleUploadResponse:(id)arg1 ;
-(BOOL)isLocalDevicePresent;
-(void)remoteUploadFileRequest:(id)arg1 topic:(id)arg2 transferID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(int)currentTransfers;
-(id)localCompanionDevice;
-(id)init;
-(void)dealloc;
@end

