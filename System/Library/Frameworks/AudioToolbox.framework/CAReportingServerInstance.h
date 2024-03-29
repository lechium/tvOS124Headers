/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAReportingServerInterface.h>

@class CAReportingServer, NSMutableDictionary, NSString;

@interface CAReportingServerInstance : NSObject <CAReportingServerInterface> {

	int _clientID;
	CAReportingServer* _master;
	NSMutableDictionary* _clientReportingSessionMap;

}

@property (retain) CAReportingServer * master;                                   //@synthesize master=_master - In the implementation block
@property (assign) int clientID;                                                 //@synthesize clientID=_clientID - In the implementation block
@property (retain) NSMutableDictionary * clientReportingSessionMap;              //@synthesize clientReportingSessionMap=_clientReportingSessionMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setClientReportingSessionMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)clientReportingSessionMap;
-(void)createReportingSession:(long long)arg1 ;
-(void)setServiceType:(unsigned short)arg1 reportingSession:(long long)arg2 ;
-(void)getServiceNameForReporterID:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)startReportingSessionForID:(long long)arg1 ;
-(void)sendMessage:(id)arg1 withCategory:(unsigned short)arg2 andType:(unsigned short)arg3 forReportingIDs:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)stopReportingSessionForID:(long long)arg1 ;
-(void)destroyReportingSession:(long long)arg1 ;
-(void)reporterID:(long long)arg1 valid:(/*^block*/id)arg2 ;
-(void)getAllReporters:(/*^block*/id)arg1 ;
-(void)postSimpleAWDMetric:(unsigned)arg1 ;
-(void)postAWDMetric:(unsigned)arg1 withData:(id)arg2 ;
-(id)initWithMasterAndID:(id)arg1 clientID:(int)arg2 outError:(id*)arg3 ;
-(int)clientID;
-(void)setClientID:(int)arg1 ;
-(void)handleConnectionError;
-(CAReportingServer *)master;
-(void)setMaster:(CAReportingServer *)arg1 ;
@end

