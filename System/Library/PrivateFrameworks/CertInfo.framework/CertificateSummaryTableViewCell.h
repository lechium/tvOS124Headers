/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <CertInfo/CertUIItemSummaryCell.h>

@interface CertificateSummaryTableViewCell : CertUIItemSummaryCell
-(void)updateWithCertificateTrust:(SecTrustRef)arg1 ;
-(void)setCertificateName:(id)arg1 issuer:(id)arg2 isRoot:(BOOL)arg3 ;
@end
