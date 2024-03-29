/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RemoteManagement/RemoteManagement-Structs.h>
@interface RMKeychainAccess : NSObject
+(const void*)copyItemWithPersistentID:(id)arg1 ;
+(SecCertificateRef)copyCertificateWithPersistentID:(id)arg1 ;
+(SecIdentityRef)copyIdentityWithPersistentID:(id)arg1 ;
+(BOOL)removeItemWithPersistentID:(id)arg1 ;
+(BOOL)itemExistsInKeychain:(void*)arg1 ;
+(id)getCertificateExpirationDate:(SecCertificateRef)arg1 ;
+(id)addItem:(void*)arg1 toGroup:(id)arg2 ;
+(id)getCertificatesWithPersistentIDs:(id)arg1 ;
+(SecCertificateRef)getLeafCertificateForTrust:(SecTrustRef)arg1 ;
+(id)getCommonNamesForCertificate:(SecCertificateRef)arg1 ;
+(SecIdentityRef)createIdentityWithCommonName:(id)arg1 error:(id*)arg2 ;
+(id)getIdentityExpirationDate:(SecIdentityRef)arg1 ;
+(id)getIdentityPublicCertificateData:(SecIdentityRef)arg1 ;
@end

