/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol CRCommand <NSObject,NSCopying>
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long commandDirection; 
@required
-(unsigned long long)commandDirection;
-(void)setCommandDirection:(unsigned long long)arg1;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(id)arg1;

@end
