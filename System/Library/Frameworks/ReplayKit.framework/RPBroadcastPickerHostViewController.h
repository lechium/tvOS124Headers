/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/RPBroadcastPickerExtensionHostProtocol.h>

@class RPSystemBroadcastPickerViewController, RPBroadcastPickerExtensionHostContext;

@interface RPBroadcastPickerHostViewController : _UIRemoteViewController <RPBroadcastPickerExtensionHostProtocol> {

	RPSystemBroadcastPickerViewController* _broadcastPickerViewController;
	RPBroadcastPickerExtensionHostContext* _hostContext;

}

@property (assign,nonatomic,__weak) RPSystemBroadcastPickerViewController * broadcastPickerViewController;              //@synthesize broadcastPickerViewController=_broadcastPickerViewController - In the implementation block
@property (nonatomic,retain) RPBroadcastPickerExtensionHostContext * hostContext;                                       //@synthesize hostContext=_hostContext - In the implementation block
-(RPBroadcastPickerExtensionHostContext *)hostContext;
-(oneway void)viewControllerDidFinish;
-(void)setHostContext:(RPBroadcastPickerExtensionHostContext *)arg1 ;
-(void)setBroadcastPickerViewController:(RPSystemBroadcastPickerViewController *)arg1 ;
-(RPSystemBroadcastPickerViewController *)broadcastPickerViewController;
-(void)sendMessageToExtension;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

