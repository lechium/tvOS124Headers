/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImage, NSString, UIImageView;

@interface PLPersonTableViewCell : UITableViewCell {

	UIImage* _personIcon;
	NSString* _personFirstName;
	NSString* _personLastName;
	UIImageView* __personIconImageView;
	UIImage* __personMonogramImage;

}

@property (setter=_setPersonIconImageView:,nonatomic,retain) UIImageView * _personIconImageView;              //@synthesize _personIconImageView=__personIconImageView - In the implementation block
@property (setter=_setPersonMonogramImage:,nonatomic,retain) UIImage * _personMonogramImage;                  //@synthesize _personMonogramImage=__personMonogramImage - In the implementation block
@property (nonatomic,retain) UIImage * personIcon;                                                            //@synthesize personIcon=_personIcon - In the implementation block
@property (nonatomic,copy) NSString * personFirstName;                                                        //@synthesize personFirstName=_personFirstName - In the implementation block
@property (nonatomic,copy) NSString * personLastName;                                                         //@synthesize personLastName=_personLastName - In the implementation block
-(void)_updatePersonIconImageView;
-(void)_setPersonMonogramImage:(id)arg1 ;
-(UIImage *)personIcon;
-(NSString *)personFirstName;
-(NSString *)personLastName;
-(UIImageView *)_personIconImageView;
-(void)_setPersonIconImageView:(id)arg1 ;
-(void)setPersonIcon:(UIImage *)arg1 ;
-(void)setPersonFirstName:(NSString *)arg1 ;
-(void)setPersonLastName:(NSString *)arg1 ;
-(UIImage *)_personMonogramImage;
-(void)dealloc;
-(void)layoutSubviews;
@end

