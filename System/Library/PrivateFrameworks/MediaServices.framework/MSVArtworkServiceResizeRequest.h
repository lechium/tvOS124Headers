/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <MediaServices/MSVArtworkServiceRequest.h>

@class NSURL, NSMutableArray;

@interface MSVArtworkServiceResizeRequest : MSVArtworkServiceRequest {

	NSURL* _sourceURL;
	NSMutableArray* _resizeDestinations;

}

@property (nonatomic,retain) NSMutableArray * resizeDestinations;              //@synthesize resizeDestinations=_resizeDestinations - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                                  //@synthesize sourceURL=_sourceURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(void)enumerateDestinationsUsingBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)resizeDestinations;
-(void)setResizeDestinations:(NSMutableArray *)arg1 ;
-(id)initWithSourceURL:(id)arg1 ;
-(void)addJPEGDestinationWithSize:(CGSize)arg1 compressionQuality:(double)arg2 url:(id)arg3 ;
-(void)addDestinationWithFormat:(long long)arg1 size:(CGSize)arg2 url:(id)arg3 ;
-(Class)operationClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)debugDescription;
@end
