/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, NSString;

@interface IMMessageNotificationController : NSObject <IDSServiceDelegate> {

	IDSService* _messageNotificationControllerIDSService;

}

@property (nonatomic,retain) IDSService * messageNotificationControllerIDSService;              //@synthesize messageNotificationControllerIDSService=_messageNotificationControllerIDSService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(IDSService *)messageNotificationControllerIDSService;
-(id)_copyIDForDevice:(id)arg1 ;
-(BOOL)_deviceIsAudioAccessory:(id)arg1 ;
-(BOOL)_isCurrentDeviceAudioAccessory;
-(void)_playTone;
-(void)_executeCommandFromMessageRequest:(id)arg1 ;
-(id)_copyIDSIdentifierOrDefault:(id)arg1 ;
-(void)_sendNotificationMessageRequest:(id)arg1 toTokenURI:(id)arg2 ;
-(BOOL)audioAccessoryDeviceWithTokenURIExists:(id)arg1 ;
-(void)sendNotificationMessageToUniqueID:(id)arg1 withCommmand:(long long)arg2 ;
-(void)sendNotificationMessageToTokenURI:(id)arg1 withCommmand:(long long)arg2 ;
-(void)setMessageNotificationControllerIDSService:(IDSService *)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id)init;
-(void)dealloc;
@end

