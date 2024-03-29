/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSString;

@interface AVFileValidator : NSObject {

	AVFileValidatorPrivate* _priv;
	NSString* _validationRules;

}

@property (retain) NSString * validationRules;              //@synthesize validationRules=_validationRules - In the implementation block
-(NSString *)validationRules;
-(id)notificationForFileCheckResult:(id)arg1 ;
-(void)postNotificationForCallback:(id)arg1 ;
-(void)setValidationRules:(NSString *)arg1 ;
-(id)validateBlocking:(BOOL)arg1 ;
-(BOOL)isStreaming;
-(void)validateForCameraRoll;
-(BOOL)validateSyncWithError:(id*)arg1 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(void)cancel;
-(float)progress;
-(id)url;
-(id)initWithURL:(id)arg1 ;
-(void)validate;
-(BOOL)isCompleted;
@end

