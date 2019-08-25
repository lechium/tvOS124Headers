/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface VUIAppDocumentUpdateEventStore : NSObject {

	NSMutableDictionary* _eventByEventDescriptor;

}

@property (nonatomic,retain) NSMutableDictionary * eventByEventDescriptor;              //@synthesize eventByEventDescriptor=_eventByEventDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * events; 
-(NSArray *)events;
-(void)addEvent:(id)arg1 ;
-(void)addEvents:(id)arg1 ;
-(id)init;
-(id)description;
-(NSMutableDictionary *)eventByEventDescriptor;
-(void)removeAllEvents;
-(void)setEventByEventDescriptor:(NSMutableDictionary *)arg1 ;
@end
