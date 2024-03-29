/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSessionDownloadTask, NSURL;

@interface TVArchivedLayeredImageProxy : NSObject {

	NSURLSessionDownloadTask* _downloadTask;
	NSURL* _archiveURL;
	long long _groupType;

}

@property (nonatomic,copy,readonly) NSURL * archiveURL;              //@synthesize archiveURL=_archiveURL - In the implementation block
@property (nonatomic,readonly) long long groupType;                  //@synthesize groupType=_groupType - In the implementation block
-(long long)groupType;
-(NSURL *)archiveURL;
-(id)_assetKey;
-(id)_assetPathWithAssetKey:(id)arg1 ;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithArchiveURL:(id)arg1 groupType:(long long)arg2 ;
-(id)initWithArchiveURL:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(BOOL)isImageAvailable;
@end

