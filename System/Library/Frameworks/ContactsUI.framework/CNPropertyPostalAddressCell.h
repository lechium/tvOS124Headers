/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class UIImageView;

@interface CNPropertyPostalAddressCell : CNPropertySimpleTransportCell {

	BOOL _shouldUseMapTiles;
	UIImageView* _mapImageView;

}

@property (nonatomic,retain) UIImageView * mapImageView;              //@synthesize mapImageView=_mapImageView - In the implementation block
@property (assign,nonatomic) BOOL shouldUseMapTiles;                  //@synthesize shouldUseMapTiles=_shouldUseMapTiles - In the implementation block
+(id)defaultMapImage;
-(id)variableConstraints;
-(void)setShouldUseMapTiles:(BOOL)arg1 ;
-(BOOL)shouldUseMapTiles;
-(void)setMapImageView:(UIImageView *)arg1 ;
-(void)setMapImage:(id)arg1 ;
-(void)mapSnapshotWithPlacemark:(id)arg1 ;
-(UIImageView *)mapImageView;
-(void)tapGesture:(id)arg1 ;
-(void)setProperty:(id)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

