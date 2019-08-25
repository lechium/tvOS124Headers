/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage, NSIndexPath;

@interface UIIndexBarEntry : NSObject {

	NSString* _title;
	NSString* _shortTitle;
	long long _type;
	UIImage* _image;
	NSIndexPath* _indexPath;

}

@property (assign,nonatomic) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * effectiveShortTitle; 
@property (nonatomic,retain) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSIndexPath * indexPath;                         //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,copy) NSString * shortTitle;                           //@synthesize shortTitle=_shortTitle - In the implementation block
+(id)entryWithTitle:(id)arg1 ;
+(id)entryWithType:(long long)arg1 ;
+(id)_dotImageInView:(id)arg1 ;
+(id)_externalDotImageInView:(id)arg1 ;
+(id)entryForNumbers;
+(id)entryForSearch;
+(id)entryForDotInView:(id)arg1 ;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(NSString *)title;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(NSString *)shortTitle;
-(NSString *)effectiveShortTitle;
-(void)setShortTitle:(NSString *)arg1 ;
@end

