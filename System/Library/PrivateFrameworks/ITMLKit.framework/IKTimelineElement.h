/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextElement, NSArray, NSURL;

@interface IKTimelineElement : IKViewElement

@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) NSArray * events; 
@property (nonatomic,readonly) unsigned long long timelineType; 
@property (nonatomic,retain,readonly) NSURL * url; 
@property (nonatomic,readonly) double refreshInterval; 
-(NSArray *)events;
-(unsigned long long)timelineType;
-(IKTextElement *)title;
-(NSURL *)url;
-(double)refreshInterval;
@end
