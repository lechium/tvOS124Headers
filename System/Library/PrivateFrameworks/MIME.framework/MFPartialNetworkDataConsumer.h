/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFDataConsumer.h>

@protocol MFGuaranteedCollectingDataConsumer;
@class NSData, NSString;

@interface MFPartialNetworkDataConsumer : NSObject <MFDataConsumer> {

	id<MFGuaranteedCollectingDataConsumer> _rawDataConsumer;
	NSData* _strippedData;
	unsigned long long _length;
	unsigned _seenNetworkLineEndings : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyDataWithUnixLineEndings;
-(unsigned long long)length;
-(id)init;
-(void)dealloc;
-(id)data;
-(void)purge;
-(void)done;
-(long long)appendData:(id)arg1 ;
@end

