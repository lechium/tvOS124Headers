/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVUIKit/TVUIKit-Structs.h>
@class NSString, NSURL, _TVStackedMediaVideoLoopConfiguration;

@interface _TVStackedMediaDocumentEntry : NSObject {

	BOOL _gimbalEnabled;
	BOOL _opaque;
	NSString* _name;
	NSString* _remoteAssetFileName;
	NSURL* _localAssetURL;
	_TVStackedMediaVideoLoopConfiguration* _loopConfiguration;
	long long _mediaType;
	long long _blendMode;
	CGImageRef _imageRef;
	CGRect _frame;

}

@property (nonatomic,retain) NSString * name;                                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * remoteAssetFileName;                                         //@synthesize remoteAssetFileName=_remoteAssetFileName - In the implementation block
@property (nonatomic,retain) NSURL * localAssetURL;                                                  //@synthesize localAssetURL=_localAssetURL - In the implementation block
@property (nonatomic,retain) _TVStackedMediaVideoLoopConfiguration * loopConfiguration;              //@synthesize loopConfiguration=_loopConfiguration - In the implementation block
@property (assign,nonatomic) CGRect frame;                                                           //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) BOOL gimbalEnabled;                                                     //@synthesize gimbalEnabled=_gimbalEnabled - In the implementation block
@property (assign,nonatomic) long long mediaType;                                                    //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) long long blendMode;                                                    //@synthesize blendMode=_blendMode - In the implementation block
@property (getter=isOpaque,nonatomic,readonly) BOOL opaque;                                          //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic) CGImageRef imageRef;                                                    //@synthesize imageRef=_imageRef - In the implementation block
+(long long)_mediaTypeForMediaTypeString:(id)arg1 ;
+(long long)_blendModeForBlendModeString:(id)arg1 ;
-(void)setMediaType:(long long)arg1 ;
-(void)setImageRef:(CGImageRef)arg1 ;
-(long long)mediaType;
-(NSURL *)localAssetURL;
-(_TVStackedMediaVideoLoopConfiguration *)loopConfiguration;
-(BOOL)gimbalEnabled;
-(id)initWithDictionary:(id)arg1 directory:(id)arg2 fileNamePrefix:(id)arg3 ;
-(NSString *)remoteAssetFileName;
-(void)setRemoteAssetFileName:(NSString *)arg1 ;
-(void)setLocalAssetURL:(NSURL *)arg1 ;
-(void)setLoopConfiguration:(_TVStackedMediaVideoLoopConfiguration *)arg1 ;
-(void)setGimbalEnabled:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CGRect)frame;
-(BOOL)isOpaque;
-(CGImageRef)imageRef;
-(long long)blendMode;
-(void)setBlendMode:(long long)arg1 ;
@end

