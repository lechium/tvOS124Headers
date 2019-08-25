/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSLegacyPlayer.h>

@protocol IKJSLegacyPlayer <JSExport>
@end

#import <libobjc.A.dylib/_IKJSLegacyPlayerProxy.h>

@protocol IKJSPlayerAppBridge;
@class NSString;

@interface IKJSLegacyPlayer : IKJSObject <NSObject, IKJSLegacyPlayer, _IKJSLegacyPlayerProxy> {

	id<IKJSPlayerAppBridge> _appBridge;

}

@property (assign,nonatomic,__weak) id<IKJSPlayerAppBridge> appBridge;              //@synthesize appBridge=_appBridge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAppBridge:(id<IKJSPlayerAppBridge>)arg1 ;
-(id<IKJSPlayerAppBridge>)appBridge;
-(id)currentAVMediaElement;
-(id)asPrivateIKJSLegacyPlayer;
@end
