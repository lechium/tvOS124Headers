/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSMutableArray, NSArray;

@interface MRCompositeMessage : MRProtocolMessage {

	NSMutableArray* _messages;

}

@property (nonatomic,readonly) NSArray * messages; 
-(NSArray *)messages;
-(void)addMessage:(id)arg1 ;
@end

