/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, IMServiceImpl;

@interface IMServiceChatItem : IMTranscriptChatItem {

	IMHandle* _handle;
	IMServiceImpl* _service;

}

@property (nonatomic,readonly) IMServiceImpl * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) IMHandle * handle;                    //@synthesize handle=_handle - In the implementation block
-(IMServiceImpl *)service;
-(IMHandle *)handle;
-(id)_initWithItem:(id)arg1 service:(id)arg2 handle:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

