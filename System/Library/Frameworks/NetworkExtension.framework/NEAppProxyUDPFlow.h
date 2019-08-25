/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEAppProxyFlow.h>

@class NWEndpoint;

@interface NEAppProxyUDPFlow : NEAppProxyFlow {

	NWEndpoint* _localEndpoint;

}

@property (readonly) NWEndpoint * localEndpoint;              //@synthesize localEndpoint=_localEndpoint - In the implementation block
-(id)initWithNEFlow:(NEFlowRef)arg1 queue:(id)arg2 ;
-(void)openWithLocalEndpoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NWEndpoint *)localEndpoint;
-(void)readDatagramsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)writeDatagrams:(id)arg1 sentByEndpoints:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)description;
@end

