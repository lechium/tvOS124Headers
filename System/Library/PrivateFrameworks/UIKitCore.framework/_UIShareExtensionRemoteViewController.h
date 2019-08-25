/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <UIKitCore/_UIShareExtensionHost.h>

@protocol _UIShareExtensionHost, NSCopyingNSObject;
@class NSExtension, NSUUID, NSString;

@interface _UIShareExtensionRemoteViewController : _UIRemoteViewController <_UIShareExtensionHost> {

	BOOL _shouldUseFences;
	id<_UIShareExtensionHost> _shareExtensionHost;
	NSExtension* _extension;
	id<NSCopying><NSObject> _extensionRequestIdentifier;
	NSUUID* _extensionServicePresentedActivityUUID;

}

@property (nonatomic,retain) NSUUID * extensionServicePresentedActivityUUID;                   //@synthesize extensionServicePresentedActivityUUID=_extensionServicePresentedActivityUUID - In the implementation block
@property (assign,nonatomic,__weak) id<_UIShareExtensionHost> shareExtensionHost;              //@synthesize shareExtensionHost=_shareExtensionHost - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                          //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying><NSObject> extensionRequestIdentifier;                 //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldUseFences;                                             //@synthesize shouldUseFences=_shouldUseFences - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)instantiateViewControllerWithInputItems:(id)arg1 connectionHandler:(/*^block*/id)arg2 ;
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
-(void)invalidate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setExtensionRequestIdentifier:(id<NSCopying><NSObject>)arg1 ;
-(NSExtension *)extension;
-(id<NSCopying><NSObject>)extensionRequestIdentifier;
-(id)shareExtensionService;
-(void)setShareExtensionHost:(id<_UIShareExtensionHost>)arg1 ;
-(void)setShouldUseFences:(BOOL)arg1 ;
-(void)shareExtensionServiceChangeSheetDismissButtonTitle:(id)arg1 ;
-(void)shareExtensionServiceChangeSheetDismissButtonHidden:(BOOL)arg1 ;
-(void)shareExtensionServiceDisableSheetAvoidsKeyboardUntilContentSizeUpdate;
-(void)shareExtensionServiceWillPerformInServiceActivityWithDataRequest:(id)arg1 dismissPresentation:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)shareExtensionServiceDidFinishPerformingInServiceActivityWithUUID:(id)arg1 responseData:(id)arg2 ;
-(void)shareExtensionServiceRequestPerformActivityInHostForActivityUUID:(id)arg1 ;
-(void)shareExtensionServiceRequestPerformActivityInHostForExtensionActivityWithBundleIdentifier:(id)arg1 ;
-(void)shareExtensionServiceAirDropActivityDidSuccessfullyStartTransfer;
-(void)shareExtensionServiceAirDropActivityDidSuccessfullyCompleteTransfer;
-(void)_cancelPendingExtensionRequests;
-(void)setExtensionServicePresentedActivityUUID:(NSUUID *)arg1 ;
-(BOOL)shouldUseFences;
-(id<_UIShareExtensionHost>)shareExtensionHost;
-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(NSUUID *)extensionServicePresentedActivityUUID;
@end

