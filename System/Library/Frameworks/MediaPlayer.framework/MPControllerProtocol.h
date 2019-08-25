/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPAVItem, MPAVController, UIView;


@protocol MPControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id delegate; 
@property (nonatomic,retain) MPAVItem * item; 
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,retain) MPAVController * player; 
@property (nonatomic,retain,readonly) UIView * view; 
@required
-(void)setOrientation:(long long)arg1 animate:(BOOL)arg2;
-(void)clearWeakReferencesToObject:(id)arg1;
-(void)noteIgnoredChangeTypes:(unsigned long long)arg1;
-(void)setPlayer:(id)arg1;
-(MPAVController *)player;
-(void)setDelegate:(id)arg1;
-(UIView *)view;
-(void)setItem:(id)arg1;
-(MPAVItem *)item;
-(id)delegate;
-(long long)orientation;
-(void)setOrientation:(long long)arg1;

@end

