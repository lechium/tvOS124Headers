/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/TVHKImageLoadParams.h>

@class NSString, TVHSMediaServerIdentifier;

@interface TVHKMediaEntityImageLoadParams : NSObject <TVHKImageLoadParams> {

	BOOL _DRMProtected;
	NSString* _imageIdentifier;
	TVHSMediaServerIdentifier* _mediaServerIdentifier;
	NSString* _title;
	unsigned long long _mediaEntitySubtype;
	unsigned long long _mediaCategoryType;
	unsigned long long _DMAPProtocol;
	unsigned long long _DMAPImageEntityID;
	unsigned long long _storeID;
	unsigned long long _storefrontID;
	NSString* _mediaEntityImageIdentifier;
	unsigned long long _imageType;
	unsigned long long _mediaItemType;
	unsigned long long _mediaCollectionType;
	unsigned long long _playlistType;
	NSString* _stringRepresentation;
	CGRect _cutOutRect;

}

@property (nonatomic,retain) TVHSMediaServerIdentifier * mediaServerIdentifier;              //@synthesize mediaServerIdentifier=_mediaServerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                 //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long mediaCategoryType;                           //@synthesize mediaCategoryType=_mediaCategoryType - In the implementation block
@property (assign,nonatomic) unsigned long long DMAPProtocol;                                //@synthesize DMAPProtocol=_DMAPProtocol - In the implementation block
@property (assign,nonatomic) unsigned long long DMAPImageEntityID;                           //@synthesize DMAPImageEntityID=_DMAPImageEntityID - In the implementation block
@property (assign,nonatomic) unsigned long long storeID;                                     //@synthesize storeID=_storeID - In the implementation block
@property (assign,nonatomic) unsigned long long storefrontID;                                //@synthesize storefrontID=_storefrontID - In the implementation block
@property (assign,getter=isDRMProtected,nonatomic) BOOL DRMProtected;                        //@synthesize DRMProtected=_DRMProtected - In the implementation block
@property (assign,nonatomic) unsigned long long mediaEntitySubtype;                          //@synthesize mediaEntitySubtype=_mediaEntitySubtype - In the implementation block
@property (nonatomic,copy) NSString * mediaEntityImageIdentifier;                            //@synthesize mediaEntityImageIdentifier=_mediaEntityImageIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long imageType;                                   //@synthesize imageType=_imageType - In the implementation block
@property (assign,nonatomic) unsigned long long mediaItemType;                               //@synthesize mediaItemType=_mediaItemType - In the implementation block
@property (assign,nonatomic) unsigned long long mediaCollectionType;                         //@synthesize mediaCollectionType=_mediaCollectionType - In the implementation block
@property (assign,nonatomic) unsigned long long playlistType;                                //@synthesize playlistType=_playlistType - In the implementation block
@property (assign,nonatomic) CGRect cutOutRect;                                              //@synthesize cutOutRect=_cutOutRect - In the implementation block
@property (nonatomic,copy) NSString * stringRepresentation;                                  //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * imageIdentifier;                              //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
+(CGRect)_cutOutRectForFacePlaylist:(id)arg1 ;
+(id)_imageLoadParamsWithDictionaryRepresentation:(id)arg1 ;
+(CGRect)_paddedFaceRectFromFaceRect:(CGRect)arg1 ;
+(id)imageLoadParamsWithStringRepresentation:(id)arg1 ;
+(id)_imageTypeIdentifier:(unsigned long long)arg1 ;
+(id)imageLoadParamsWithMediaEntity:(id)arg1 imageType:(unsigned long long)arg2 ;
-(id)_dictionaryRepresentation;
-(unsigned long long)mediaItemType;
-(void)setMediaItemType:(unsigned long long)arg1 ;
-(unsigned long long)storeID;
-(unsigned long long)imageType;
-(void)setStoreID:(unsigned long long)arg1 ;
-(unsigned long long)playlistType;
-(void)setPlaylistType:(unsigned long long)arg1 ;
-(void)setStorefrontID:(unsigned long long)arg1 ;
-(unsigned long long)storefrontID;
-(TVHSMediaServerIdentifier *)mediaServerIdentifier;
-(void)setMediaServerIdentifier:(TVHSMediaServerIdentifier *)arg1 ;
-(void)setDMAPProtocol:(unsigned long long)arg1 ;
-(void)setDMAPImageEntityID:(unsigned long long)arg1 ;
-(void)setMediaEntityImageIdentifier:(NSString *)arg1 ;
-(void)setCutOutRect:(CGRect)arg1 ;
-(void)setDRMProtected:(BOOL)arg1 ;
-(NSString *)mediaEntityImageIdentifier;
-(unsigned long long)DMAPProtocol;
-(unsigned long long)DMAPImageEntityID;
-(BOOL)isDRMProtected;
-(CGRect)cutOutRect;
-(void)setStringRepresentation:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setImageType:(unsigned long long)arg1 ;
-(NSString *)stringRepresentation;
-(unsigned long long)mediaCategoryType;
-(void)setMediaEntitySubtype:(unsigned long long)arg1 ;
-(NSString *)imageIdentifier;
-(unsigned long long)mediaCollectionType;
-(void)setMediaCategoryType:(unsigned long long)arg1 ;
-(void)setMediaCollectionType:(unsigned long long)arg1 ;
-(unsigned long long)mediaEntitySubtype;
@end

