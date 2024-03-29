/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RWIProtocolNetworkDomainHandler.h>

@class NSMutableDictionary, IKJSInspectorController, NSString;

@interface IKJSInspectorNetworkAgent : NSObject <RWIProtocolNetworkDomainHandler> {

	NSMutableDictionary* _loaders;
	IKJSInspectorController* _controller;

}

@property (nonatomic,__weak,readonly) IKJSInspectorController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unregisterLoaderWithIdentifier:(id)arg1 ;
-(id)registerLoaderWithIdentifier:(id)arg1 ;
-(void)enableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(void)disableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 ;
-(id)initWithInspectorController:(id)arg1 ;
-(void)clearAllTrackedLoaders;
-(void)setExtraHTTPHeadersWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 headers:(id)arg3 ;
-(void)getResponseBodyWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3 ;
-(void)setResourceCachingDisabledWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 disabled:(BOOL)arg3 ;
-(void)loadResourceWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 frameId:(id)arg3 url:(id)arg4 ;
-(void)resolveWebSocketWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3 objectGroup:(id*)arg4 ;
-(IKJSInspectorController *)controller;
@end

