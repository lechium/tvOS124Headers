/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL, PHAnimatedImage;

@interface _PHAnimatedImageLoadOperation : NSOperation {

	long long _cacheStrategy;
	BOOL _useSharedImageDecoding;
	NSURL* _animatedImageURL;
	PHAnimatedImage* _animatedImage;

}

@property (retain) PHAnimatedImage * animatedImage;              //@synthesize animatedImage=_animatedImage - In the implementation block
+(long long)nextRequestID;
+(id)_requestIsolationQueue;
+(id)_inq_animatedImageLoadingOperations;
+(void)_registerOperation:(id)arg1 forRequestID:(long long)arg2 ;
+(id)_removeOperation:(long long)arg1 ;
+(id)_animatedImageSharedLoadingQueue;
-(id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(BOOL)arg3 ;
-(void)setAnimatedImage:(PHAnimatedImage *)arg1 ;
-(PHAnimatedImage *)animatedImage;
-(void)main;
@end

