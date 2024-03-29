/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>

@protocol _UIIVCInterface;
@interface UIInputViewControllerInterfaceClient : NSExtensionContext {

	id<_UIIVCInterface> _forwardingInterface;

}

@property (nonatomic,retain) id<_UIIVCInterface> forwardingInterface;              //@synthesize forwardingInterface=_forwardingInterface - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(void)setForwardingInterface:(id<_UIIVCInterface>)arg1 ;
-(void)_tearDownRemoteService;
-(void)_handleInputViewControllerState:(id)arg1 ;
-(id)responseDelegate;
-(id<_UIIVCInterface>)forwardingInterface;
@end

