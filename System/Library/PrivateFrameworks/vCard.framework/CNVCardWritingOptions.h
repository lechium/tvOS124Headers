/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <vCard/vCard-Structs.h>
@class NSArray;

@interface CNVCardWritingOptions : NSObject {

	BOOL _includeNotes;
	BOOL _includePhotos;
	BOOL _includePrivateFields;
	BOOL _includePrivateBundleIdentifiers;
	BOOL _includeUserSettings;
	BOOL _compressPhotos;
	BOOL _prefersUncroppedPhotos;
	BOOL _usePhotoReferencesIfAvailable;
	unsigned long long _maximumEncodingLength;
	unsigned long long _maximumImageEncodingLength;
	CGSize _maximumImageSize;
	NSArray* _treatAsUnknownProperties;
	unsigned long long _outputVersion;
	NSArray* _availableEncodings;

}

@property (assign) BOOL includePrivateFields;                                  //@synthesize includePrivateFields=_includePrivateFields - In the implementation block
@property (assign) BOOL includePrivateBundleIdentifiers;                       //@synthesize includePrivateBundleIdentifiers=_includePrivateBundleIdentifiers - In the implementation block
@property (assign) BOOL includeNotes;                                          //@synthesize includeNotes=_includeNotes - In the implementation block
@property (assign) BOOL includeUserSettings;                                   //@synthesize includeUserSettings=_includeUserSettings - In the implementation block
@property (assign) BOOL includePhotos;                                         //@synthesize includePhotos=_includePhotos - In the implementation block
@property (assign) BOOL compressPhotos;                                        //@synthesize compressPhotos=_compressPhotos - In the implementation block
@property (assign) BOOL prefersUncroppedPhotos;                                //@synthesize prefersUncroppedPhotos=_prefersUncroppedPhotos - In the implementation block
@property (assign) BOOL usePhotoReferencesIfAvailable;                         //@synthesize usePhotoReferencesIfAvailable=_usePhotoReferencesIfAvailable - In the implementation block
@property (assign) CGSize maximumImageSize;                                    //@synthesize maximumImageSize=_maximumImageSize - In the implementation block
@property (assign) unsigned long long maximumEncodingLength;                   //@synthesize maximumEncodingLength=_maximumEncodingLength - In the implementation block
@property (assign) unsigned long long maximumImageEncodingLength;              //@synthesize maximumImageEncodingLength=_maximumImageEncodingLength - In the implementation block
@property (copy) NSArray * treatAsUnknownProperties;                           //@synthesize treatAsUnknownProperties=_treatAsUnknownProperties - In the implementation block
@property (assign) unsigned long long outputVersion;                           //@synthesize outputVersion=_outputVersion - In the implementation block
@property (copy) NSArray * availableEncodings;                                 //@synthesize availableEncodings=_availableEncodings - In the implementation block
+(id)optionsFromPreferences;
-(unsigned long long)outputVersion;
-(NSArray *)availableEncodings;
-(BOOL)includeNotes;
-(BOOL)includeUserSettings;
-(BOOL)includePrivateFields;
-(BOOL)includePrivateBundleIdentifiers;
-(NSArray *)treatAsUnknownProperties;
-(BOOL)usePhotoReferencesIfAvailable;
-(unsigned long long)maximumEncodingLength;
-(unsigned long long)maximumImageEncodingLength;
-(BOOL)prefersUncroppedPhotos;
-(BOOL)compressPhotos;
-(void)setIncludeNotes:(BOOL)arg1 ;
-(void)setOutputVersion:(unsigned long long)arg1 ;
-(void)setIncludeUserSettings:(BOOL)arg1 ;
-(void)setAvailableEncodings:(NSArray *)arg1 ;
-(void)setIncludePrivateFields:(BOOL)arg1 ;
-(void)setIncludePrivateBundleIdentifiers:(BOOL)arg1 ;
-(void)setCompressPhotos:(BOOL)arg1 ;
-(void)setPrefersUncroppedPhotos:(BOOL)arg1 ;
-(void)setUsePhotoReferencesIfAvailable:(BOOL)arg1 ;
-(void)setMaximumEncodingLength:(unsigned long long)arg1 ;
-(void)setMaximumImageEncodingLength:(unsigned long long)arg1 ;
-(void)setTreatAsUnknownProperties:(NSArray *)arg1 ;
-(void)setIncludePhotos:(BOOL)arg1 ;
-(CGSize)maximumImageSize;
-(void)setMaximumImageSize:(CGSize)arg1 ;
-(BOOL)includePhotos;
-(id)init;
-(id)description;
@end

