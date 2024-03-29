/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/LSInstallationServiceCallbackProtocol.h>

@protocol OS_dispatch_group;
@class NSString, NSXPCConnection, NSURL, NSDictionary, NSObject;

@interface _LSInstallerClient : NSObject <LSInstallationServiceCallbackProtocol> {

	BOOL _uninstaller;
	unsigned long long _operationType;
	NSString* _operationTypeString;
	NSXPCConnection* _connection;
	/*^block*/id _progressBlock;
	NSString* _bundleID;
	NSURL* _bundleURL;
	NSDictionary* _options;
	NSObject*<OS_dispatch_group> _callbackDeliveryGroup;
	os_unfair_lock_s _lock;
	BOOL _allCallbacksDeleviered;

}

@property (nonatomic,retain) NSXPCConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) id progressBlock;                                     //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSURL * bundleURL;                                  //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                             //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long operationType;                   //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) NSString * operationTypeString; 
@property (assign,getter=isUninstaller,nonatomic) BOOL uninstaller;              //@synthesize uninstaller=_uninstaller - In the implementation block
@property (readonly) BOOL allCallbacksDeleviered;                                //@synthesize allCallbacksDeleviered=_allCallbacksDeleviered - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)installerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
+(id)installerWithBundleID:(id)arg1 bundleURL:(id)arg2 options:(id)arg3 callbackBlock:(/*^block*/id)arg4 ;
+(id)unInstallerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setBundleURL:(NSURL *)arg1 ;
-(unsigned long long)operationType;
-(void)setOperationType:(unsigned long long)arg1 ;
-(void)setUninstaller:(BOOL)arg1 ;
-(BOOL)allCallbacksDeleviered;
-(BOOL)isUninstaller;
-(NSString *)operationTypeString;
-(void)_beginOperation;
-(void)_waitForAllCallbackMessagesToExecute;
-(void)updateCallbackWithData:(id)arg1 ;
-(void)callbackDeliveryComplete;
-(id)init;
-(void)dealloc;
-(NSDictionary *)options;
-(void)_invalidate;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSURL *)bundleURL;
-(void)setProgressBlock:(id)arg1 ;
-(id)progressBlock;
-(NSString *)bundleID;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

