/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUILabel.h>

@protocol VUIRentalExpirationLabelDelegate;
@class NSDate, NSString, NSTimer;

@interface VUIRentalExpirationLabel : VUILabel {

	NSDate* _expirationDate;
	id<VUIRentalExpirationLabelDelegate> _delegate;
	NSString* _formatString;
	NSTimer* _expiryUpdateTimer;

}

@property (nonatomic,copy) NSString * formatString;                                             //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,retain) NSTimer * expiryUpdateTimer;                                       //@synthesize expiryUpdateTimer=_expiryUpdateTimer - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                             //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic,__weak) id<VUIRentalExpirationLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)labelWithExpirationDate:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3 formatString:(id)arg4 ;
+(id)_calculateExpirationStringForDate:(id)arg1 displayWarningColor:(BOOL*)arg2 updateInterval:(long long*)arg3 formatString:(id)arg4 ;
+(id)calculateExpirationStringForDate:(id)arg1 updateInterval:(long long*)arg2 formatString:(id)arg3 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)dealloc;
-(void)setDelegate:(id<VUIRentalExpirationLabelDelegate>)arg1 ;
-(id<VUIRentalExpirationLabelDelegate>)delegate;
-(void)willMoveToWindow:(id)arg1 ;
-(void)invalidateTimer;
-(NSString *)formatString;
-(void)setFormatString:(NSString *)arg1 ;
-(void)_computeExpirationLabel:(id)arg1 ;
-(NSTimer *)expiryUpdateTimer;
-(void)setExpiryUpdateTimer:(NSTimer *)arg1 ;
@end

