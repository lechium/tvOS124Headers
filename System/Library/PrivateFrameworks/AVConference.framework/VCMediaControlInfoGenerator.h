/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMediaControlInfoDelegate.h>

@class NSMutableArray, NSString;

@interface VCMediaControlInfoGenerator : NSObject <VCMediaControlInfoDelegate> {

	unsigned _type;
	CFDictionaryRef _callbacksDict;
	NSMutableArray* _controlInfoPool;
	opaque_pthread_mutex_t _controlInfoPoolLock;

}

@property (readonly) unsigned type;                                 //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void*)newControlInfo;
-(void*)newControlInfoWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC55*)arg3 ;
-(id)newControlInfoFromPool;
-(void)disposeControlInfo:(id)arg1 ;
-(int)registerFillBlobCallback:(/*function pointer*/void*)arg1 processBlobCallback:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(int)deregisterCallbacksWithContext:(void*)arg1 ;
-(void*)newMediaControlInfo;
-(void*)newMediaControlInfoWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC55*)arg3 ;
-(void)dealloc;
-(unsigned)type;
-(id)initWithType:(unsigned)arg1 ;
@end

