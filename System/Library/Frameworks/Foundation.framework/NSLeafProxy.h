/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDocInfo;

@interface NSLeafProxy : _UKNOWN_SUPERCLASS_ <NSCopying> {

	Class isa;
	NSString* dir;
	NSString* file;
	NSDocInfo* docInfo;
	long long refCount;
	id realObject;

}
+();
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
-(id)initDir:(id)arg1 file:(id)arg2 docInfo:(id)arg3 ;
-(void)reallyDealloc;
-(void)dealloc;
-(void)release;
-(id)autorelease;
-(BOOL)isProxy;
-(id)retain;
-(unsigned long long)retainCount;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)forwardInvocation:(id)arg1 ;
@end
