/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACFLocalAuthenticationContextProtocol.h>

@class NSString, LAContext;

@interface ACFLocalAuthenticationContext : NSObject <ACFLocalAuthenticationContextProtocol> {

	LAContext* _context;
	NSString* _localizedReason;
	NSString* _localizedFallbackTitle;

}

@property (nonatomic,retain) LAContext * context;                          //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * localizedReason;                     //@synthesize localizedReason=_localizedReason - In the implementation block
@property (nonatomic,copy) NSString * localizedFallbackTitle;              //@synthesize localizedFallbackTitle=_localizedFallbackTitle - In the implementation block
-(BOOL)canEvaluatePolicy:(long long)arg1 error:(id*)arg2 ;
-(NSString *)localizedReason;
-(void)setLocalizedReason:(NSString *)arg1 ;
-(void)setLocalizedFallbackTitle:(NSString *)arg1 ;
-(NSString *)localizedFallbackTitle;
-(void)evaluatePolicy:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setContext:(LAContext *)arg1 ;
-(LAContext *)context;
-(void)reset;
@end

