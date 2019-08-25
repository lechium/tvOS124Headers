/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNAvatarCardActionCell.h>

@class UIImageView;

@interface CNAvatarCardContactCell : CNAvatarCardActionCell {

	UIImageView* _contactImageView;

}

@property (nonatomic,retain) UIImageView * contactImageView;              //@synthesize contactImageView=_contactImageView - In the implementation block
-(BOOL)moreHighlighted;
-(UIImageView *)contactImageView;
-(void)setContactImageView:(UIImageView *)arg1 ;
-(void)_updateFonts;
-(void)prepareForReuse;
-(void)reloadData;
-(void)awakeFromNib;
@end

