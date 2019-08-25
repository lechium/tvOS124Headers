/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAsset, PHAssetResource;

@interface MiroAssetRequest : NSObject {

	BOOL _isLocal;
	int _requestID;
	PHAsset* _asset;
	PHAssetResource* _resource;
	double _progress;
	double _sizeFactor;

}

@property (nonatomic,retain) PHAsset * asset;                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) PHAssetResource * resource;              //@synthesize resource=_resource - In the implementation block
@property (assign,nonatomic) int requestID;                           //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL isLocal;                            //@synthesize isLocal=_isLocal - In the implementation block
@property (assign,nonatomic) double progress;                         //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double sizeFactor;                       //@synthesize sizeFactor=_sizeFactor - In the implementation block
-(PHAssetResource *)resource;
-(void)setResource:(PHAssetResource *)arg1 ;
-(int)requestID;
-(void)setRequestID:(int)arg1 ;
-(void)setIsLocal:(BOOL)arg1 ;
-(double)sizeFactor;
-(void)setSizeFactor:(double)arg1 ;
-(id)description;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(BOOL)isLocal;
-(void)setAsset:(PHAsset *)arg1 ;
-(PHAsset *)asset;
@end
