/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface MRCryptoPairingIdentity : NSObject {

	NSString* _identifier;
	NSData* _publicKey;
	NSData* _privateKey;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSData * publicKey;                 //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) NSData * privateKey;                //@synthesize privateKey=_privateKey - In the implementation block
-(id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 ;
-(NSData *)publicKey;
-(NSData *)privateKey;
-(id)init;
-(NSString *)identifier;
@end

