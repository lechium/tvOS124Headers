/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UINavigationController.h>

@protocol TrustCertificateViewControllerDelegate;
@class CertificateViewController;

@interface TrustCertificateViewController : UINavigationController {

	BOOL _allowCertificateTrust;
	id<TrustCertificateViewControllerDelegate> _trustCertificateDelegate;
	CertificateViewController* _certificateViewController;

}

@property (assign,nonatomic) BOOL allowCertificateTrust;                                                              //@synthesize allowCertificateTrust=_allowCertificateTrust - In the implementation block
@property (nonatomic,retain) CertificateViewController * certificateViewController;                                   //@synthesize certificateViewController=_certificateViewController - In the implementation block
@property (assign,nonatomic,__weak) id<TrustCertificateViewControllerDelegate> trustCertificateDelegate;              //@synthesize trustCertificateDelegate=_trustCertificateDelegate - In the implementation block
-(void)setShowCertificateButton:(BOOL)arg1 localizedTitle:(id)arg2 localizedDescription:(id)arg3 destructive:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(void)_setupNavItem;
-(void)_dismissWithResult:(int)arg1 ;
-(void)_accept;
-(id)initWithTrustCertificateDelegate:(id)arg1 allowTrust:(BOOL)arg2 ;
-(id)initWithTrust:(SecTrustRef)arg1 action:(int)arg2 delegate:(id)arg3 allowTrust:(BOOL)arg4 ;
-(CertificateViewController *)certificateViewController;
-(id)initWithTrustCertificateDelegate:(id)arg1 ;
-(void)setCertificateInfo:(id)arg1 issuer:(id)arg2 purpose:(id)arg3 expiration:(id)arg4 isRoot:(BOOL)arg5 properties:(id)arg6 action:(int)arg7 ;
-(id<TrustCertificateViewControllerDelegate>)trustCertificateDelegate;
-(void)setTrustCertificateDelegate:(id<TrustCertificateViewControllerDelegate>)arg1 ;
-(BOOL)allowCertificateTrust;
-(void)setAllowCertificateTrust:(BOOL)arg1 ;
-(void)setCertificateViewController:(CertificateViewController *)arg1 ;
-(id)initWithTrust:(SecTrustRef)arg1 action:(int)arg2 delegate:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(void)_cancel;
@end

