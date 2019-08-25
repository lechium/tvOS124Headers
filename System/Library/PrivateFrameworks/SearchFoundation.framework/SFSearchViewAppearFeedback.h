/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@interface SFSearchViewAppearFeedback : SFFeedback {

	BOOL _isOnLockScreen;
	BOOL _isOverApp;
	BOOL _readerTextAvailable;
	unsigned long long _viewAppearEvent;

}

@property (assign,nonatomic) unsigned long long viewAppearEvent;              //@synthesize viewAppearEvent=_viewAppearEvent - In the implementation block
@property (assign,nonatomic) BOOL isOnLockScreen;                             //@synthesize isOnLockScreen=_isOnLockScreen - In the implementation block
@property (assign,nonatomic) BOOL isOverApp;                                  //@synthesize isOverApp=_isOverApp - In the implementation block
@property (assign,nonatomic) BOOL readerTextAvailable;                        //@synthesize readerTextAvailable=_readerTextAvailable - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isOnLockScreen;
-(void)setViewAppearEvent:(unsigned long long)arg1 ;
-(void)setIsOnLockScreen:(BOOL)arg1 ;
-(void)setIsOverApp:(BOOL)arg1 ;
-(void)setReaderTextAvailable:(BOOL)arg1 ;
-(unsigned long long)viewAppearEvent;
-(BOOL)isOverApp;
-(BOOL)readerTextAvailable;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithEvent:(unsigned long long)arg1 ;
@end
