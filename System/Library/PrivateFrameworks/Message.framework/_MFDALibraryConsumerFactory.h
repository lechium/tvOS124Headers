/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFMessageDataConsumerFactory.h>

@class MFMessageLibrary, MFMessage, NSString;

@interface _MFDALibraryConsumerFactory : NSObject <MFMessageDataConsumerFactory> {

	MFMessageLibrary* _library;
	MFMessage* _message;

}

@property (nonatomic,retain) MFMessageLibrary * library;              //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) MFMessage * message;                     //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MFMessageLibrary *)library;
-(void)setLibrary:(MFMessageLibrary *)arg1 ;
-(id)dataConsumerForPart:(id)arg1 ;
-(void)dealloc;
-(void)setMessage:(MFMessage *)arg1 ;
-(MFMessage *)message;
@end
