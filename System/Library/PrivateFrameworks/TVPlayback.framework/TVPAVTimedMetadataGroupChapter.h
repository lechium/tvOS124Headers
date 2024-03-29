/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPMutableChapter.h>

@class AVMetadataItem, TVPAVMetadataItemImageLoader;

@interface TVPAVTimedMetadataGroupChapter : TVPMutableChapter {

	AVMetadataItem* _imageMetadataItem;
	TVPAVMetadataItemImageLoader* _imageLoader;

}

@property (nonatomic,retain) AVMetadataItem * imageMetadataItem;                      //@synthesize imageMetadataItem=_imageMetadataItem - In the implementation block
@property (nonatomic,retain) TVPAVMetadataItemImageLoader * imageLoader;              //@synthesize imageLoader=_imageLoader - In the implementation block
-(TVPAVMetadataItemImageLoader *)imageLoader;
-(void)setImageLoader:(TVPAVMetadataItemImageLoader *)arg1 ;
-(void)setImageMetadataItem:(AVMetadataItem *)arg1 ;
-(void)_loadChapterNameFromMetadataItem:(id)arg1 ;
-(AVMetadataItem *)imageMetadataItem;
-(id)initWithAVTimedMetadataGroup:(id)arg1 filterByLanguages:(id)arg2 ;
-(id)imageProxy;
@end

