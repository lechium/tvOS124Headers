/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAMLWriterDelegate.h>

@class NSString, NSDictionary;

@interface CACodingCAMLWriterDelegate : NSObject <CAMLWriterDelegate> {

	NSString* _resourceDir;
	int _serial;
	NSString* _imageFormat;
	NSDictionary* _imageEncodeOptions;
	BOOL _skipHiddenLayers;

}

@property (copy) NSString * imageFormat;                            //@synthesize imageFormat=_imageFormat - In the implementation block
@property (copy) NSDictionary * imageEncodeOptions;                 //@synthesize imageEncodeOptions=_imageEncodeOptions - In the implementation block
@property (assign) BOOL skipHiddenLayers;                           //@synthesize skipHiddenLayers=_skipHiddenLayers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)CAMLWriter:(id)arg1 typeForObject:(id)arg2 ;
-(id)CAMLWriter:(id)arg1 URLForResource:(id)arg2 ;
-(BOOL)CAMLWriter:(id)arg1 shouldEncodeObject:(id)arg2 ;
-(id)initWithResourceDir:(id)arg1 ;
-(NSDictionary *)imageEncodeOptions;
-(void)setImageEncodeOptions:(NSDictionary *)arg1 ;
-(BOOL)skipHiddenLayers;
-(void)setSkipHiddenLayers:(BOOL)arg1 ;
-(NSString *)imageFormat;
-(void)setImageFormat:(NSString *)arg1 ;
-(void)dealloc;
@end

