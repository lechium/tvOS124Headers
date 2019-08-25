/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFServiceHelper.h>

@protocol AFServiceHelper;
@class NSString;

@interface CFServiceHelper : NSObject <AFServiceHelper> {

	BOOL _isClientLiteHelper;
	id<AFServiceHelper> _serviceHelper;

}

@property (retain) id<AFServiceHelper> serviceHelper;               //@synthesize serviceHelper=_serviceHelper - In the implementation block
@property (assign) BOOL isClientLiteHelper;                         //@synthesize isClientLiteHelper=_isClientLiteHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)openSensitiveURL:(id)arg1 ;
-(void)dismissAssistant;
-(id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3 ;
-(BOOL)isDeviceLockedWithPasscode;
-(BOOL)isTimeoutSuspended;
-(void)handleCommand:(id)arg1 isOneWay:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)peerInfoForCurrentCommand;
-(void)handleRemoteCommand:(id)arg1 isOneWay:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithServiceHelper:(id)arg1 ;
-(id)initClientLiteHelper;
-(id<AFServiceHelper>)serviceHelper;
-(void)setServiceHelper:(id<AFServiceHelper>)arg1 ;
-(BOOL)isClientLiteHelper;
-(void)setIsClientLiteHelper:(BOOL)arg1 ;
@end

