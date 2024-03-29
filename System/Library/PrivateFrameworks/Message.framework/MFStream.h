/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSInputStream, NSOutputStream, NSMutableDictionary, NSObject, NSError, NSCondition, NSString;

@interface MFStream : NSObject <NSStreamDelegate, NSURLSessionDelegate> {

	NSInputStream* _rStream;
	NSOutputStream* _wStream;
	NSMutableDictionary* _properties;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _location;
	unsigned long long _capacity;
	unsigned long long _length;
	char* _buffer;
	NSError* _error;
	BOOL _streamCanRead;
	BOOL _streamCanWrite;
	BOOL _dispatchedBytesAvailable;
	unsigned long long _bytesRead;
	unsigned long long _bytesWritten;
	BOOL _enableThroughputMonitoring;
	NSCondition* _condition;

}

@property (nonatomic,readonly) NSError * streamError;               //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL isOpen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)networkThread;
+(void)setNetworkThread:(id)arg1 ;
+(id)_networkDispatchQueue;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(NSError *)streamError;
-(void)enableThroughputMonitoring:(BOOL)arg1 ;
-(id)_copyPropertyForKey:(id)arg1 ;
-(void)_createPairWithSocketToHostName:(id)arg1 port:(long long)arg2 ;
-(void)_readBytesFromStream;
-(void)_closeAndReleaseStream:(id)arg1 logMessage:(id)arg2 ;
-(id)initCallBack:(/*^block*/id)arg1 onDispatchQueue:(id)arg2 ;
-(void)openToHostName:(id)arg1 port:(long long)arg2 ;
-(BOOL)isOpen;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
@end

