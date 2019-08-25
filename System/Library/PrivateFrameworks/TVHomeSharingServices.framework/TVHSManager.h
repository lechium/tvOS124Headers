/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHSServiceConnectionDelegate.h>

@class TVHSMediaServerDiscoveryConfiguration, NSOperationQueue, TVHSServiceConnection, NSString;

@interface TVHSManager : NSObject <TVHSServiceConnectionDelegate> {

	BOOL _allowRestart;
	TVHSMediaServerDiscoveryConfiguration* _mediaServerDiscoveryConfiguration;
	NSOperationQueue* _serialProcessingOperationQueue;
	TVHSServiceConnection* _serviceConnection;

}

@property (nonatomic,copy) TVHSMediaServerDiscoveryConfiguration * mediaServerDiscoveryConfiguration;              //@synthesize mediaServerDiscoveryConfiguration=_mediaServerDiscoveryConfiguration - In the implementation block
@property (nonatomic,retain) NSOperationQueue * serialProcessingOperationQueue;                                    //@synthesize serialProcessingOperationQueue=_serialProcessingOperationQueue - In the implementation block
@property (nonatomic,retain) TVHSServiceConnection * serviceConnection;                                            //@synthesize serviceConnection=_serviceConnection - In the implementation block
@property (assign,nonatomic) BOOL allowRestart;                                                                    //@synthesize allowRestart=_allowRestart - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversOfMediaServerDiscoveryConfiguration;
+(id)sharedInstance;
-(TVHSServiceConnection *)serviceConnection;
-(void)setServiceConnection:(TVHSServiceConnection *)arg1 ;
-(void)setMediaServerDiscoveryConfiguration:(TVHSMediaServerDiscoveryConfiguration *)arg1 ;
-(NSOperationQueue *)serialProcessingOperationQueue;
-(void)_stopManagementIfStarted;
-(BOOL)allowRestart;
-(void)setAllowRestart:(BOOL)arg1 ;
-(void)_stopManagement;
-(void)serviceConnectionInvalidated:(id)arg1 ;
-(void)serviceConnectionInterrupted:(id)arg1 ;
-(void)serviceConnectionMediaServerDiscoveryConfigurationDidChange:(id)arg1 ;
-(TVHSMediaServerDiscoveryConfiguration *)mediaServerDiscoveryConfiguration;
-(void)setSerialProcessingOperationQueue:(NSOperationQueue *)arg1 ;
-(void)startManagementWithCompletion:(/*^block*/id)arg1 ;
-(void)enableMediaServerDiscoverWithDiscoveryMode:(unsigned long long)arg1 homeSharingAccountName:(id)arg2 homeSharingPassword:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)init;
@end
