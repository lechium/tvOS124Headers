/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <vCard/vCard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSData, NSDictionary;

@interface CNVCardImage : NSObject <NSCopying, NSMutableCopying> {

	NSData* _data;
	NSDictionary* _cropRects;
	CGSize _size;

}

@property (nonatomic,copy,readonly) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * cropRects;              //@synthesize cropRects=_cropRects - In the implementation block
@property (nonatomic,readonly) CGSize size;                                //@synthesize size=_size - In the implementation block
+(CGSize)sizeOfImageData:(id)arg1 ;
-(NSDictionary *)cropRects;
-(id)initWithData:(id)arg1 cropRects:(id)arg2 size:(CGSize)arg3 ;
-(void)describePropertiesWithBuilder:(id)arg1 ;
-(id)initWithData:(id)arg1 cropRects:(id)arg2 ;
-(CGSize)size;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
@end
