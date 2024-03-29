/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHImageRequestDelegate <PHMediaRequestDelegate>
@required
-(void)imageRequest:(id)arg1 didProcessHintsWithLocallyAvailable:(BOOL)arg2 isDegraded:(BOOL)arg3;
-(void)imageRequest:(id)arg1 isRequestingScheduledWorkBlock:(/*^block*/id)arg2;
-(BOOL)imageRequestIsInitialRequestOfMultistageRequest:(id)arg1;
-(void)imageRequest:(id)arg1 isQueryingCacheAndDidWait:(BOOL*)arg2 didFindImage:(BOOL*)arg3 resultHandler:(/*^block*/id)arg4;
-(void)imageRequest:(id)arg1 didFinishLoadingImageResult:(id)arg2 info:(id)arg3 error:(id)arg4;

@end

