/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImage.h>

@class NSDictionary, PLLoadRequestKey;

@interface PLCachedImage : UIImage {

	NSDictionary* _metadata;
	int _format;
	PLLoadRequestKey* _cacheKey;

}

@property (nonatomic,copy) PLLoadRequestKey * cacheKey;              //@synthesize cacheKey=_cacheKey - In the implementation block
@property (assign,nonatomic) int format;                             //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                //@synthesize metadata=_metadata - In the implementation block
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setFormat:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(int)format;
-(PLLoadRequestKey *)cacheKey;
-(void)setCacheKey:(PLLoadRequestKey *)arg1 ;
@end

