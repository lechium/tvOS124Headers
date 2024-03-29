/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSNumber, NSString;

@interface VUIExtrasInfo : NSObject {

	NSDictionary* _extrasDict;

}

@property (nonatomic,readonly) NSNumber * contentRating; 
@property (nonatomic,readonly) NSString * adamID; 
@property (nonatomic,readonly) NSString * extrasURLString; 
@property (nonatomic,readonly) NSString * previewURLString; 
@property (nonatomic,retain) NSString * actionParams; 
@property (nonatomic,readonly) NSString * loadingImage; 
@property (nonatomic,readonly) BOOL isLightTheme; 
-(id)initWithMediaItem:(id)arg1 ;
-(NSString *)adamID;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)contentRating;
-(NSString *)extrasURLString;
-(NSString *)previewURLString;
-(NSString *)actionParams;
-(NSString *)loadingImage;
-(BOOL)isLightTheme;
-(void)setActionParams:(NSString *)arg1 ;
@end

