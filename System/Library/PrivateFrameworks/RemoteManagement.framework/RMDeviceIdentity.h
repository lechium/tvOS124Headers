/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RemoteManagement/RemoteManagement-Structs.h>
@interface RMDeviceIdentity : NSObject
+(id)identityWithServerCapabilities:(id)arg1 identityPersistentID:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateIdentityForServer:(SecTrustRef)arg1 ;
-(void)deviceIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)signData:(id)arg1 detachedSignature:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)signPropertyList:(id)arg1 detachedSignature:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end
