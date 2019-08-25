/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/CloudPhotoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoServices/PHMediaFormatConversionCompositeRequest.h>

@class PHMediaFormatConversionRequest;

@interface PHMediaFormatLivePhotoConversionRequest : PHMediaFormatConversionCompositeRequest {

	PHMediaFormatConversionRequest* _imageConversionRequest;
	PHMediaFormatConversionRequest* _videoConversionRequest;

}

@property (retain) PHMediaFormatConversionRequest * imageConversionRequest;              //@synthesize imageConversionRequest=_imageConversionRequest - In the implementation block
@property (retain) PHMediaFormatConversionRequest * videoConversionRequest;              //@synthesize videoConversionRequest=_videoConversionRequest - In the implementation block
+(id)requestForImageConversionRequest:(id)arg1 videoConversionRequest:(id)arg2 error:(id*)arg3 ;
+(id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id*)arg3 ;
-(void)didPreflightSubrequest:(id)arg1 ;
-(void)enumerateSubrequests:(/*^block*/id)arg1 ;
-(void)enqueueSubrequestsOnConversionManager:(id)arg1 ;
-(void)setImageConversionRequest:(PHMediaFormatConversionRequest *)arg1 ;
-(void)setVideoConversionRequest:(PHMediaFormatConversionRequest *)arg1 ;
-(PHMediaFormatConversionRequest *)imageConversionRequest;
-(PHMediaFormatConversionRequest *)videoConversionRequest;
@end

