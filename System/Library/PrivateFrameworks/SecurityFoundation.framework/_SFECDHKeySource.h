/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _SFECKeyPair, _SFECPublicKey;

@interface _SFECDHKeySource : NSObject {

	id _ecdhKeySourceInternal;

}

@property (nonatomic,retain) _SFECKeyPair * localKeyPair; 
@property (nonatomic,retain) _SFECPublicKey * remotePublicKey; 
-(_SFECKeyPair *)localKeyPair;
-(_SFECPublicKey *)remotePublicKey;
-(id)initWithLocalKeyPair:(id)arg1 remotePublickKey:(id)arg2 ;
-(void)setLocalKeyPair:(_SFECKeyPair *)arg1 ;
-(void)setRemotePublicKey:(_SFECPublicKey *)arg1 ;
@end
