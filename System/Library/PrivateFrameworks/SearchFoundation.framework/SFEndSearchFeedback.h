/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFEndSearchFeedback : SFFeedback {

	BOOL _isCanceled;
	NSString* _uuid;
	unsigned long long _cancelSearchEvent;

}

@property (nonatomic,copy) NSString * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL isCanceled;                                   //@synthesize isCanceled=_isCanceled - In the implementation block
@property (assign,nonatomic) unsigned long long cancelSearchEvent;              //@synthesize cancelSearchEvent=_cancelSearchEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithStartSearch:(id)arg1 ;
-(unsigned long long)cancelSearchEvent;
-(void)setCancelSearchEvent:(unsigned long long)arg1 ;
-(BOOL)isCanceled;
-(void)setIsCanceled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)uuid;
@end

