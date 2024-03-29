/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSURL, NSError, SKPaymentTransaction;

@interface SKDownload : NSObject {

	id _internal;

}

@property (setter=_setDownloadID:,getter=_downloadID,nonatomic,copy) NSNumber * _downloadID; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) long long downloadState; 
@property (nonatomic,readonly) long long contentLength; 
@property (nonatomic,readonly) NSString * contentIdentifier; 
@property (nonatomic,readonly) NSURL * contentURL; 
@property (nonatomic,readonly) NSString * contentVersion; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) float progress; 
@property (nonatomic,readonly) double timeRemaining; 
@property (nonatomic,readonly) SKPaymentTransaction * transaction; 
+(id)contentURLForProductID:(id)arg1 ;
+(void)deleteContentForProductID:(id)arg1 ;
-(void)_setTransaction:(id)arg1 ;
-(void)_setContentIdentifier:(id)arg1 ;
-(NSString *)contentVersion;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(long long)contentLength;
-(SKPaymentTransaction *)transaction;
-(void)_setError:(id)arg1 ;
-(void)_setVersion:(id)arg1 ;
-(double)timeRemaining;
-(NSURL *)contentURL;
-(NSString *)contentIdentifier;
-(NSNumber *)_downloadID;
-(void)_setContentLength:(id)arg1 ;
-(void)_setContentURL:(id)arg1 ;
-(void)_setDownloadState:(long long)arg1 ;
-(void)_setTimeRemaining:(double)arg1 ;
-(void)_applyChangeset:(id)arg1 ;
-(void)_setDownloadID:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(long long)state;
-(float)progress;
-(void)_setProgress:(float)arg1 ;
-(NSError *)error;
-(long long)downloadState;
@end

