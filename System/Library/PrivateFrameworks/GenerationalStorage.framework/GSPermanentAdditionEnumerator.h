/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>
#import <libobjc.A.dylib/GSAdditionEnumerating.h>

@class NSError, GSPermanentStorage, NSString, NSArray, GSDaemonProxySync;

@interface GSPermanentAdditionEnumerator : NSEnumerator <GSAdditionEnumerating> {

	GSPermanentStorage* _storage;
	NSString* _nameSpace;
	unsigned long long _withOptions;
	unsigned long long _withoutOptions;
	NSArray* _array;
	unsigned long long _pos;
	GSDaemonProxySync* _proxy;
	NSError* _error;
	id _token;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)_fetchNextBatch;
-(id)initWithStorage:(id)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 ordering:(int)arg5 ;
-(void)dealloc;
-(id)nextObject;
-(NSError *)error;
@end

