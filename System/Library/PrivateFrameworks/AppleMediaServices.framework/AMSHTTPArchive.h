/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface AMSHTTPArchive : NSObject {

	BOOL _compressed;
	NSData* _backingJSONData;
	NSData* _JSONData;

}

@property (nonatomic,retain) NSData * backingJSONData;                         //@synthesize backingJSONData=_backingJSONData - In the implementation block
@property (assign,getter=isCompressed,nonatomic) BOOL compressed;              //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,readonly) NSData * JSONData;                              //@synthesize JSONData=_JSONData - In the implementation block
+(double)_timeIntervalFromFilename:(id)arg1 ;
+(id)_dateFormatterForTimeZone:(id)arg1 ;
+(id)merge:(id)arg1 withEstimatedFileSizeLimit:(unsigned long long)arg2 ;
+(id)directory;
+(id)merge:(id)arg1 ;
+(void)removeHTTPArchiveFilesOlderThanDate:(id)arg1 ;
+(id)_createJSONObjectForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
+(id)_createJSONObjectForEntries:(id)arg1 ;
+(id)_generateCommentsStringForMetrics:(id)arg1 ;
+(id)_generateRequestDictionaryForMetrics:(id)arg1 requestData:(id)arg2 ;
+(id)_generateResponseDictionaryForMetrics:(id)arg1 responseData:(id)arg2 ;
+(id)_generateHeadersArrayForHTTPHeaders:(id)arg1 ;
+(id)_generateContentDictionaryForResponse:(id)arg1 responseData:(id)arg2 ;
-(NSData *)backingJSONData;
-(NSData *)JSONData;
-(void)setBackingJSONData:(NSData *)arg1 ;
-(void)setCompressed:(BOOL)arg1 ;
-(BOOL)writeToDiskWithError:(id*)arg1 compressed:(BOOL)arg2 ;
-(id)_initWithJSONObject:(id)arg1 ;
-(BOOL)isCompressed;
-(id)initWithURLTaskInfo:(id)arg1 ;
@end

