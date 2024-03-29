/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSMutableDictionary;

@interface __NSCFURLSessionTaskActiveStreamDependencyInfo : NSObject {

	NSNumber* _streamID;
	NSMutableDictionary* _mainDocumentTaskURLs;
	NSMutableDictionary* _mainDocumentTaskMimeTypes;

}

@property (nonatomic,retain) NSNumber * _streamID;                                          //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _mainDocumentTaskURLs;                   //@synthesize mainDocumentTaskURLs=_mainDocumentTaskURLs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _mainDocumentTaskMimeTypes;              //@synthesize mainDocumentTaskMimeTypes=_mainDocumentTaskMimeTypes - In the implementation block
-(void)set_streamID:(NSNumber *)arg1 ;
-(NSMutableDictionary *)_mainDocumentTaskURLs;
-(NSMutableDictionary *)_mainDocumentTaskMimeTypes;
-(void)set_mainDocumentTaskURLs:(NSMutableDictionary *)arg1 ;
-(void)set_mainDocumentTaskMimeTypes:(NSMutableDictionary *)arg1 ;
-(NSNumber *)_streamID;
-(id)initWithStreamID:(id)arg1 requestURLString:(id)arg2 dependencyInfo:(id)arg3 ;
-(void)addNewStreamID:(id)arg1 requestURLString:(id)arg2 ;
-(int)parentStreamIDForURLString:(id)arg1 ;
-(int)parentStreamIDForMimeType:(id)arg1 ;
-(void)removeStreamWithStreamID:(id)arg1 requestURLString:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEmpty;
@end

