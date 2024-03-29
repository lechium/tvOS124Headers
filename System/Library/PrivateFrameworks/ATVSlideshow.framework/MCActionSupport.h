/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol MCActionSupport
@property (readonly) NSDictionary * actions; 
@property (nonatomic,readonly) unsigned long long countOfActions; 
@required
-(void)removeActionForKey:(id)arg1;
-(unsigned long long)countOfActions;
-(void)initActionsWithImprints:(id)arg1;
-(void)demolishActions;
-(id)imprintsForActions;
-(NSDictionary *)actions;
-(void)removeAllActions;
-(void)setAction:(id)arg1 forKey:(id)arg2;
-(id)actionForKey:(id)arg1;

@end

