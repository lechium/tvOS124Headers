/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSUUID;

@interface CUNFCDevice : NSObject {

	NSURL* _advertisedURI;
	NSUUID* _identifier;

}

@property (nonatomic,copy) NSURL * advertisedURI;              //@synthesize advertisedURI=_advertisedURI - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                //@synthesize identifier=_identifier - In the implementation block
-(NSURL *)advertisedURI;
-(void)setAdvertisedURI:(NSURL *)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
@end
