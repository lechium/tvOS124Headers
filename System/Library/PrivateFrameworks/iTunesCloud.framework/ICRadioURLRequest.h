/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICStoreURLRequest.h>

@class NSNumber;

@interface ICRadioURLRequest : ICStoreURLRequest {

	BOOL _backgroundRadioRequest;
	NSNumber* _privateListeningEnabled;
	NSNumber* _delegatedPrivateListeningEnabled;
	long long _protocolVersion;
	/*^block*/id _radioContentDictionaryCreationBlock;

}

@property (assign,getter=isBackgroundRadioRequest,nonatomic) BOOL backgroundRadioRequest;                                      //@synthesize backgroundRadioRequest=_backgroundRadioRequest - In the implementation block
@property (getter=isPrivateListeningEnabled,nonatomic,copy) NSNumber * privateListeningEnabled;                                //@synthesize privateListeningEnabled=_privateListeningEnabled - In the implementation block
@property (getter=isDelegatedPrivateListeningEnabled,nonatomic,copy) NSNumber * delegatedPrivateListeningEnabled;              //@synthesize delegatedPrivateListeningEnabled=_delegatedPrivateListeningEnabled - In the implementation block
@property (assign,nonatomic) long long protocolVersion;                                                                        //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,copy) id radioContentDictionaryCreationBlock;                                                             //@synthesize radioContentDictionaryCreationBlock=_radioContentDictionaryCreationBlock - In the implementation block
-(void)setProtocolVersion:(long long)arg1 ;
-(long long)protocolVersion;
-(void)setRadioContentDictionaryCreationBlock:(id)arg1 ;
-(void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)isDelegatedPrivateListeningEnabled;
-(BOOL)isBackgroundRadioRequest;
-(void)_decorateHeaderPropertiesForURLRequest:(id)arg1 withBuilderProperties:(id)arg2 ;
-(id)radioContentDictionaryCreationBlock;
-(void)setBackgroundRadioRequest:(BOOL)arg1 ;
-(id)isPrivateListeningEnabled;
-(void)setPrivateListeningEnabled:(NSNumber *)arg1 ;
-(id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 ;
-(void)setDelegatedPrivateListeningEnabled:(NSNumber *)arg1 ;
@end

