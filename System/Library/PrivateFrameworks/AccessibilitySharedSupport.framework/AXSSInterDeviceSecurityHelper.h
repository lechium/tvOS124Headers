/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
@class NSArray;

@interface AXSSInterDeviceSecurityHelper : NSObject {

	SecIdentityRef _cachedAppleIDIdentity;
	NSArray* _cachedCertificateChain;
	NSArray* _cachedSecurityIdentity;

}
-(id)_certificateChain;
-(id)securityIdentity;
-(SecIdentityRef)_appleIDIdentity;
-(void)_appleIDsDidChange;
-(BOOL)shouldTrustCertificate:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

