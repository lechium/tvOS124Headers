/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputContextManagerImpl.h>

@class AVOutputContextManager, AVWeakReference, NSString;

@interface AVFigEndpointUIAgentOutputContextManagerImpl : NSObject <AVOutputContextManagerImpl> {

	OpaqueFigEndpointUIAgentRef _agent;
	AVWeakReference* _weakObserver;
	AVOutputContextManager* _parentManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) AVOutputContextManager * parentOutputContextManager;              //@synthesize parentManager=_parentManager - In the implementation block
+(OpaqueFigEndpointUIAgentRef)copySharedEndpointUIAgent;
-(id)initWithEndpointUIAgent:(OpaqueFigEndpointUIAgentRef)arg1 ;
-(void)setParentOutputContextManager:(AVOutputContextManager *)arg1 ;
-(AVOutputContextManager *)parentOutputContextManager;
-(void)_showErrorPromptForRouteDescriptor:(CFDictionaryRef)arg1 reason:(CFStringRef)arg2 ;
-(void)dealloc;
@end
