/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSNumber, NSDate;

@interface AssetCollectionInfo : NSObject <NSSecureCoding> {

	BOOL _isMine;
	BOOL _isVideo;
	BOOL _isPhotoIris;
	BOOL _isDeletable;
	unsigned short _playbackVariation;
	NSString* _GUID;
	NSString* _personID;
	NSDictionary* _metaData;
	NSNumber* _width;
	NSNumber* _height;
	NSDate* _timestamp;
	NSString* _derivativeUTI;

}

@property (getter=UID,nonatomic,retain,readonly) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain,readonly) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) BOOL isMine;                                    //@synthesize isMine=_isMine - In the implementation block
@property (nonatomic,readonly) BOOL isVideo;                                   //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,readonly) BOOL isPhotoIris;                               //@synthesize isPhotoIris=_isPhotoIris - In the implementation block
@property (nonatomic,readonly) unsigned short playbackVariation;               //@synthesize playbackVariation=_playbackVariation - In the implementation block
@property (nonatomic,readonly) BOOL isDeletable;                               //@synthesize isDeletable=_isDeletable - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * metaData;                 //@synthesize metaData=_metaData - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * width;                        //@synthesize width=_width - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * height;                       //@synthesize height=_height - In the implementation block
@property (nonatomic,retain,readonly) NSDate * timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain,readonly) NSString * derivativeUTI;                //@synthesize derivativeUTI=_derivativeUTI - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)personID;
-(NSString *)GUID;
-(BOOL)isDeletable;
-(NSDictionary *)metaData;
-(NSString *)derivativeUTI;
-(BOOL)isMine;
-(id)initWithAssetCollection:(id)arg1 ;
-(unsigned short)playbackVariation;
-(BOOL)isPhotoIris;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)timestamp;
-(NSNumber *)width;
-(NSNumber *)height;
-(BOOL)isVideo;
@end

