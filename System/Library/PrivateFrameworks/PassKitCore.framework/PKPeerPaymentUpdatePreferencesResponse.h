/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentPreferences;

@interface PKPeerPaymentUpdatePreferencesResponse : PKPeerPaymentWebServiceResponse {

	PKPeerPaymentPreferences* _peerPaymentPreferences;

}

@property (nonatomic,readonly) PKPeerPaymentPreferences * peerPaymentPreferences;              //@synthesize peerPaymentPreferences=_peerPaymentPreferences - In the implementation block
-(PKPeerPaymentPreferences *)peerPaymentPreferences;
-(id)initWithData:(id)arg1 ;
@end
