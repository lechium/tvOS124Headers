/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVControlServices.framework/TVControlServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVControlServices/TVCSEndpointServiceConnectionDelegate.h>

@class NSArray, TVCSEndpointServiceConnection, NSString;

@interface TVCSEndpointManager : NSObject <TVCSEndpointServiceConnectionDelegate> {

	BOOL _startingManagement;
	BOOL _startedManagement;
	NSArray* _pairedEndpoints;
	NSArray* _pairableEndpoints;
	TVCSEndpointServiceConnection* _serviceConnection;

}

@property (assign,getter=isStartingManagement,nonatomic) BOOL startingManagement;              //@synthesize startingManagement=_startingManagement - In the implementation block
@property (assign,nonatomic) BOOL startedManagement;                                           //@synthesize startedManagement=_startedManagement - In the implementation block
@property (nonatomic,retain) TVCSEndpointServiceConnection * serviceConnection;                //@synthesize serviceConnection=_serviceConnection - In the implementation block
@property (nonatomic,copy) NSArray * pairedEndpoints;                                          //@synthesize pairedEndpoints=_pairedEndpoints - In the implementation block
@property (nonatomic,copy) NSArray * pairableEndpoints;                                        //@synthesize pairableEndpoints=_pairableEndpoints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)serviceConnection:(id)arg1 pairedEndpointsDidChange:(id)arg2 ;
-(void)serviceConnection:(id)arg1 pairableEndpointsDidChange:(id)arg2 ;
-(void)_startManagement;
-(void)setPairableEndpoints:(NSArray *)arg1 ;
-(void)setPairedEndpoints:(NSArray *)arg1 ;
-(BOOL)startedManagement;
-(BOOL)isStartingManagement;
-(void)setStartingManagement:(BOOL)arg1 ;
-(void)setStartedManagement:(BOOL)arg1 ;
-(void)pairPairableEndpoint:(id)arg1 passcode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unpairPairedEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)pairedEndpoints;
-(NSArray *)pairableEndpoints;
-(TVCSEndpointServiceConnection *)serviceConnection;
-(void)setServiceConnection:(TVCSEndpointServiceConnection *)arg1 ;
-(void)_stopManagementIfStarted;
-(void)_stopManagement;
-(void)serviceConnectionInvalidated:(id)arg1 ;
-(void)serviceConnectionInterrupted:(id)arg1 ;
-(id)init;
@end

