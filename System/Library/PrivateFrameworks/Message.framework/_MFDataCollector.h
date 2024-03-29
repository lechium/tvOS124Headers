/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFGuaranteedCollectingDataConsumer.h>

@class MFMailMessageLibrary, MFLibraryMessage, MFBufferedDataConsumer, NSString;

@interface _MFDataCollector : NSObject <MFGuaranteedCollectingDataConsumer> {

	MFMailMessageLibrary* _library;
	MFLibraryMessage* _message;
	MFBufferedDataConsumer* _consumer;
	NSString* _part;
	BOOL _partial;
	BOOL _incomplete;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLibrary:(id)arg1 message:(id)arg2 part:(id)arg3 partial:(BOOL)arg4 incomplete:(BOOL)arg5 ;
-(id)pathForStorage;
-(void)dealloc;
-(id)data;
-(void)done;
-(long long)appendData:(id)arg1 ;
@end

