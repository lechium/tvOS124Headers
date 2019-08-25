/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, PKPaymentHeroImageSet, NSString, PKOSVersionRequirementRange, NSArray;

@interface PKPaymentHeroImage : NSObject {

	NSData* _imageData;
	PKPaymentHeroImageSet* _images;
	BOOL _isBeta;
	NSString* _identifier;
	PKOSVersionRequirementRange* _versionRequirement;
	NSArray* _requiredDeviceFeatures;
	long long _credentialType;
	long long _cardType;

}

@property (nonatomic,readonly) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) PKOSVersionRequirementRange * versionRequirement;              //@synthesize versionRequirement=_versionRequirement - In the implementation block
@property (nonatomic,readonly) NSArray * requiredDeviceFeatures;                              //@synthesize requiredDeviceFeatures=_requiredDeviceFeatures - In the implementation block
@property (nonatomic,readonly) long long credentialType;                                      //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,readonly) long long cardType;                                            //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,readonly) BOOL isBeta;                                                   //@synthesize isBeta=_isBeta - In the implementation block
-(id)imageForPreferredLanguages:(id)arg1 scale:(double)arg2 ;
-(id)imageFilePathOnDiskForPreferredLanguages:(id)arg1 scale:(double)arg2 ;
-(void)downloadImageForPreferredLanguages:(id)arg1 scale:(double)arg2 fileDownloader:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)imageFilePathForImageModel:(id)arg1 ;
-(long long)credentialType;
-(id)initWithLegacyDictionary:(id)arg1 identifier:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 imageData:(id)arg2 credentialType:(long long)arg3 ;
-(BOOL)hasCachedImageWithScale:(double)arg1 ;
-(id)imageWithScale:(double)arg1 ;
-(void)downloadImageWithScale:(double)arg1 fileDownloader:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isSupportedByDevice:(id)arg1 deviceVersion:(id)arg2 deviceClass:(id)arg3 ;
-(PKOSVersionRequirementRange *)versionRequirement;
-(NSArray *)requiredDeviceFeatures;
-(long long)cardType;
-(BOOL)isBeta;
-(NSString *)identifier;
-(id)initWithDictionary:(id)arg1 ;
@end

