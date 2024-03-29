/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDAccessoryAdvertisement.h>

@class NSData;

@interface HMDHAPAccessoryAdvertisement : HMDAccessoryAdvertisement {

	BOOL _pairingPresent;
	NSData* _setupHash;

}

@property (nonatomic,readonly) BOOL pairingPresent;              //@synthesize pairingPresent=_pairingPresent - In the implementation block
@property (nonatomic,retain) NSData * setupHash;                 //@synthesize setupHash=_setupHash - In the implementation block
-(BOOL)pairingPresent;
-(NSData *)setupHash;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 categoryIdentifier:(id)arg3 pairingPresent:(BOOL)arg4 setupHash:(id)arg5 ;
-(void)setSetupHash:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

