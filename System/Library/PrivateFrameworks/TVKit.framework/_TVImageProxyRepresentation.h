/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <TVKit/TVImageRepresentation.h>

@class TVImageProxy;

@interface _TVImageProxyRepresentation : TVImageRepresentation {

	TVImageProxy* _imageProxy;
	CGImageRef _originalImage;

}
-(id)initWithImageProxy:(id)arg1 ;
-(id)_originalImageCacheKey;
-(CGImageRef)_originalImage;
-(void)loadImageWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

