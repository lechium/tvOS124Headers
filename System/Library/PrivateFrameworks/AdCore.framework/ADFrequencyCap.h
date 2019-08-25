/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ADFrequencyCap : NSObject {

	NSString* _identifier;
	NSString* _adMetadata;
	long long _downloadType;
	double _setTime;

}

@property (nonatomic,retain) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * adMetadata;               //@synthesize adMetadata=_adMetadata - In the implementation block
@property (assign,nonatomic) long long downloadType;              //@synthesize downloadType=_downloadType - In the implementation block
@property (assign,nonatomic) double setTime;                      //@synthesize setTime=_setTime - In the implementation block
-(void)setAdMetadata:(NSString *)arg1 ;
-(long long)downloadType;
-(void)setDownloadType:(long long)arg1 ;
-(NSString *)adMetadata;
-(id)splitCapData:(id)arg1 ;
-(double)setTime;
-(void)setSetTime:(double)arg1 ;
-(NSString *)identifier;
-(id)description;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

