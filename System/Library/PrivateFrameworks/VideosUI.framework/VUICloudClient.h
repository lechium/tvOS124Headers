/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HSCloudClient;

@interface VUICloudClient : NSObject {

	HSCloudClient* _hsCloudClient;

}

@property (nonatomic,retain) HSCloudClient * hsCloudClient;              //@synthesize hsCloudClient=_hsCloudClient - In the implementation block
+(id)sharedInstance;
-(void)loadArtworkURLsForPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HSCloudClient *)hsCloudClient;
-(void)setHsCloudClient:(HSCloudClient *)arg1 ;
@end

