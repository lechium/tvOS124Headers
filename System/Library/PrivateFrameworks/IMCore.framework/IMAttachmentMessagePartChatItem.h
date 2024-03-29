/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMMessagePartChatItem.h>

@class NSString;

@interface IMAttachmentMessagePartChatItem : IMMessagePartChatItem {

	NSString* _transferGUID;
	unsigned _wantsAttachmentContiguous : 1;
	BOOL _parentChatIsSpam;

}

@property (nonatomic,copy,readonly) NSString * transferGUID;              //@synthesize transferGUID=_transferGUID - In the implementation block
@property (nonatomic,readonly) BOOL parentChatIsSpam;                     //@synthesize parentChatIsSpam=_parentChatIsSpam - In the implementation block
-(NSString *)transferGUID;
-(BOOL)isAttachmentContiguousWithChatItem:(id)arg1 ;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange)arg4 transferGUID:(id)arg5 parentChatIsSpam:(BOOL)arg6 ;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange)arg4 transferGUID:(id)arg5 parentChatIsSpam:(BOOL)arg6 visibleAssociatedMessageChatItems:(id)arg7 ;
-(BOOL)parentChatIsSpam;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

