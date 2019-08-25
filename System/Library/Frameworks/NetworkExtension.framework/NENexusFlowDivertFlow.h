/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NENexusFlow.h>

@class NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlowDivertFlow : NENexusFlow {

	NSUUID* _clientID;
	NWEndpoint* _internalEndpoint;
	NWParameters* _internalParameters;
	NEFlowRef _flowDivertFlow;

}

@property (retain) NSUUID * clientID;                              //@synthesize clientID=_clientID - In the implementation block
@property (retain) NWEndpoint * internalEndpoint;                  //@synthesize internalEndpoint=_internalEndpoint - In the implementation block
@property (retain) NWParameters * internalParameters;              //@synthesize internalParameters=_internalParameters - In the implementation block
@property (assign) NEFlowRef flowDivertFlow;                       //@synthesize flowDivertFlow=_flowDivertFlow - In the implementation block
-(NSUUID *)clientID;
-(id)clientIdentifier;
-(void)setClientID:(NSUUID *)arg1 ;
-(NEFlowRef)flowDivertFlow;
-(void)setFlowDivertFlow:(NEFlowRef)arg1 ;
-(NWEndpoint *)internalEndpoint;
-(NWParameters *)internalParameters;
-(id)initWithFlowDivertFlow:(NEFlowRef)arg1 ;
-(void)setInternalEndpoint:(NWEndpoint *)arg1 ;
-(void)setInternalParameters:(NWParameters *)arg1 ;
-(void)dealloc;
-(id)parameters;
-(id)endpoint;
@end

