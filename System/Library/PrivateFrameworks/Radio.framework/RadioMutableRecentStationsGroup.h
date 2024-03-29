/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioRecentStationsGroup.h>

@class NSString, NSArray;

@interface RadioMutableRecentStationsGroup : RadioRecentStationsGroup

@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,copy) NSString * localizedTitle; 
@property (nonatomic,copy) NSArray * stations; 
-(void)setStations:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setLocalizedTitle:(NSString *)arg1 ;
@end

