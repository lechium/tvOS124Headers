/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolPageFrame, NSArray;

@interface RWIProtocolPageFrameResourceTree : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolPageFrame * frame; 
@property (nonatomic,copy) NSArray * resources; 
@property (nonatomic,copy) NSArray * childFrames; 
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(id)initWithFrame:(id)arg1 resources:(id)arg2 ;
-(void)setChildFrames:(NSArray *)arg1 ;
-(void)setFrame:(RWIProtocolPageFrame *)arg1 ;
-(RWIProtocolPageFrame *)frame;
-(NSArray *)childFrames;
@end

