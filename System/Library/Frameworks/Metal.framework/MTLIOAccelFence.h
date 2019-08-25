/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTLFence.h>

@protocol MTLDevice;
@class NSString, MTLIOAccelDevice;

@interface MTLIOAccelFence : NSObject <MTLFence> {

	MTLIOAccelDevice*<MTLDevice> _device;
	unsigned _fenceIndex;
	NSString* _label;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label;                                  //@synthesize label=_label - In the implementation block
-(id)initWithDevice:(id)arg1 fenceIndex:(unsigned)arg2 ;
-(id<MTLDevice>)device;
-(void)dealloc;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end

