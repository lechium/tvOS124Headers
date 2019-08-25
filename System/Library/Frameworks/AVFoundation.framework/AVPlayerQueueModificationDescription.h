/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVPlayerItem;

@interface AVPlayerQueueModificationDescription : NSObject {

	long long _modificationType;
	AVPlayerItem* _item;
	AVPlayerItem* _afterItem;

}

@property (nonatomic,readonly) long long modificationType;              //@synthesize modificationType=_modificationType - In the implementation block
@property (nonatomic,readonly) AVPlayerItem * item;                     //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) AVPlayerItem * afterItem;                //@synthesize afterItem=_afterItem - In the implementation block
+(id)modificationForInsertingItem:(id)arg1 afterItem:(id)arg2 ;
+(id)modificationForRemovingItem:(id)arg1 ;
-(long long)modificationType;
-(AVPlayerItem *)afterItem;
-(id)initWithModificationType:(long long)arg1 item:(id)arg2 afterItem:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(AVPlayerItem *)item;
@end

