/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class NSString, NSMutableDictionary, NSArray;

@interface _TVMusicPlaylistImageRequest : NSObject {

	NSString* _requestIdentifier;
	NSMutableDictionary* _images;
	NSMutableDictionary* _pendingProxies;
	BOOL _cancelled;
	NSArray* _imageProxies;
	NSString* _playlistStyle;
	double _upscaleAdjustment;
	double _cornerRadius;
	/*^block*/id _completionHandler;
	CGSize _scaleToSize;

}

@property (getter=isCancelled) BOOL cancelled;                             //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy,readonly) NSArray * imageProxies;                //@synthesize imageProxies=_imageProxies - In the implementation block
@property (nonatomic,copy,readonly) NSString * playlistStyle;              //@synthesize playlistStyle=_playlistStyle - In the implementation block
@property (assign,nonatomic) CGSize scaleToSize;                           //@synthesize scaleToSize=_scaleToSize - In the implementation block
@property (assign,nonatomic) double upscaleAdjustment;                     //@synthesize upscaleAdjustment=_upscaleAdjustment - In the implementation block
@property (assign,nonatomic) double cornerRadius;                          //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(double)upscaleAdjustment;
-(void)setUpscaleAdjustment:(double)arg1 ;
-(void)loadImagesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithImageProxies:(id)arg1 playlistStyle:(id)arg2 ;
-(NSString *)playlistStyle;
-(id)identifier;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(id)completionHandler;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(NSArray *)imageProxies;
-(CGSize)scaleToSize;
-(void)setScaleToSize:(CGSize)arg1 ;
@end

