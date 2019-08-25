/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMMessageStatusChatItem.h>

@class IMBalloonPluginDataSource;

@interface IMTranscriptPluginStatusChatItem : IMMessageStatusChatItem {

	IMBalloonPluginDataSource* _dataSource;

}

@property (nonatomic,readonly) IMBalloonPluginDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id)_initWithItem:(id)arg1 dataSource:(id)arg2 ;
-(IMBalloonPluginDataSource *)dataSource;
@end
