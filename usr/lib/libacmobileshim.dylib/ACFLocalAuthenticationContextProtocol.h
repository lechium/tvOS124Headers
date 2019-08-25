/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ACFLocalAuthenticationContextProtocol <NSObject>
@property (nonatomic,copy) NSString * localizedReason; 
@property (nonatomic,copy) NSString * localizedFallbackTitle; 
@required
-(BOOL)canEvaluatePolicy:(long long)arg1 error:(id*)arg2;
-(NSString *)localizedReason;
-(void)setLocalizedReason:(id)arg1;
-(void)setLocalizedFallbackTitle:(id)arg1;
-(NSString *)localizedFallbackTitle;
-(void)evaluatePolicy:(long long)arg1 completion:(/*^block*/id)arg2;
-(void)reset;

@end

