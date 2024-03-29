/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface TIImageCacheItem : NSObject <NSSecureCoding> {

	unsigned char _format;
	double _scale;
	CGColorRef _formatColor;
	NSData* _data;
	/*^block*/id _dataReleaseHandler;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned char format;                //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) CGColorRef formatColor;              //@synthesize formatColor=_formatColor - In the implementation block
@property (assign,nonatomic) double scale;                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSData * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id dataReleaseHandler;                 //@synthesize dataReleaseHandler=_dataReleaseHandler - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cacheItemWithSize:(CGSize)arg1 format:(unsigned char)arg2 formatColor:(CGColorRef)arg3 scale:(double)arg4 data:(id)arg5 dataReleaseHandler:(/*^block*/id)arg6 ;
+(id)cacheItemWithSize:(CGSize)arg1 format:(unsigned char)arg2 formatColor:(CGColorRef)arg3 scale:(double)arg4 data:(id)arg5 ;
-(void)setFormat:(unsigned char)arg1 ;
-(void)_callDataReleaseHandler;
-(id)dataReleaseHandler;
-(void)setDataReleaseHandler:(id)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(NSData *)data;
-(unsigned char)format;
-(void)setData:(NSData *)arg1 ;
-(CGColorRef)formatColor;
-(void)setFormatColor:(CGColorRef)arg1 ;
@end

