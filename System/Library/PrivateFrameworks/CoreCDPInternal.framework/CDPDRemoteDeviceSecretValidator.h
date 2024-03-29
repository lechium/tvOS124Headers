/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPInternal/CDPDDeviceSecretValidator.h>

@interface CDPDRemoteDeviceSecretValidator : CDPDDeviceSecretValidator {

	/*^block*/id _requestToJoinCompletion;
	BOOL _isWaitingForRemoteApproval;

}
-(void)setValidSecretHandler:(/*^block*/id)arg1 ;
-(void)resetAccountCDPState;
-(void)cancelApproveFromAnotherDevice;
-(id)_decoratedDelegate;
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)supportedEscapeOfferMaskCompletion:(/*^block*/id)arg1 ;
@end

