/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBPunchout.h>
@class NSString, NSArray, _SFPBUserActivityData, NSData;


@protocol _SFPBPunchout <NSObject>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSArray * urls; 
@property (nonatomic,retain) _SFPBUserActivityData * userActivityData; 
@property (nonatomic,copy) NSString * actionTarget; 
@property (assign,nonatomic) BOOL isRunnableInBackground; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(unsigned long long)urlsCount;
-(void)clearUrls;
-(NSArray *)urls;
-(void)setUrls:(id)arg1;
-(NSString *)actionTarget;
-(void)setUserActivityData:(id)arg1;
-(BOOL)isRunnableInBackground;
-(void)setIsRunnableInBackground:(BOOL)arg1;
-(void)setActionTarget:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)addUrls:(id)arg1;
-(id)urlsAtIndex:(unsigned long long)arg1;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(void)setName:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSString *)label;
-(_SFPBUserActivityData *)userActivityData;
-(void)setLabel:(id)arg1;
-(void)setBundleIdentifier:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, _SFPBUserActivityData, NSData;

@interface _SFPBPunchout : PBCodable <_SFPBPunchout, NSSecureCoding> {

	BOOL _isRunnableInBackground;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _label;
	NSArray* _urls;
	_SFPBUserActivityData* _userActivityData;
	NSString* _actionTarget;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                        //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSArray * urls;                                          //@synthesize urls=_urls - In the implementation block
@property (nonatomic,retain) _SFPBUserActivityData * userActivityData;              //@synthesize userActivityData=_userActivityData - In the implementation block
@property (nonatomic,copy) NSString * actionTarget;                                 //@synthesize actionTarget=_actionTarget - In the implementation block
@property (assign,nonatomic) BOOL isRunnableInBackground;                           //@synthesize isRunnableInBackground=_isRunnableInBackground - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)urlsCount;
-(void)clearUrls;
-(NSArray *)urls;
-(void)setUrls:(NSArray *)arg1 ;
-(NSString *)actionTarget;
-(void)setUserActivityData:(_SFPBUserActivityData *)arg1 ;
-(BOOL)isRunnableInBackground;
-(void)setIsRunnableInBackground:(BOOL)arg1 ;
-(void)setActionTarget:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(void)addUrls:(id)arg1 ;
-(id)urlsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)label;
-(_SFPBUserActivityData *)userActivityData;
-(void)setLabel:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSData *)jsonData;
@end

