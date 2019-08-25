/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBButton.h>
@class _SFPBImage, NSData;


@protocol _SFPBButton <NSObject>
@property (nonatomic,retain) _SFPBImage * image; 
@property (nonatomic,retain) _SFPBImage * selectedImage; 
@property (assign,nonatomic) BOOL isSelected; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithJSON:(id)arg1;
-(void)setImage:(id)arg1;
-(_SFPBImage *)image;
-(BOOL)isSelected;
-(void)setSelectedImage:(id)arg1;
-(_SFPBImage *)selectedImage;
-(id)initWithDictionary:(id)arg1;
-(void)setIsSelected:(BOOL)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBImage, NSData, NSString;

@interface _SFPBButton : PBCodable <_SFPBButton, NSSecureCoding> {

	BOOL _isSelected;
	_SFPBImage* _image;
	_SFPBImage* _selectedImage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SFPBImage * image;                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) _SFPBImage * selectedImage;              //@synthesize selectedImage=_selectedImage - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                         //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setImage:(_SFPBImage *)arg1 ;
-(_SFPBImage *)image;
-(BOOL)isSelected;
-(void)setSelectedImage:(_SFPBImage *)arg1 ;
-(_SFPBImage *)selectedImage;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIsSelected:(BOOL)arg1 ;
-(NSData *)jsonData;
@end

