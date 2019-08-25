/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDDataBuffer.h>

@interface CFPDPurgeableBuffer : CFPDDataBuffer {

	CFDataRef handle;
	unsigned long long allocSize;
	BOOL safe;
	BOOL usedMalloc;

}
-(BOOL)purgable;
-(BOOL)beginAccessing;
-(void)endAccessing;
-(id)initWithFileDescriptor:(int)arg1 size:(unsigned long long)arg2 ;
-(id)initWithPropertyList:(void*)arg1 ;
-(unsigned long long)length;
-(void)dealloc;
-(void*)bytes;
@end

