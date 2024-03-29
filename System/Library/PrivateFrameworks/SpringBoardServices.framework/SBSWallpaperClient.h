/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <FrontBoardServices/FBSServiceFacilityClient.h>

@interface SBSWallpaperClient : FBSServiceFacilityClient
-(id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2 ;
-(id)initWithCalloutQueue:(id)arg1 ;
-(void)fetchThumbnailForVariant:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)setWallpaperWithVideo:(id)arg1 cropRect:(CGRect)arg2 ;
@end

