/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VUIBookmarkKey, VUIUniversalPlaybackPositionRecord;

@interface VUIUPPUpdateRecord : NSObject {

	VUIBookmarkKey* _bookmarkKey;
	VUIUniversalPlaybackPositionRecord* _uppRecord;

}

@property (nonatomic,retain) VUIBookmarkKey * bookmarkKey;                                //@synthesize bookmarkKey=_bookmarkKey - In the implementation block
@property (nonatomic,retain) VUIUniversalPlaybackPositionRecord * uppRecord;              //@synthesize uppRecord=_uppRecord - In the implementation block
-(VUIBookmarkKey *)bookmarkKey;
-(void)setBookmarkKey:(VUIBookmarkKey *)arg1 ;
-(VUIUniversalPlaybackPositionRecord *)uppRecord;
-(void)setUppRecord:(VUIUniversalPlaybackPositionRecord *)arg1 ;
@end

