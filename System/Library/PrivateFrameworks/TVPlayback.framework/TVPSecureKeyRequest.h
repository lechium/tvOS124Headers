/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPResourceLoadingRequest.h>

@class NSData, NSDate, NSNumber, NSDictionary, NSString, TVPPlaybackReportingEventCollection;

@interface TVPSecureKeyRequest : TVPResourceLoadingRequest {

	BOOL _retrievesOfflineKeys;
	unsigned long long _requestID;
	NSData* _certificateData;
	NSData* _contentIdentifierData;
	NSData* _keyRequestData;
	NSDate* _startDate;
	NSNumber* _rentalID;
	NSDictionary* _requestOptions;
	unsigned long long _retryCount;
	NSString* _reportingID;
	TVPPlaybackReportingEventCollection* _eventCollection;
	NSNumber* _requestCompletionTime;
	NSDate* _requestEndDate;
	NSDate* _requestStartDate;

}

@property (nonatomic,copy) NSData * keyRequestData;                                              //@synthesize keyRequestData=_keyRequestData - In the implementation block
@property (nonatomic,copy) NSData * certificateData;                                             //@synthesize certificateData=_certificateData - In the implementation block
@property (nonatomic,copy) NSData * contentIdentifierData;                                       //@synthesize contentIdentifierData=_contentIdentifierData - In the implementation block
@property (nonatomic,copy) NSDictionary * requestOptions;                                        //@synthesize requestOptions=_requestOptions - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                                                   //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                                      //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,copy) NSNumber * rentalID;                                                  //@synthesize rentalID=_rentalID - In the implementation block
@property (nonatomic,readonly) NSString * reportingID;                                           //@synthesize reportingID=_reportingID - In the implementation block
@property (nonatomic,retain) TVPPlaybackReportingEventCollection * eventCollection;              //@synthesize eventCollection=_eventCollection - In the implementation block
@property (nonatomic,retain) NSNumber * requestCompletionTime;                                   //@synthesize requestCompletionTime=_requestCompletionTime - In the implementation block
@property (nonatomic,copy) NSDate * requestEndDate;                                              //@synthesize requestEndDate=_requestEndDate - In the implementation block
@property (nonatomic,copy) NSDate * requestStartDate;                                            //@synthesize requestStartDate=_requestStartDate - In the implementation block
@property (nonatomic,readonly) unsigned long long requestID;                                     //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) BOOL isRenewal; 
@property (nonatomic,readonly) BOOL offlineKeyUsageAllowed; 
@property (assign,nonatomic) BOOL retrievesOfflineKeys;                                          //@synthesize retrievesOfflineKeys=_retrievesOfflineKeys - In the implementation block
-(NSDate *)startDate;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(NSDictionary *)requestOptions;
-(NSDate *)requestStartDate;
-(NSDate *)requestEndDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setRequestOptions:(NSDictionary *)arg1 ;
-(NSNumber *)rentalID;
-(unsigned long long)requestID;
-(id)initWithAssetResourceLoadingRequest:(id)arg1 ;
-(BOOL)retrievesOfflineKeys;
-(NSData *)contentIdentifierData;
-(void)finishLoadingWithResponseData:(id)arg1 renewalDate:(id)arg2 keyType:(long long)arg3 ;
-(BOOL)loadKeyRequestDataWithError:(id*)arg1 ;
-(void)loadKeyRequestDataAsynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(id)offlineKeyDataForResponseData:(id)arg1 error:(id*)arg2 ;
-(BOOL)offlineKeyUsageAllowed;
-(void)setContentIdentifierData:(NSData *)arg1 ;
-(void)setRetrievesOfflineKeys:(BOOL)arg1 ;
-(NSString *)reportingID;
-(NSNumber *)requestCompletionTime;
-(void)setRequestCompletionTime:(NSNumber *)arg1 ;
-(TVPPlaybackReportingEventCollection *)eventCollection;
-(void)setRequestStartDate:(NSDate *)arg1 ;
-(void)setCertificateData:(NSData *)arg1 ;
-(NSData *)keyRequestData;
-(NSData *)certificateData;
-(void)setKeyRequestData:(NSData *)arg1 ;
-(void)setRequestEndDate:(NSDate *)arg1 ;
-(BOOL)isRenewal;
-(void)setEventCollection:(TVPPlaybackReportingEventCollection *)arg1 ;
-(void)setRentalID:(NSNumber *)arg1 ;
@end

