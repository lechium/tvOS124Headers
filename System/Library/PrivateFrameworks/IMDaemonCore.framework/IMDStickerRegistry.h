/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMDStickerRegistry : NSObject {

	NSMutableDictionary* _stickerPackGUIDToPackMap;

}

@property (retain) NSMutableDictionary * stickerPackGUIDToPackMap;              //@synthesize stickerPackGUIDToPackMap=_stickerPackGUIDToPackMap - In the implementation block
+(id)sharedInstance;
-(id)_cachedPathForStickerWithProperties:(id)arg1 ;
-(BOOL)_isRecipeBasedSticker:(id)arg1 ;
-(void)retrieveStickerWithProperties:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)stickerPackGUIDToPackMap;
-(void)setStickerPackGUIDToPackMap:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
@end

