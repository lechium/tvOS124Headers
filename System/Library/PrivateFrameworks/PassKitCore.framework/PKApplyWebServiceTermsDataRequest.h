/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSURL, NSString;

@interface PKApplyWebServiceTermsDataRequest : PKApplyWebServiceRequest {

	NSURL* _baseURL;
	unsigned long long _featureIdentifier;
	NSString* _applicationIdentifier;
	NSString* _termsIdentifier;
	NSString* _termsDataFormat;

}

@property (nonatomic,retain) NSURL * baseURL;                                   //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;                    //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * termsIdentifier;                          //@synthesize termsIdentifier=_termsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * termsDataFormat;                          //@synthesize termsDataFormat=_termsDataFormat - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSURL *)baseURL;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(NSString *)termsIdentifier;
-(void)setTermsIdentifier:(NSString *)arg1 ;
-(NSString *)termsDataFormat;
-(void)setTermsDataFormat:(NSString *)arg1 ;
-(unsigned long long)featureIdentifier;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)applicationIdentifier;
@end

