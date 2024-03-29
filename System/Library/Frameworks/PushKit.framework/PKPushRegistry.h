/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKVoIPXPCClient.h>
#import <libobjc.A.dylib/PKComplicationXPCClient.h>
#import <libobjc.A.dylib/PKFileProviderXPCClient.h>

@protocol PKPushRegistryDelegate, OS_dispatch_queue;
@class NSSet, NSObject, NSMutableDictionary;

@interface PKPushRegistry : NSObject <PKVoIPXPCClient, PKComplicationXPCClient, PKFileProviderXPCClient> {

	int _voipToken;
	int _complicationToken;
	int _fileProviderToken;
	NSSet* _desiredPushTypes;
	id<PKPushRegistryDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSMutableDictionary* _pushTypeToToken;
	NSMutableDictionary* _pushTypeToConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> ivarQueue;                  //@synthesize ivarQueue=_ivarQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pushTypeToToken;                   //@synthesize pushTypeToToken=_pushTypeToToken - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pushTypeToConnection;              //@synthesize pushTypeToConnection=_pushTypeToConnection - In the implementation block
@property (assign,nonatomic) int voipToken;                                           //@synthesize voipToken=_voipToken - In the implementation block
@property (assign,nonatomic) int complicationToken;                                   //@synthesize complicationToken=_complicationToken - In the implementation block
@property (assign,nonatomic) int fileProviderToken;                                   //@synthesize fileProviderToken=_fileProviderToken - In the implementation block
@property (__weak) id<PKPushRegistryDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSSet * desiredPushTypes;                                            //@synthesize desiredPushTypes=_desiredPushTypes - In the implementation block
+(id)_pushTypeToMachServiceName;
-(NSObject*<OS_dispatch_queue>)ivarQueue;
-(void)_renewConnectionForPushTypeIfRegistered:(id)arg1 ;
-(NSMutableDictionary *)pushTypeToToken;
-(NSMutableDictionary *)pushTypeToConnection;
-(id)_createConnectionForPushType:(id)arg1 ;
-(void)voipRegistrationSucceededWithDeviceToken:(id)arg1 ;
-(void)voipPayloadReceived:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)voipRegistrationFailed;
-(void)complicationRegistrationSucceededWithDeviceToken:(id)arg1 ;
-(void)complicationPayloadReceived:(id)arg1 ;
-(void)complicationRegistrationFailed;
-(void)fileProviderRegistrationSucceededWithDeviceToken:(id)arg1 ;
-(void)fileProviderPayloadReceived:(id)arg1 ;
-(void)fileProviderRegistrationFailed;
-(void)_registerForPushType:(id)arg1 ;
-(void)_unregisterForPushType:(id)arg1 ;
-(void)setDesiredPushTypes:(NSSet *)arg1 ;
-(NSSet *)desiredPushTypes;
-(id)pushTokenForType:(id)arg1 ;
-(void)setIvarQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPushTypeToToken:(NSMutableDictionary *)arg1 ;
-(void)setPushTypeToConnection:(NSMutableDictionary *)arg1 ;
-(int)voipToken;
-(void)setVoipToken:(int)arg1 ;
-(int)complicationToken;
-(void)setComplicationToken:(int)arg1 ;
-(int)fileProviderToken;
-(void)setFileProviderToken:(int)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<PKPushRegistryDelegate>)arg1 ;
-(id<PKPushRegistryDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

